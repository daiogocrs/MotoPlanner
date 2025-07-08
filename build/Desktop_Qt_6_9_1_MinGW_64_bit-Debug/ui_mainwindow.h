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
#include <QtWidgets/QFrame>
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
    QFrame *frame;
    QLabel *lblIconeSobre;
    QLabel *label;
    QLabel *lblCreditosSobre;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblLinkSobre;
    QLabel *lblVersaoSobre;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblNomeAppSobre;
    QLabel *lblDescricaoSobre;
    QLabel *label_5;
    QWidget *page;
    QListWidget *listHistorico;
    DetalhesViagemWidget *detalhesHistoricoPage;
    QWidget *layoutWidget3;
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
        stackedWidget->setGeometry(QRect(0, -8, 811, 561));
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
        frame = new QFrame(page_12);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 20, 791, 531));
        frame->setFrameShape(QFrame::Shape::HLine);
        frame->setFrameShadow(QFrame::Shadow::Sunken);
        lblIconeSobre = new QLabel(frame);
        lblIconeSobre->setObjectName("lblIconeSobre");
        lblIconeSobre->setGeometry(QRect(20, 10, 231, 211));
        lblIconeSobre->setMaximumSize(QSize(500, 500));
        lblIconeSobre->setPixmap(QPixmap(QString::fromUtf8(":/imagens/MotoPlannerIcon.png")));
        lblIconeSobre->setScaledContents(true);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 90, 461, 141));
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setWordWrap(true);
        lblCreditosSobre = new QLabel(frame);
        lblCreditosSobre->setObjectName("lblCreditosSobre");
        lblCreditosSobre->setGeometry(QRect(10, 480, 361, 52));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(480, 300, 311, 161));
        label_4->setTextFormat(Qt::TextFormat::RichText);
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(510, 500, 269, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lblLinkSobre = new QLabel(layoutWidget1);
        lblLinkSobre->setObjectName("lblLinkSobre");
        lblLinkSobre->setTextFormat(Qt::TextFormat::RichText);
        lblLinkSobre->setOpenExternalLinks(true);

        horizontalLayout_3->addWidget(lblLinkSobre);

        lblVersaoSobre = new QLabel(layoutWidget1);
        lblVersaoSobre->setObjectName("lblVersaoSobre");

        horizontalLayout_3->addWidget(lblVersaoSobre);

        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(270, 10, 211, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lblNomeAppSobre = new QLabel(layoutWidget2);
        lblNomeAppSobre->setObjectName("lblNomeAppSobre");
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        lblNomeAppSobre->setFont(font1);

        verticalLayout_3->addWidget(lblNomeAppSobre);

        lblDescricaoSobre = new QLabel(layoutWidget2);
        lblDescricaoSobre->setObjectName("lblDescricaoSobre");
        lblDescricaoSobre->setWordWrap(true);

        verticalLayout_3->addWidget(lblDescricaoSobre);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 290, 151, 181));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/imagens/IMG_20250701_223510.jpg")));
        label_5->setScaledContents(true);
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
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
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
        lblIconeSobre->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"justify\">Aplica\303\247\303\243o de desktop desenvolvida como projeto final para a disciplina de Linguagem de Programa\303\247\303\243o II do curso de Engenharia da Computa\303\247\303\243o. O objetivo foi aplicar conceitos aprendidos em aula de C++ e do framework Qt para criar um sistema de gest\303\243o de viagens em grupo, com persist\303\252ncia de dados e uma interface de utilizador reativa.</p></body></html>", nullptr));
        lblCreditosSobre->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Desenvolvido por: <span style=\" font-weight:700;\">Diogo Borges Corso (20248400)<br/></span>Feito com C++ e o framework Qt 6.</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Tecnologias Utilizadas:</span><br/></p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Linguagem: C++</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Framework: Qt 6</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Interface Gr\303\241fica: Qt Designer</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Armazenamento de Dados: JSON</li></ul></body></html>", nullptr));
        lblLinkSobre->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"https://github.com/daiogocrs/motoplanner\"><span style=\" text-decoration: underline; color:#1f9b5d;\">Acesse o Projeto no GitHub</span></a></p></body></html>", nullptr));
        lblVersaoSobre->setText(QCoreApplication::translate("MainWindow", "Vers\303\243o 1.0.0", nullptr));
        lblNomeAppSobre->setText(QCoreApplication::translate("MainWindow", "MotoPlanner", nullptr));
        lblDescricaoSobre->setText(QCoreApplication::translate("MainWindow", "Vers\303\243o 1.0 - Projeto Final", nullptr));
        label_5->setText(QString());
        menuViagens->setTitle(QCoreApplication::translate("MainWindow", "&Viagens", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("MainWindow", "&Sobre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
