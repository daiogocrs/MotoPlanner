#include "mainwindow.h"

#include <QApplication>
#include <QDir>       // Adicione esta inclusão
#include <QDebug>     // Adicione esta inclusão

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Adicione esta linha para imprimir o caminho no terminal da aplicação
    qDebug() << "A aplicação está a ser executada em:" << QDir::currentPath();

    MainWindow w;
    w.show();
    return a.exec();
}
