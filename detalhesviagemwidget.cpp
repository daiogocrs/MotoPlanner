#include "detalhesviagemwidget.h"
#include "ui_detalhesviagemwidget.h"
#include <QPixmap>

DetalhesViagemWidget::DetalhesViagemWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetalhesViagemWidget),
    m_fotoAtualIndex(0)
{
    ui->setupUi(this);
    limparDetalhes();
}

DetalhesViagemWidget::~DetalhesViagemWidget()
{
    delete ui;
}

void DetalhesViagemWidget::exibirDetalhes(const Viagem &viagem)
{
    m_viagemAtual = viagem;
    ui->lblDetalheNome->setText(m_viagemAtual.getNome());
    ui->lblDetalheDestino->setText("<b>Destino:</b> " + m_viagemAtual.getDestino());
    ui->lblDetalheData->setText("<b>Data:</b> " + m_viagemAtual.getData().toString("dd/MM/yyyy"));
    ui->browserDetalheDescricao->setPlainText(m_viagemAtual.getDescricao());
    m_fotoAtualIndex = 0;
    atualizarExibicaoFoto();
}

void DetalhesViagemWidget::limparDetalhes()
{
    m_viagemAtual = Viagem();
    ui->lblDetalheNome->setText("Selecione uma viagem no histórico");
    ui->lblDetalheDestino->setText("<b>Destino:</b> -");
    ui->lblDetalheData->setText("<b>Data:</b> -");
    ui->browserDetalheDescricao->clear();
    ui->lblDetalheFotoDisplay->clear();
    ui->lblDetalheFotoDisplay->setText("Sem fotos para exibir.");
    ui->btnFotoAnterior->setEnabled(false);
    ui->btnFotoProxima->setEnabled(false);
}

void DetalhesViagemWidget::atualizarExibicaoFoto()
{
    QStringList fotos = m_viagemAtual.getCaminhosFotos();
    if (fotos.isEmpty() || m_fotoAtualIndex >= fotos.count()) {
        ui->lblDetalheFotoDisplay->clear();
        ui->lblDetalheFotoDisplay->setText("Sem fotos para exibir.");
        ui->btnFotoAnterior->setEnabled(false);
        ui->btnFotoProxima->setEnabled(false);
        return;
    }
    QPixmap pixmap(fotos[m_fotoAtualIndex]);
    ui->lblDetalheFotoDisplay->setPixmap(pixmap.scaled(ui->lblDetalheFotoDisplay->size(),
                                                       Qt::KeepAspectRatio,
                                                       Qt::SmoothTransformation));
    ui->btnFotoAnterior->setEnabled(m_fotoAtualIndex > 0);
    ui->btnFotoProxima->setEnabled(m_fotoAtualIndex < fotos.count() - 1);
}

void DetalhesViagemWidget::on_btnFotoAnterior_clicked()
{
    if (m_fotoAtualIndex > 0) {
        m_fotoAtualIndex--;
        atualizarExibicaoFoto();
    }
}

void DetalhesViagemWidget::on_btnFotoProxima_clicked()
{
    if (m_fotoAtualIndex < m_viagemAtual.getCaminhosFotos().count() - 1) {
        m_fotoAtualIndex++;
        atualizarExibicaoFoto();
    }
}
