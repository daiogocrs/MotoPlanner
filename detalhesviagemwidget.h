#ifndef DETALHESVIAGEMWIDGET_H
#define DETALHESVIAGEMWIDGET_H

#include <QWidget>
#include "viagem.h"

namespace Ui {
class DetalhesViagemWidget;
}

class DetalhesViagemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DetalhesViagemWidget(QWidget *parent = nullptr);
    ~DetalhesViagemWidget();

    void exibirDetalhes(const Viagem& viagem);
    void limparDetalhes();

private slots:
    void on_btnFotoAnterior_clicked();
    void on_btnFotoProxima_clicked();

private:
    void atualizarExibicaoFoto();

    Ui::DetalhesViagemWidget *ui;
    Viagem m_viagemAtual;
    int m_fotoAtualIndex;
};

#endif
