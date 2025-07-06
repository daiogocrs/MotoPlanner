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
    explicit ItemViagemWidget(const Viagem& viagem, bool isHistoryView = false, QWidget *parent = nullptr);
    ~ItemViagemWidget();
    QUuid getIdViagem() const;

signals:
    void editarRequisitado(QUuid id);
    void excluirRequisitado(QUuid id);
    void entrarRequisitado(QUuid id);
    void finalizarRequisitado(QUuid id);

private:
    Ui::ItemViagemWidget *ui;
    QUuid m_idViagem;
};

#endif
