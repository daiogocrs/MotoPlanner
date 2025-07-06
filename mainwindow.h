#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "viagem.h"
#include <QMenu>

class ItemViagemWidget;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    // Declara que vamos sobrescrever a função de filtro de eventos
    bool eventFilter(QObject *obj, QEvent *event) override;

private slots:
    // Slots para as ações dos menus
    void criarNovaViagem();
    void mostrarPaginaViagens();
    void mostrarPaginaHistorico();

    // Slots para ações dos itens da lista
    void editarViagem(QUuid id);
    void excluirViagem(QUuid id);
    void entrarNaViagem(QUuid id);
    void finalizarViagem(QUuid id);

    // Slot para seleção de item na lista de histórico
    void on_listHistorico_itemSelectionChanged();

private:
    // Funções de atualização e persistência de dados
    void atualizarListasDeViagens();
    void atualizarListaHistorico();
    void salvarDados();
    void carregarDados();

    Ui::MainWindow *ui;
    QList<Viagem> m_viagens;

    // Ponteiros para os menus, para uso no eventFilter
    QMenu *m_viagensMenu;
    QMenu *m_sobreMenu;
};

#endif
