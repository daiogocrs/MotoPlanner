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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "detalhesviagemwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionVer_Viagens;
    QAction *actionVer_Historico;
    QAction *actionNova_Viagem;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_11;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *listMinhasViagens;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QListWidget *listViagensDisponiveis;
    QWidget *page_12;
    QLabel *label;
    QWidget *page;
    QListWidget *listHistorico;
    DetalhesViagemWidget *detalhesHistoricoPage;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuViagens;
    QMenu *menuSobre;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(813, 609);
        actionVer_Viagens = new QAction(MainWindow);
        actionVer_Viagens->setObjectName("actionVer_Viagens");
        actionVer_Historico = new QAction(MainWindow);
        actionVer_Historico->setObjectName("actionVer_Historico");
        actionNova_Viagem = new QAction(MainWindow);
        actionNova_Viagem->setObjectName("actionNova_Viagem");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, -8, 801, 571));
        page_11 = new QWidget();
        page_11->setObjectName("page_11");
        layoutWidget = new QWidget(page_11);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 791, 551));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        listMinhasViagens = new QListWidget(layoutWidget);
        listMinhasViagens->setObjectName("listMinhasViagens");

        verticalLayout_2->addWidget(listMinhasViagens);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        listViagensDisponiveis = new QListWidget(layoutWidget);
        listViagensDisponiveis->setObjectName("listViagensDisponiveis");

        verticalLayout->addWidget(listViagensDisponiveis);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName("page_12");
        label = new QLabel(page_12);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 220, 63, 20));
        stackedWidget->addWidget(page_12);
        page = new QWidget();
        page->setObjectName("page");
        listHistorico = new QListWidget(page);
        listHistorico->setObjectName("listHistorico");
        listHistorico->setGeometry(QRect(5, 11, 291, 551));
        detalhesHistoricoPage = new DetalhesViagemWidget(page);
        detalhesHistoricoPage->setObjectName("detalhesHistoricoPage");
        detalhesHistoricoPage->setGeometry(QRect(309, 9, 491, 551));
        stackedWidget->addWidget(page);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 813, 26));
        menuViagens = new QMenu(menuBar);
        menuViagens->setObjectName("menuViagens");
        menuSobre = new QMenu(menuBar);
        menuSobre->setObjectName("menuSobre");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuViagens->menuAction());
        menuBar->addAction(menuSobre->menuAction());
        menuViagens->addAction(actionNova_Viagem);
        menuViagens->addSeparator();
        menuViagens->addAction(actionVer_Viagens);
        menuViagens->addAction(actionVer_Historico);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionVer_Viagens->setText(QCoreApplication::translate("MainWindow", "&Ver Viagens Atuais", nullptr));
        actionVer_Historico->setText(QCoreApplication::translate("MainWindow", "&Ver Hist\303\263rico", nullptr));
        actionNova_Viagem->setText(QCoreApplication::translate("MainWindow", "&Nova Viagem", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Minhas Viagens", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Viagens Dispon\303\255veis", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TESTE", nullptr));
        menuViagens->setTitle(QCoreApplication::translate("MainWindow", "&Viagens", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("MainWindow", "&Sobre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
