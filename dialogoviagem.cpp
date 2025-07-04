#include "dialogoviagem.h"
#include "ui_dialogoviagem.h"
#include <QFileDialog>

// Construtor para uma nova viagem
DialogoViagem::DialogoViagem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogoViagem)
{
    ui->setupUi(this);
    ui->dateEdit->setDate(QDate::currentDate());
}

// Construtor para editar uma viagem existente
DialogoViagem::DialogoViagem(const Viagem &viagemParaEditar, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogoViagem)
{
    ui->setupUi(this);
    m_viagem = viagemParaEditar;
    preencherDados(m_viagem);
}

DialogoViagem::~DialogoViagem()
{
    delete ui;
}

void DialogoViagem::preencherDados(const Viagem &viagem)
{
    ui->txtNome->setText(viagem.getNome());
    ui->txtDestino->setText(viagem.getDestino());
    ui->dateEdit->setDate(viagem.getData());
    ui->txtDescricao->setPlainText(viagem.getDescricao());
    ui->listWidgetFotos->addItems(viagem.getCaminhosFotos());
}

// Quando o usuário clicar em OK, atualizamos nosso objeto m_viagem
Viagem DialogoViagem::getViagem() const
{
    Viagem v = m_viagem; // Começa com a viagem original (ou nova)
    v.setNome(ui->txtNome->text());
    v.setDestino(ui->txtDestino->text());
    v.setData(ui->dateEdit->date());
    v.setDescricao(ui->txtDescricao->toPlainText());

    // Pega os caminhos das fotos da lista
    QStringList caminhos;
    for(int i = 0; i < ui->listWidgetFotos->count(); ++i) {
        caminhos.append(ui->listWidgetFotos->item(i)->text());
    }
    v.setCaminhosFotos(caminhos);

    return v;
}

// Slot para o botão de adicionar fotos
void DialogoViagem::on_btnAdicionarFoto_clicked()
{
    QStringList files = QFileDialog::getOpenFileNames(
        this,
        "Selecione as fotos da viagem",
        QDir::homePath(),
        "Imagens (*.png *.jpg *.jpeg)"
        );

    if (!files.isEmpty()) {
        ui->listWidgetFotos->addItems(files);
    }
}
