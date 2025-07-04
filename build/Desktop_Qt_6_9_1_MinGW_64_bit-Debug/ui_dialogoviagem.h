/********************************************************************************
** Form generated from reading UI file 'dialogoviagem.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOVIAGEM_H
#define UI_DIALOGOVIAGEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogoViagem
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtNome;
    QLabel *label_2;
    QLineEdit *txtDestino;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QTextEdit *txtDescricao;
    QLabel *label_5;
    QListWidget *listWidgetFotos;
    QPushButton *btnAdicionarFoto;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogoViagem)
    {
        if (DialogoViagem->objectName().isEmpty())
            DialogoViagem->setObjectName("DialogoViagem");
        DialogoViagem->resize(398, 450);
        formLayout = new QFormLayout(DialogoViagem);
        formLayout->setObjectName("formLayout");
        label = new QLabel(DialogoViagem);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        txtNome = new QLineEdit(DialogoViagem);
        txtNome->setObjectName("txtNome");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, txtNome);

        label_2 = new QLabel(DialogoViagem);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        txtDestino = new QLineEdit(DialogoViagem);
        txtDestino->setObjectName("txtDestino");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, txtDestino);

        label_3 = new QLabel(DialogoViagem);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        dateEdit = new QDateEdit(DialogoViagem);
        dateEdit->setObjectName("dateEdit");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, dateEdit);

        label_4 = new QLabel(DialogoViagem);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        txtDescricao = new QTextEdit(DialogoViagem);
        txtDescricao->setObjectName("txtDescricao");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, txtDescricao);

        label_5 = new QLabel(DialogoViagem);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        listWidgetFotos = new QListWidget(DialogoViagem);
        listWidgetFotos->setObjectName("listWidgetFotos");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, listWidgetFotos);

        btnAdicionarFoto = new QPushButton(DialogoViagem);
        btnAdicionarFoto->setObjectName("btnAdicionarFoto");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, btnAdicionarFoto);

        buttonBox = new QDialogButtonBox(DialogoViagem);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, buttonBox);


        retranslateUi(DialogoViagem);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogoViagem, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogoViagem, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogoViagem);
    } // setupUi

    void retranslateUi(QDialog *DialogoViagem)
    {
        DialogoViagem->setWindowTitle(QCoreApplication::translate("DialogoViagem", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogoViagem", "Nome:", nullptr));
        txtNome->setText(QString());
        label_2->setText(QCoreApplication::translate("DialogoViagem", "Destino:", nullptr));
        txtDestino->setText(QString());
        label_3->setText(QCoreApplication::translate("DialogoViagem", "Data:", nullptr));
        label_4->setText(QCoreApplication::translate("DialogoViagem", "Descri\303\247\303\243o:", nullptr));
        label_5->setText(QCoreApplication::translate("DialogoViagem", "Fotos:", nullptr));
        btnAdicionarFoto->setText(QCoreApplication::translate("DialogoViagem", "Adicionar Fotos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogoViagem: public Ui_DialogoViagem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOVIAGEM_H
