/********************************************************************************
** Form generated from reading UI file 'mostrarcerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARCERVEZA_H
#define UI_MOSTRARCERVEZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mostrarCerveza
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *btn_borrar;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLineEdit *mostrarNombre;
    QLabel *label_3;
    QTextEdit *mostrarDescripcion;
    QLabel *label_4;
    QLineEdit *mostrarTipo;
    QLabel *label_5;
    QLabel *label_12;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *mostrarColor;
    QLabel *label_8;
    QLineEdit *mostrarCuerepo;
    QLabel *label_9;
    QLineEdit *mostrarPrecio;
    QLabel *label_13;
    QLineEdit *mostrarTiempo;
    QLineEdit *mostrarTemperatura;

    void setupUi(QDialog *mostrarCerveza)
    {
        if (mostrarCerveza->objectName().isEmpty())
            mostrarCerveza->setObjectName(QStringLiteral("mostrarCerveza"));
        mostrarCerveza->resize(477, 521);
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
        mostrarCerveza->setPalette(palette);
        label = new QLabel(mostrarCerveza);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 411, 61));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/lb_mostrarCerveza.png")));
        label_2 = new QLabel(mostrarCerveza);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 460, 131, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_borrar.png")));
        btn_borrar = new QPushButton(mostrarCerveza);
        btn_borrar->setObjectName(QStringLiteral("btn_borrar"));
        btn_borrar->setGeometry(QRect(360, 460, 101, 41));
        btn_borrar->setFlat(true);
        layoutWidget = new QWidget(mostrarCerveza);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 90, 271, 411));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        mostrarNombre = new QLineEdit(layoutWidget);
        mostrarNombre->setObjectName(QStringLiteral("mostrarNombre"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mostrarNombre);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_3->setPalette(palette1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        mostrarDescripcion = new QTextEdit(layoutWidget);
        mostrarDescripcion->setObjectName(QStringLiteral("mostrarDescripcion"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mostrarDescripcion);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_4->setPalette(palette2);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        mostrarTipo = new QLineEdit(layoutWidget);
        mostrarTipo->setObjectName(QStringLiteral("mostrarTipo"));

        formLayout->setWidget(5, QFormLayout::FieldRole, mostrarTipo);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_5->setPalette(palette3);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_5);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_12->setPalette(palette4);

        formLayout->setWidget(8, QFormLayout::FieldRole, label_12);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_6->setPalette(palette5);

        formLayout->setWidget(9, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_7->setPalette(palette6);

        formLayout->setWidget(10, QFormLayout::LabelRole, label_7);

        mostrarColor = new QLineEdit(layoutWidget);
        mostrarColor->setObjectName(QStringLiteral("mostrarColor"));

        formLayout->setWidget(10, QFormLayout::FieldRole, mostrarColor);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_8->setPalette(palette7);

        formLayout->setWidget(12, QFormLayout::LabelRole, label_8);

        mostrarCuerepo = new QLineEdit(layoutWidget);
        mostrarCuerepo->setObjectName(QStringLiteral("mostrarCuerepo"));

        formLayout->setWidget(12, QFormLayout::FieldRole, mostrarCuerepo);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_9->setPalette(palette8);

        formLayout->setWidget(14, QFormLayout::LabelRole, label_9);

        mostrarPrecio = new QLineEdit(layoutWidget);
        mostrarPrecio->setObjectName(QStringLiteral("mostrarPrecio"));

        formLayout->setWidget(14, QFormLayout::FieldRole, mostrarPrecio);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_13->setPalette(palette9);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_13);

        mostrarTiempo = new QLineEdit(layoutWidget);
        mostrarTiempo->setObjectName(QStringLiteral("mostrarTiempo"));

        formLayout->setWidget(7, QFormLayout::FieldRole, mostrarTiempo);

        mostrarTemperatura = new QLineEdit(layoutWidget);
        mostrarTemperatura->setObjectName(QStringLiteral("mostrarTemperatura"));

        formLayout->setWidget(9, QFormLayout::FieldRole, mostrarTemperatura);


        retranslateUi(mostrarCerveza);

        QMetaObject::connectSlotsByName(mostrarCerveza);
    } // setupUi

    void retranslateUi(QDialog *mostrarCerveza)
    {
        mostrarCerveza->setWindowTitle(QApplication::translate("mostrarCerveza", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QString());
        btn_borrar->setText(QString());
        label_3->setText(QApplication::translate("mostrarCerveza", "Descripci\303\263n:", 0));
        label_4->setText(QApplication::translate("mostrarCerveza", "Tipo de fermentaci\303\263n:", 0));
        label_5->setText(QApplication::translate("mostrarCerveza", "Tiempo de fermentaci\303\263n:", 0));
        label_12->setText(QApplication::translate("mostrarCerveza", "horas", 0));
        label_6->setText(QApplication::translate("mostrarCerveza", "Temperatura:", 0));
        label_7->setText(QApplication::translate("mostrarCerveza", "Color:", 0));
        label_8->setText(QApplication::translate("mostrarCerveza", "Cuerpo:", 0));
        label_9->setText(QApplication::translate("mostrarCerveza", "Precio:", 0));
        label_13->setText(QApplication::translate("mostrarCerveza", "Nombre", 0));
    } // retranslateUi

};

namespace Ui {
    class mostrarCerveza: public Ui_mostrarCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARCERVEZA_H
