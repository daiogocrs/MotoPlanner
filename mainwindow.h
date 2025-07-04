#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "viagem.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnNovaViagem_clicked();
    void editarViagem(QUuid id);
    void excluirViagem(QUuid id);

    // --- NOVOS SLOTS ---
    void on_listWidgetViagens_itemSelectionChanged();
    void on_btnFotoAnterior_clicked();
    void on_btnFotoProxima_clicked();


private:
    void atualizarListaViagens();
    void salvarDados();
    void carregarDados();

    // --- NOVAS FUNÇÕES ---
    void exibirDetalhesViagem(const Viagem& viagem);
    void limparDetalhes();
    void atualizarExibicaoFoto();


    Ui::MainWindow *ui;
    QList<Viagem> m_viagens;

    // --- NOVA VARIÁVEL ---
    int m_fotoAtualIndex; // Para saber qual foto está sendo exibida
};
#endif // MAINWINDOW_H
