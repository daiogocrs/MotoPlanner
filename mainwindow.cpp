// #############################################################################
// ## ARQUIVO: mainwindow.cpp
// ## PROJETO: MotoPlanner
// ## DESCRIÇÃO: Implementação completa da janela principal, que gerencia a
// ##            lista de viagens, exibe detalhes e interage com o usuário.
// #############################################################################

#include "mainwindow.h"
#include "ui_mainwindow.h"

// Inclusões necessárias para as funcionalidades
#include "dialogoviagem.h"
#include "itemviagemwidget.h"

#include <QListWidgetItem>
#include <QMessageBox>
#include <QPixmap>

// Inclusões para manipulação de JSON e arquivos
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_fotoAtualIndex(0) // Inicializa o índice da foto com 0
{
    ui->setupUi(this);
    this->setWindowTitle("MotoPlanner");

    // Conecta o sinal de mudança de seleção da lista ao nosso slot
    connect(ui->listWidgetViagens, &QListWidget::itemSelectionChanged,
            this, &MainWindow::on_listWidgetViagens_itemSelectionChanged);

    // Carrega as viagens salvas ao iniciar o programa
    carregarDados();

    // Exibe as viagens na lista
    atualizarListaViagens();

    // Garante que a área de detalhes comece limpa e com instruções
    limparDetalhes();
}

MainWindow::~MainWindow()
{
    delete ui;
}


// ============================================================================
// == SLOTS PARA AÇÕES PRINCIPAIS (CRIAR, EDITAR, EXCLUIR)
// ============================================================================

void MainWindow::on_btnNovaViagem_clicked()
{
    // Abre o diálogo para criar uma nova viagem
    DialogoViagem dialogo(this);
    if (dialogo.exec() == QDialog::Accepted) {
        Viagem novaViagem = dialogo.getViagem();
        m_viagens.append(novaViagem);

        salvarDados(); // Salva a lista atualizada
        atualizarListaViagens(); // Atualiza a exibição na tela
    }
}

void MainWindow::editarViagem(QUuid id)
{
    // Encontra a viagem na lista para edição
    for (int i = 0; i < m_viagens.size(); ++i) {
        if (m_viagens[i].getId() == id) {
            // Abre o diálogo, passando a viagem a ser editada
            DialogoViagem dialogo(m_viagens[i], this);
            if (dialogo.exec() == QDialog::Accepted) {
                m_viagens[i] = dialogo.getViagem(); // Substitui a viagem antiga pela nova

                salvarDados();
                atualizarListaViagens();
                // Força a atualização da visão de detalhes se o item editado estava selecionado
                on_listWidgetViagens_itemSelectionChanged();
            }
            return; // Sai do loop após encontrar e tratar a viagem
        }
    }
}

void MainWindow::excluirViagem(QUuid id)
{
    // Pede confirmação antes de uma ação destrutiva
    QMessageBox::StandardButton resposta;
    resposta = QMessageBox::question(this, "Excluir Viagem", "Tem certeza que deseja excluir esta viagem? Esta ação não pode ser desfeita.",
                                     QMessageBox::Yes | QMessageBox::No);

    if (resposta == QMessageBox::Yes) {
        // Desconecta o sinal temporariamente para evitar erros durante a remoção do item
        disconnect(ui->listWidgetViagens, &QListWidget::itemSelectionChanged, this, &MainWindow::on_listWidgetViagens_itemSelectionChanged);

        // Remove a viagem da lista de dados usando o ID
        m_viagens.removeIf([id](const Viagem& v){ return v.getId() == id; });

        salvarDados();
        atualizarListaViagens();
        limparDetalhes(); // Limpa o painel de detalhes

        // Reconecta o sinal para que a seleção volte a funcionar
        connect(ui->listWidgetViagens, &QListWidget::itemSelectionChanged, this, &MainWindow::on_listWidgetViagens_itemSelectionChanged);
    }
}


// ============================================================================
// == SLOTS PARA VISUALIZAÇÃO DE DETALHES E FOTOS
// ============================================================================

void MainWindow::on_listWidgetViagens_itemSelectionChanged()
{
    QList<QListWidgetItem*> selection = ui->listWidgetViagens->selectedItems();

    if (selection.isEmpty() || ui->listWidgetViagens->currentRow() == -1) {
        limparDetalhes(); // Se nada estiver selecionado, limpa o painel direito
    } else {
        int index = ui->listWidgetViagens->currentRow();
        if (index >= 0 && index < m_viagens.count()) {
            exibirDetalhesViagem(m_viagens[index]); // Exibe os detalhes da viagem selecionada
        }
    }
}

void MainWindow::on_btnFotoAnterior_clicked()
{
    if (m_fotoAtualIndex > 0) {
        m_fotoAtualIndex--;
        atualizarExibicaoFoto();
    }
}

void MainWindow::on_btnFotoProxima_clicked()
{
    int index = ui->listWidgetViagens->currentRow();
    if (index < 0) return;
    int totalFotos = m_viagens[index].getCaminhosFotos().count();

    if (m_fotoAtualIndex < totalFotos - 1) {
        m_fotoAtualIndex++;
        atualizarExibicaoFoto();
    }
}


// ============================================================================
// == FUNÇÕES AUXILIARES PARA ATUALIZAÇÃO DA INTERFACE
// ============================================================================

void MainWindow::atualizarListaViagens()
{
    ui->listWidgetViagens->clear(); // Limpa a lista visual antes de recriá-la

    for (const Viagem &viagem : m_viagens) {
        QListWidgetItem *listItem = new QListWidgetItem(ui->listWidgetViagens);
        ItemViagemWidget *itemWidget = new ItemViagemWidget(viagem, this);

        // Conecta os sinais do widget customizado (cliques em Editar/Excluir) aos slots da MainWindow
        connect(itemWidget, &ItemViagemWidget::editarRequisitado, this, &MainWindow::editarViagem);
        connect(itemWidget, &ItemViagemWidget::excluirRequisitado, this, &MainWindow::excluirViagem);

        listItem->setSizeHint(itemWidget->sizeHint()); // Ajusta a altura do item na lista

        ui->listWidgetViagens->addItem(listItem);
        ui->listWidgetViagens->setItemWidget(listItem, itemWidget);
    }
}

void MainWindow::exibirDetalhesViagem(const Viagem& viagem)
{
    // Preenche os componentes do painel de detalhes
    ui->lblDetalheNome->setText(viagem.getNome());
    ui->lblDetalheDestino->setText("<b>Destino:</b> " + viagem.getDestino());
    ui->lblDetalheData->setText("<b>Data:</b> " + viagem.getData().toString("dd/MM/yyyy"));
    ui->browserDetalheDescricao->setPlainText(viagem.getDescricao());

    m_fotoAtualIndex = 0; // Ao selecionar uma nova viagem, sempre reseta para a primeira foto
    atualizarExibicaoFoto();
}

void MainWindow::limparDetalhes()
{
    // Reseta o painel de detalhes para o estado inicial
    ui->lblDetalheNome->setText("Selecione uma viagem");
    ui->lblDetalheDestino->setText("<b>Destino:</b> -");
    ui->lblDetalheData->setText("<b>Data:</b> -");
    ui->browserDetalheDescricao->clear();
    ui->lblDetalheFotoDisplay->clear();
    ui->lblDetalheFotoDisplay->setText("Sem fotos para exibir.");
    ui->btnFotoAnterior->setEnabled(false);
    ui->btnFotoProxima->setEnabled(false);
}

void MainWindow::atualizarExibicaoFoto()
{
    int index = ui->listWidgetViagens->currentRow();
    if (index < 0) return; // Nenhum item selecionado

    const Viagem& viagemSelecionada = m_viagens[index];
    QStringList fotos = viagemSelecionada.getCaminhosFotos();

    if (fotos.isEmpty()) {
        limparDetalhes(); // Reutiliza para mostrar o estado "sem foto"
        // Restaura os textos da viagem, pois limparDetalhes() apaga tudo
        ui->lblDetalheNome->setText(viagemSelecionada.getNome());
        ui->lblDetalheDestino->setText("<b>Destino:</b> " + viagemSelecionada.getDestino());
        ui->lblDetalheData->setText("<b>Data:</b> " + viagemSelecionada.getData().toString("dd/MM/yyyy"));
        ui->browserDetalheDescricao->setPlainText(viagemSelecionada.getDescricao());
        return;
    }

    // Carrega a imagem do arquivo e exibe no QLabel
    QPixmap pixmap(fotos[m_fotoAtualIndex]);
    ui->lblDetalheFotoDisplay->setPixmap(pixmap.scaled(ui->lblDetalheFotoDisplay->size(),
                                                       Qt::KeepAspectRatio,
                                                       Qt::SmoothTransformation));
    // Habilita/desabilita os botões de navegação conforme a posição na lista de fotos
    ui->btnFotoAnterior->setEnabled(m_fotoAtualIndex > 0);
    ui->btnFotoProxima->setEnabled(m_fotoAtualIndex < fotos.count() - 1);
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
        arrayViagens.append(objViagem);
    }

    QJsonDocument doc(arrayViagens);
    QFile arquivo("motoplanner_data.json");
    if (arquivo.open(QIODevice::WriteOnly)) {
        arquivo.write(doc.toJson());
        arquivo.close();
    }
}

void MainWindow::carregarDados()
{
    QFile arquivo("motoplanner_data.json");
    if (!arquivo.open(QIODevice::ReadOnly)) {
        return; // Arquivo não existe ainda, nada a carregar
    }

    QJsonDocument doc = QJsonDocument::fromJson(arquivo.readAll());
    arquivo.close();

    m_viagens.clear();
    for (const QJsonValue &valor : doc.array()) {
        QJsonObject obj = valor.toObject();
        Viagem v;
        // Para simplicidade, um novo ID é gerado ao carregar.
        // Para um sistema mais robusto, seria necessário um setId na classe Viagem.
        v.setNome(obj["nome"].toString());
        v.setDestino(obj["destino"].toString());
        v.setData(QDate::fromString(obj["data"].toString(), Qt::ISODate));
        v.setDescricao(obj["descricao"].toString());

        QStringList fotos;
        for(const QJsonValue& valFoto : obj["fotos"].toArray()){
            fotos.append(valFoto.toString());
        }
        v.setCaminhosFotos(fotos);
        m_viagens.append(v);
    }
}
