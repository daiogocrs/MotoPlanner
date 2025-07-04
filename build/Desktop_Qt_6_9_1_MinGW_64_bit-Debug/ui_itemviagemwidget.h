/********************************************************************************
** Form generated from reading UI file 'itemviagemwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMVIAGEMWIDGET_H
#define UI_ITEMVIAGEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemViagemWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblNome;
    QLabel *lblDestino;
    QLabel *lblData;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnExcluir;
    QPushButton *btnEditar;

    void setupUi(QWidget *ItemViagemWidget)
    {
        if (ItemViagemWidget->objectName().isEmpty())
            ItemViagemWidget->setObjectName("ItemViagemWidget");
        ItemViagemWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(ItemViagemWidget);
        verticalLayout->setObjectName("verticalLayout");
        lblNome = new QLabel(ItemViagemWidget);
        lblNome->setObjectName("lblNome");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        lblNome->setFont(font);

        verticalLayout->addWidget(lblNome);

        lblDestino = new QLabel(ItemViagemWidget);
        lblDestino->setObjectName("lblDestino");

        verticalLayout->addWidget(lblDestino);

        lblData = new QLabel(ItemViagemWidget);
        lblData->setObjectName("lblData");

        verticalLayout->addWidget(lblData);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnExcluir = new QPushButton(ItemViagemWidget);
        btnExcluir->setObjectName("btnExcluir");

        horizontalLayout->addWidget(btnExcluir);

        btnEditar = new QPushButton(ItemViagemWidget);
        btnEditar->setObjectName("btnEditar");

        horizontalLayout->addWidget(btnEditar);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ItemViagemWidget);

        QMetaObject::connectSlotsByName(ItemViagemWidget);
    } // setupUi

    void retranslateUi(QWidget *ItemViagemWidget)
    {
        ItemViagemWidget->setWindowTitle(QCoreApplication::translate("ItemViagemWidget", "Form", nullptr));
        lblNome->setText(QCoreApplication::translate("ItemViagemWidget", "Nome da Viagem", nullptr));
        lblDestino->setText(QCoreApplication::translate("ItemViagemWidget", "Destino:", nullptr));
        lblData->setText(QCoreApplication::translate("ItemViagemWidget", "Data:", nullptr));
        btnExcluir->setText(QCoreApplication::translate("ItemViagemWidget", "Excluir", nullptr));
        btnEditar->setText(QCoreApplication::translate("ItemViagemWidget", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemViagemWidget: public Ui_ItemViagemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMVIAGEMWIDGET_H
