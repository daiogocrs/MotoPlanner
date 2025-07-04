#ifndef ITEMVIAGEMWIDGET_H
#define ITEMVIAGEMWIDGET_H

#include <QWidget>
#include "viagem.h"

namespace Ui {
class ItemViagemWidget;
}

class ItemViagemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ItemViagemWidget(const Viagem& viagem, QWidget *parent = nullptr);
    ~ItemViagemWidget();

signals:
    void editarRequisitado(QUuid id);
    void excluirRequisitado(QUuid id);

private slots:
    void on_btnEditar_clicked();
    void on_btnExcluir_clicked();

private:
    Ui::ItemViagemWidget *ui;
    QUuid m_idViagem;
};

#endif // ITEMVIAGEMWIDGET_H
