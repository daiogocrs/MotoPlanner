#include "itemviagemwidget.h"
#include "ui_itemviagemwidget.h"
#include "app_globals.h"

ItemViagemWidget::ItemViagemWidget(const Viagem &viagem, bool isHistoryView, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ItemViagemWidget),
    m_idViagem(viagem.getId())
{
    ui->setupUi(this);

    ui->lblNome->setText(viagem.getNome());
    ui->lblDestino->setText("Destino: " + viagem.getDestino());
    ui->lblData->setText("Data: " + viagem.getData().toString("dd/MM/yyyy"));

    if (!viagem.getParticipantes().isEmpty()) {
        ui->lblDono->setText("Criado por: " + viagem.getParticipantes().first());
    } else {
        ui->lblDono->setText("Dono desconhecido");
    }

    ui->btnEditar->hide();
    ui->btnExcluir->hide();
    ui->btnEntrar->hide();
    ui->btnFinalizar->hide();

    if (isHistoryView) {
        // Sem botões na visão de histórico
    } else if (viagem.getParticipantes().contains(currentUser)) {
        ui->btnEditar->show();
        ui->btnExcluir->show();
        ui->btnFinalizar->show();
    } else {
        ui->btnEntrar->show();
    }

    connect(ui->btnEditar, &QPushButton::clicked, this, [this](){ emit editarRequisitado(m_idViagem); });
    connect(ui->btnExcluir, &QPushButton::clicked, this, [this](){ emit excluirRequisitado(m_idViagem); });
    connect(ui->btnEntrar, &QPushButton::clicked, this, [this](){ emit entrarRequisitado(m_idViagem); });
    connect(ui->btnFinalizar, &QPushButton::clicked, this, [this](){ emit finalizarRequisitado(m_idViagem); });
}

ItemViagemWidget::~ItemViagemWidget()
{
    delete ui;
}

QUuid ItemViagemWidget::getIdViagem() const
{
    return m_idViagem;
}
