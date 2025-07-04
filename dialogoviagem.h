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
    explicit DialogoViagem(QWidget *parent = nullptr); // Construtor para nova viagem
    explicit DialogoViagem(const Viagem& viagemParaEditar, QWidget *parent = nullptr); // Construtor para editar
    ~DialogoViagem();

    Viagem getViagem() const; // Retorna os dados preenchidos

private slots:
    void on_btnAdicionarFoto_clicked();

private:
    void preencherDados(const Viagem& viagem);

    Ui::DialogoViagem *ui;
    Viagem m_viagem;
};

#endif // DIALOGOVIAGEM_H
