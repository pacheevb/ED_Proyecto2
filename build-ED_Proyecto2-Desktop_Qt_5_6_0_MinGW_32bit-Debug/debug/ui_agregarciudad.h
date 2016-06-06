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
    QWidget *layoutWidget;
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QLineEdit *nombreCiudad;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *agregarCiudad)
    {
        if (agregarCiudad->objectName().isEmpty())
            agregarCiudad->setObjectName(QStringLiteral("agregarCiudad"));
        agregarCiudad->resize(324, 207);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(31, 37, 49, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        agregarCiudad->setPalette(palette);
        label = new QLabel(agregarCiudad);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 301, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/lb_agregarCiudad.png")));
        label->setScaledContents(true);
        layoutWidget = new QWidget(agregarCiudad);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 100, 267, 72));
        formLayout_2 = new QFormLayout(layoutWidget);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nombreCiudad = new QLineEdit(layoutWidget);
        nombreCiudad->setObjectName(QStringLiteral("nombreCiudad"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nombreCiudad);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_2->setPalette(palette1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, formLayout);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, buttonBox);

        label->raise();
        layoutWidget->raise();
        label_2->raise();

        retranslateUi(agregarCiudad);

        QMetaObject::connectSlotsByName(agregarCiudad);
    } // setupUi

    void retranslateUi(QDialog *agregarCiudad)
    {
        agregarCiudad->setWindowTitle(QApplication::translate("agregarCiudad", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("agregarCiudad", "Nombre:", 0));
    } // retranslateUi

};

namespace Ui {
    class agregarCiudad: public Ui_agregarCiudad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARCIUDAD_H
