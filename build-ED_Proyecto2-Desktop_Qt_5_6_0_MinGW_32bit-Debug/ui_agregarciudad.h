/********************************************************************************
** Form generated from reading UI file 'agregarciudad.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARCIUDAD_H
#define UI_AGREGARCIUDAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agregarCiudad
{
public:
    QLabel *label;
    QWidget *widget;
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *nombreCiudad;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *agregarCiudad)
    {
        if (agregarCiudad->objectName().isEmpty())
            agregarCiudad->setObjectName(QStringLiteral("agregarCiudad"));
        agregarCiudad->resize(256, 187);
        label = new QLabel(agregarCiudad);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 30, 81, 16));
        widget = new QWidget(agregarCiudad);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 100, 213, 59));
        formLayout_2 = new QFormLayout(widget);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        nombreCiudad = new QLineEdit(widget);
        nombreCiudad->setObjectName(QStringLiteral("nombreCiudad"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nombreCiudad);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, formLayout);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, buttonBox);


        retranslateUi(agregarCiudad);

        QMetaObject::connectSlotsByName(agregarCiudad);
    } // setupUi

    void retranslateUi(QDialog *agregarCiudad)
    {
        agregarCiudad->setWindowTitle(QApplication::translate("agregarCiudad", "Dialog", 0));
        label->setText(QApplication::translate("agregarCiudad", "Agregar ciudad", 0));
        label_2->setText(QApplication::translate("agregarCiudad", "Nombre:", 0));
    } // retranslateUi

};

namespace Ui {
    class agregarCiudad: public Ui_agregarCiudad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARCIUDAD_H
