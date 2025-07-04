/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QListWidget *listWidgetViagens;
    QPushButton *btnNovaViagem;
    QWidget *detalhesWidget;
    QLabel *lblDetalheFotoDisplay;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnFotoAnterior;
    QPushButton *btnFotoProxima;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblDetalheNome;
    QLabel *lblDetalheDestino;
    QLabel *lblDetalheData;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblDetalheData_2;
    QTextBrowser *browserDetalheDescricao;
    QLabel *lblDetalheData_3;
    QWidget *tab_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        listWidgetViagens = new QListWidget(tab_3);
        listWidgetViagens->setObjectName("listWidgetViagens");
        listWidgetViagens->setGeometry(QRect(0, 0, 321, 481));
        btnNovaViagem = new QPushButton(tab_3);
        btnNovaViagem->setObjectName("btnNovaViagem");
        btnNovaViagem->setGeometry(QRect(630, 480, 134, 29));
        detalhesWidget = new QWidget(tab_3);
        detalhesWidget->setObjectName("detalhesWidget");
        detalhesWidget->setGeometry(QRect(329, -1, 441, 481));
        lblDetalheFotoDisplay = new QLabel(detalhesWidget);
        lblDetalheFotoDisplay->setObjectName("lblDetalheFotoDisplay");
        lblDetalheFotoDisplay->setGeometry(QRect(70, 189, 351, 231));
        lblDetalheFotoDisplay->setMinimumSize(QSize(0, 0));
        lblDetalheFotoDisplay->setScaledContents(true);
        widget = new QWidget(detalhesWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 450, 195, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnFotoAnterior = new QPushButton(widget);
        btnFotoAnterior->setObjectName("btnFotoAnterior");

        horizontalLayout->addWidget(btnFotoAnterior);

        btnFotoProxima = new QPushButton(widget);
        btnFotoProxima->setObjectName("btnFotoProxima");

        horizontalLayout->addWidget(btnFotoProxima);

        widget1 = new QWidget(detalhesWidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 3, 441, 201));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lblDetalheNome = new QLabel(widget1);
        lblDetalheNome->setObjectName("lblDetalheNome");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        lblDetalheNome->setFont(font);

        verticalLayout->addWidget(lblDetalheNome);

        lblDetalheDestino = new QLabel(widget1);
        lblDetalheDestino->setObjectName("lblDetalheDestino");

        verticalLayout->addWidget(lblDetalheDestino);

        lblDetalheData = new QLabel(widget1);
        lblDetalheData->setObjectName("lblDetalheData");

        verticalLayout->addWidget(lblDetalheData);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblDetalheData_2 = new QLabel(widget1);
        lblDetalheData_2->setObjectName("lblDetalheData_2");

        horizontalLayout_2->addWidget(lblDetalheData_2);

        browserDetalheDescricao = new QTextBrowser(widget1);
        browserDetalheDescricao->setObjectName("browserDetalheDescricao");

        horizontalLayout_2->addWidget(browserDetalheDescricao);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        lblDetalheData_3 = new QLabel(widget1);
        lblDetalheData_3->setObjectName("lblDetalheData_3");

        verticalLayout_3->addWidget(lblDetalheData_3);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnNovaViagem->setText(QCoreApplication::translate("MainWindow", "Criar Nova Viagem", nullptr));
        lblDetalheFotoDisplay->setText(QCoreApplication::translate("MainWindow", "Sem Imagem", nullptr));
        btnFotoAnterior->setText(QCoreApplication::translate("MainWindow", "< Anterior", nullptr));
        btnFotoProxima->setText(QCoreApplication::translate("MainWindow", "Pr\303\263xima >", nullptr));
        lblDetalheNome->setText(QCoreApplication::translate("MainWindow", "Selecione uma Viagem", nullptr));
        lblDetalheDestino->setText(QCoreApplication::translate("MainWindow", "Destino:", nullptr));
        lblDetalheData->setText(QCoreApplication::translate("MainWindow", "Data:", nullptr));
        lblDetalheData_2->setText(QCoreApplication::translate("MainWindow", "Descri\303\247\303\243o:", nullptr));
        lblDetalheData_3->setText(QCoreApplication::translate("MainWindow", "Fotos:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Viagens", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Sobre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
