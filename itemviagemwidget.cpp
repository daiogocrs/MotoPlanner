#include "itemviagemwidget.h"
#include "ui_itemviagemwidget.h"

ItemViagemWidget::ItemViagemWidget(const Viagem &viagem, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ItemViagemWidget),
    m_idViagem(viagem.getId()) // Armazena o ID
{
    ui->setupUi(this);

    // Preenche os labels com os dados da viagem
    ui->lblNome->setText(viagem.getNome());
    ui->lblDestino->setText("Destino: " + viagem.getDestino());
    ui->lblData->setText("Data: " + viagem.getData().toString("dd/MM/yyyy"));
}

ItemViagemWidget::~ItemViagemWidget()
{
    delete ui;
}

// Quando o botão editar é clicado, emite um sinal com o ID
void ItemViagemWidget::on_btnEditar_clicked()
{
    emit editarRequisitado(m_idViagem);
}

// Quando o botão excluir é clicado, emite um sinal com o ID
void ItemViagemWidget::on_btnExcluir_clicked()
{
    emit excluirRequisitado(m_idViagem);
}
