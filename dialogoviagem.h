#ifndef DIALOGOVIAGEM_H
#define DIALOGOVIAGEM_H

#include <QDialog>
#include "viagem.h"

namespace Ui {
class DialogoViagem;
}

class DialogoViagem : public QDialog
{
    Q_OBJECT

public:
    explicit DialogoViagem(QWidget *parent = nullptr);
    explicit DialogoViagem(const Viagem& viagemParaEditar, QWidget *parent = nullptr);
    ~DialogoViagem();

    Viagem getViagem() const;

private slots:
    void on_btnAdicionarFoto_clicked();

private:
    void preencherDados(const Viagem& viagem);

    Ui::DialogoViagem *ui;
    Viagem m_viagem;
};

#endif
