#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogoviagem.h"
#include "itemviagemwidget.h"
#include "detalhesviagemwidget.h"
#include "app_globals.h"
#include <QListWidgetItem>
#include <QMessageBox>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMouseEvent>
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("MotoPlanner");

    // --- LÓGICA DO MENU ---
    // Atribui os menus da UI aos nossos ponteiros de membro
    m_viagensMenu = ui->menuViagens;
    m_sobreMenu = ui->menuSobre;

    // Instala o filtro de eventos na barra de menu para capturar cliques nos títulos
    menuBar()->installEventFilter(this);

    // Conexões para as Ações DENTRO do menu "Viagens"
    connect(ui->actionVer_Viagens, &QAction::triggered, this, &MainWindow::mostrarPaginaViagens);
    connect(ui->actionVer_Historico, &QAction::triggered, this, &MainWindow::mostrarPaginaHistorico);
    connect(ui->actionNova_Viagem, &QAction::triggered, this, &MainWindow::criarNovaViagem);

    // --- CONEXÃO DE SINAL DA LISTA ---
    connect(ui->listHistorico, &QListWidget::itemSelectionChanged, this, &MainWindow::on_listHistorico_itemSelectionChanged);

    carregarDados();
    mostrarPaginaViagens(); // Inicia na página de viagens
}

MainWindow::~MainWindow()
{
    delete ui;
}

// IMPLEMENTAÇÃO DO FILTRO DE EVENTOS (CORRIGIDO)
bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    // Verifica se o objeto é a barra de menu e o evento é um clique
    if (obj == menuBar() && event->type() == QEvent::MouseButtonPress)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        QAction *action = menuBar()->actionAt(mouseEvent->pos());

        if (action) // Se um título de menu foi clicado
        {
            // Se o clique foi no título do menu "Sobre"
            if (action == m_sobreMenu->menuAction()) {
                ui->stackedWidget->setCurrentIndex(1); // Muda para a página "Sobre"
                return true; // Consome o evento para o menu não tentar abrir
            }
            // Para qualquer outro clique de menu (como "Viagens"), o evento passa
        }
    }
    // Para todos os outros eventos, usa a implementação padrão
    return QMainWindow::eventFilter(obj, event);
}

// ============================================================================
// == SLOTS DE NAVEGAÇÃO E AÇÕES PRINCIPAIS
// ============================================================================

void MainWindow::mostrarPaginaViagens()
{
    ui->stackedWidget->setCurrentIndex(0);
    atualizarListasDeViagens();
}

void MainWindow::mostrarPaginaHistorico()
{
    ui->stackedWidget->setCurrentIndex(2);
    atualizarListaHistorico();
    ui->detalhesHistoricoPage->limparDetalhes();
}

void MainWindow::criarNovaViagem()
{
    DialogoViagem dialogo(this);
    if (dialogo.exec() == QDialog::Accepted) {
        Viagem novaViagem = dialogo.getViagem();
        novaViagem.adicionarParticipante(currentUser);
        m_viagens.append(novaViagem);
        salvarDados();
        if (ui->stackedWidget->currentIndex() == 0) {
            atualizarListasDeViagens();
        }
    }
}

void MainWindow::editarViagem(QUuid id)
{
    for (int i = 0; i < m_viagens.size(); ++i) {
        if (m_viagens[i].getId() == id) {
            DialogoViagem dialogo(m_viagens[i], this);
            if (dialogo.exec() == QDialog::Accepted) {
                Viagem viagemEditada = dialogo.getViagem();
                viagemEditada.setId(m_viagens[i].getId());
                viagemEditada.setParticipantes(m_viagens[i].getParticipantes());
                m_viagens[i] = viagemEditada;
                salvarDados();
                atualizarListasDeViagens();
            }
            return;
        }
    }
}

void MainWindow::excluirViagem(QUuid id)
{
    if (QMessageBox::question(this, "Excluir Viagem", "Tem certeza?") == QMessageBox::Yes) {
        m_viagens.removeIf([id](const Viagem& v){ return v.getId() == id; });
        salvarDados();
        atualizarListasDeViagens();
    }
}

void MainWindow::entrarNaViagem(QUuid id)
{
    for (int i = 0; i < m_viagens.size(); ++i) {
        if (m_viagens[i].getId() == id) {
            m_viagens[i].adicionarParticipante(currentUser);
            salvarDados();
            atualizarListasDeViagens();
            return;
        }
    }
}

void MainWindow::finalizarViagem(QUuid id)
{
    if (QMessageBox::question(this, "Finalizar Viagem", "Mover para o histórico?") == QMessageBox::Yes) {
        for (int i = 0; i < m_viagens.size(); ++i) {
            if (m_viagens[i].getId() == id) {
                m_viagens[i].setFinalizada(true);
                salvarDados();
                atualizarListasDeViagens();
                return;
            }
        }
    }
}

// ============================================================================
// == SLOT DE SELEÇÃO DA LISTA DE HISTÓRICO
// ============================================================================

void MainWindow::on_listHistorico_itemSelectionChanged()
{
    QList<QListWidgetItem*> selection = ui->listHistorico->selectedItems();
    if (selection.isEmpty()) {
        ui->detalhesHistoricoPage->limparDetalhes();
        return;
    }
    auto* itemWidget = qobject_cast<ItemViagemWidget*>(ui->listHistorico->itemWidget(selection.first()));
    if(itemWidget) {
        for(const auto& viagem : m_viagens) {
            if(viagem.getId() == itemWidget->getIdViagem()) {
                ui->detalhesHistoricoPage->exibirDetalhes(viagem);
                return;
            }
        }
    }
}

// ============================================================================
// == FUNÇÕES AUXILIARES
// ============================================================================

void MainWindow::atualizarListasDeViagens()
{
    ui->listMinhasViagens->clear();
    ui->listViagensDisponiveis->clear();
    for (const Viagem &viagem : m_viagens) {
        if (viagem.isFinalizada()) continue;
        ItemViagemWidget *itemWidget = new ItemViagemWidget(viagem, false, this);
        if (viagem.getParticipantes().contains(currentUser)) {
            QListWidgetItem *listItem = new QListWidgetItem(ui->listMinhasViagens);
            connect(itemWidget, &ItemViagemWidget::editarRequisitado, this, &MainWindow::editarViagem);
            connect(itemWidget, &ItemViagemWidget::excluirRequisitado, this, &MainWindow::excluirViagem);
            connect(itemWidget, &ItemViagemWidget::finalizarRequisitado, this, &MainWindow::finalizarViagem);
            listItem->setSizeHint(itemWidget->sizeHint());
            ui->listMinhasViagens->addItem(listItem);
            ui->listMinhasViagens->setItemWidget(listItem, itemWidget);
        } else {
            QListWidgetItem *listItem = new QListWidgetItem(ui->listViagensDisponiveis);
            connect(itemWidget, &ItemViagemWidget::entrarRequisitado, this, &MainWindow::entrarNaViagem);
            listItem->setSizeHint(itemWidget->sizeHint());
            ui->listViagensDisponiveis->addItem(listItem);
            ui->listViagensDisponiveis->setItemWidget(listItem, itemWidget);
        }
    }
}

void MainWindow::atualizarListaHistorico()
{
    ui->listHistorico->clear();
    for (const Viagem &viagem : m_viagens) {
        if (viagem.isFinalizada()) {
            QListWidgetItem *listItem = new QListWidgetItem(ui->listHistorico);
            ItemViagemWidget *itemWidget = new ItemViagemWidget(viagem, true, this);
            listItem->setSizeHint(itemWidget->sizeHint());
            ui->listHistorico->addItem(listItem);
            ui->listHistorico->setItemWidget(listItem, itemWidget);
        }
    }
}

// ============================================================================
// == FUNÇÕES PARA PERSISTÊNCIA DE DADOS (SALVAR/CARREGAR)
// ============================================================================

void MainWindow::salvarDados()
{
    QJsonArray arrayViagens;
    for (const Viagem &viagem : m_viagens) {
        QJsonObject objViagem;
        objViagem["id"] = viagem.getId().toString();
        objViagem["nome"] = viagem.getNome();
        objViagem["destino"] = viagem.getDestino();
        objViagem["data"] = viagem.getData().toString(Qt::ISODate);
        objViagem["descricao"] = viagem.getDescricao();
        objViagem["fotos"] = QJsonArray::fromStringList(viagem.getCaminhosFotos());
        objViagem["participantes"] = QJsonArray::fromStringList(viagem.getParticipantes());
        objViagem["finalizada"] = viagem.isFinalizada();
        arrayViagens.append(objViagem);
    }
    QJsonDocument doc(arrayViagens);
    QFile arquivo("motoplanner_data.json");
    if (arquivo.open(QIODevice::WriteOnly)) {
        arquivo.write(doc.toJson());
    }
}

void MainWindow::carregarDados()
{
    QFile arquivo("motoplanner_data.json");
    if (!arquivo.open(QIODevice::ReadOnly)) return;
    QJsonDocument doc = QJsonDocument::fromJson(arquivo.readAll());
    m_viagens.clear();
    for (const QJsonValue &valor : doc.array()) {
        QJsonObject obj = valor.toObject();
        Viagem v;
        if(obj.contains("id")) {
            v.setId(QUuid(obj["id"].toString()));
        }
        v.setNome(obj["nome"].toString());
        v.setDestino(obj["destino"].toString());
        v.setData(QDate::fromString(obj["data"].toString(), Qt::ISODate));
        v.setDescricao(obj["descricao"].toString());
        v.setFinalizada(obj["finalizada"].toBool());
        QStringList fotos;
        if(obj["fotos"].isArray()){
            for(const QJsonValue& valFoto : obj["fotos"].toArray()) fotos.append(valFoto.toString());
        }
        v.setCaminhosFotos(fotos);
        QStringList participantes;
        if(obj["participantes"].isArray()){
            for(const QJsonValue& valPart : obj["participantes"].toArray()) participantes.append(valPart.toString());
        }
        v.setParticipantes(participantes);
        m_viagens.append(v);
    }
}
