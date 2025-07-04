#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "viagem.h"

// Adicione esta inclusão para QMenu
#include <QMenu>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Adicione esta seção protected
protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

private slots:
    void on_btnNovaViagem_clicked();
    void editarViagem(QUuid id);
    void excluirViagem(QUuid id);
    void on_listWidgetViagens_itemSelectionChanged();
    void on_btnFotoAnterior_clicked();
    void on_btnFotoProxima_clicked();

private:
    void atualizarListaViagens();
    void salvarDados();
    void carregarDados();
    void exibirDetalhesViagem(const Viagem& viagem);
    void limparDetalhes();
    void atualizarExibicaoFoto();

    Ui::MainWindow *ui;
    QList<Viagem> m_viagens;
    int m_fotoAtualIndex;

    // Adicione ponteiros para os menus
    QMenu *m_viagensMenu;
    QMenu *m_sobreMenu;
};
#endif // MAINWINDOW_H
