/********************************************************************************
** Form generated from reading UI file 'detalhesviagemwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETALHESVIAGEMWIDGET_H
#define UI_DETALHESVIAGEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetalhesViagemWidget
{
public:
    QWidget *detalhesWidget;
    QLabel *lblDetalheFotoDisplay;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnFotoAnterior;
    QPushButton *btnFotoProxima;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *lblDetalheNome;
    QLabel *lblDetalheDestino;
    QLabel *lblDetalheData;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblDescricaoTitulo;
    QTextBrowser *browserDetalheDescricao;
    QLabel *lblFotosTitulo;

    void setupUi(QWidget *DetalhesViagemWidget)
    {
        if (DetalhesViagemWidget->objectName().isEmpty())
            DetalhesViagemWidget->setObjectName("DetalhesViagemWidget");
        DetalhesViagemWidget->resize(547, 588);
        detalhesWidget = new QWidget(DetalhesViagemWidget);
        detalhesWidget->setObjectName("detalhesWidget");
        detalhesWidget->setGeometry(QRect(10, 10, 521, 551));
        lblDetalheFotoDisplay = new QLabel(detalhesWidget);
        lblDetalheFotoDisplay->setObjectName("lblDetalheFotoDisplay");
        lblDetalheFotoDisplay->setGeometry(QRect(70, 209, 421, 281));
        lblDetalheFotoDisplay->setMinimumSize(QSize(0, 0));
        lblDetalheFotoDisplay->setScaledContents(true);
        layoutWidget_3 = new QWidget(detalhesWidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(160, 510, 195, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnFotoAnterior = new QPushButton(layoutWidget_3);
        btnFotoAnterior->setObjectName("btnFotoAnterior");

        horizontalLayout_5->addWidget(btnFotoAnterior);

        btnFotoProxima = new QPushButton(layoutWidget_3);
        btnFotoProxima->setObjectName("btnFotoProxima");

        horizontalLayout_5->addWidget(btnFotoProxima);

        layoutWidget_4 = new QWidget(detalhesWidget);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(0, 3, 521, 207));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        lblDetalheNome = new QLabel(layoutWidget_4);
        lblDetalheNome->setObjectName("lblDetalheNome");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        lblDetalheNome->setFont(font);

        verticalLayout_8->addWidget(lblDetalheNome);

        lblDetalheDestino = new QLabel(layoutWidget_4);
        lblDetalheDestino->setObjectName("lblDetalheDestino");

        verticalLayout_8->addWidget(lblDetalheDestino);

        lblDetalheData = new QLabel(layoutWidget_4);
        lblDetalheData->setObjectName("lblDetalheData");

        verticalLayout_8->addWidget(lblDetalheData);


        verticalLayout_7->addLayout(verticalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lblDescricaoTitulo = new QLabel(layoutWidget_4);
        lblDescricaoTitulo->setObjectName("lblDescricaoTitulo");

        horizontalLayout_6->addWidget(lblDescricaoTitulo);

        browserDetalheDescricao = new QTextBrowser(layoutWidget_4);
        browserDetalheDescricao->setObjectName("browserDetalheDescricao");

        horizontalLayout_6->addWidget(browserDetalheDescricao);


        verticalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_6->addLayout(verticalLayout_7);

        lblFotosTitulo = new QLabel(layoutWidget_4);
        lblFotosTitulo->setObjectName("lblFotosTitulo");

        verticalLayout_6->addWidget(lblFotosTitulo);


        retranslateUi(DetalhesViagemWidget);

        QMetaObject::connectSlotsByName(DetalhesViagemWidget);
    } // setupUi

    void retranslateUi(QWidget *DetalhesViagemWidget)
    {
        DetalhesViagemWidget->setWindowTitle(QCoreApplication::translate("DetalhesViagemWidget", "Form", nullptr));
        lblDetalheFotoDisplay->setText(QCoreApplication::translate("DetalhesViagemWidget", "Sem Imagem", nullptr));
        btnFotoAnterior->setText(QCoreApplication::translate("DetalhesViagemWidget", "< Anterior", nullptr));
        btnFotoProxima->setText(QCoreApplication::translate("DetalhesViagemWidget", "Pr\303\263xima >", nullptr));
        lblDetalheNome->setText(QCoreApplication::translate("DetalhesViagemWidget", "Selecione uma Viagem", nullptr));
        lblDetalheDestino->setText(QCoreApplication::translate("DetalhesViagemWidget", "Destino:", nullptr));
        lblDetalheData->setText(QCoreApplication::translate("DetalhesViagemWidget", "Data:", nullptr));
        lblDescricaoTitulo->setText(QCoreApplication::translate("DetalhesViagemWidget", "Descri\303\247\303\243o:", nullptr));
        lblFotosTitulo->setText(QCoreApplication::translate("DetalhesViagemWidget", "Fotos:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetalhesViagemWidget: public Ui_DetalhesViagemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETALHESVIAGEMWIDGET_H
