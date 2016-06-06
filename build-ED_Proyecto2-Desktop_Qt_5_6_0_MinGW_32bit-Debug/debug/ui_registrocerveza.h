/********************************************************************************
** Form generated from reading UI file 'registrocerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROCERVEZA_H
#define UI_REGISTROCERVEZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistroCerveza
{
public:
    QLabel *label;
    QPushButton *btn_guardarCerveza;
    QLabel *label_7;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLineEdit *nombre;
    QLabel *label_2;
    QTextEdit *descripcion;
    QLabel *label_3;
    QLineEdit *tipo;
    QLabel *label_4;
    QSpinBox *tiempo;
    QLabel *label_12;
    QLabel *label_5;
    QSpinBox *temperatura;
    QLabel *label_6;
    QLineEdit *color;
    QLabel *label_8;
    QLineEdit *cuerpo;
    QLabel *label_9;
    QLineEdit *precio;
    QLabel *label_13;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QComboBox *comboBox;
    QLabel *label_11;
    QComboBox *comboBox_2;

    void setupUi(QDialog *RegistroCerveza)
    {
        if (RegistroCerveza->objectName().isEmpty())
            RegistroCerveza->setObjectName(QStringLiteral("RegistroCerveza"));
        RegistroCerveza->resize(691, 452);
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
        RegistroCerveza->setPalette(palette);
        label = new QLabel(RegistroCerveza);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 30, 361, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label->setPalette(palette1);
        label->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/lb_regCervezas.png")));
        label->setScaledContents(true);
        btn_guardarCerveza = new QPushButton(RegistroCerveza);
        btn_guardarCerveza->setObjectName(QStringLiteral("btn_guardarCerveza"));
        btn_guardarCerveza->setGeometry(QRect(570, 380, 91, 41));
        btn_guardarCerveza->setFlat(true);
        label_7 = new QLabel(RegistroCerveza);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(560, 380, 121, 51));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_guardar.png")));
        layoutWidget = new QWidget(RegistroCerveza);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 271, 411));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        nombre = new QLineEdit(layoutWidget);
        nombre->setObjectName(QStringLiteral("nombre"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nombre);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_2->setPalette(palette2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        descripcion = new QTextEdit(layoutWidget);
        descripcion->setObjectName(QStringLiteral("descripcion"));

        formLayout->setWidget(3, QFormLayout::FieldRole, descripcion);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_3->setPalette(palette3);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        tipo = new QLineEdit(layoutWidget);
        tipo->setObjectName(QStringLiteral("tipo"));

        formLayout->setWidget(5, QFormLayout::FieldRole, tipo);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_4->setPalette(palette4);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_4);

        tiempo = new QSpinBox(layoutWidget);
        tiempo->setObjectName(QStringLiteral("tiempo"));

        formLayout->setWidget(7, QFormLayout::FieldRole, tiempo);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_12->setPalette(palette5);

        formLayout->setWidget(8, QFormLayout::FieldRole, label_12);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_5->setPalette(palette6);

        formLayout->setWidget(9, QFormLayout::LabelRole, label_5);

        temperatura = new QSpinBox(layoutWidget);
        temperatura->setObjectName(QStringLiteral("temperatura"));

        formLayout->setWidget(9, QFormLayout::FieldRole, temperatura);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_6->setPalette(palette7);

        formLayout->setWidget(10, QFormLayout::LabelRole, label_6);

        color = new QLineEdit(layoutWidget);
        color->setObjectName(QStringLiteral("color"));

        formLayout->setWidget(10, QFormLayout::FieldRole, color);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_8->setPalette(palette8);

        formLayout->setWidget(12, QFormLayout::LabelRole, label_8);

        cuerpo = new QLineEdit(layoutWidget);
        cuerpo->setObjectName(QStringLiteral("cuerpo"));

        formLayout->setWidget(12, QFormLayout::FieldRole, cuerpo);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_9->setPalette(palette9);

        formLayout->setWidget(14, QFormLayout::LabelRole, label_9);

        precio = new QLineEdit(layoutWidget);
        precio->setObjectName(QStringLiteral("precio"));

        formLayout->setWidget(14, QFormLayout::FieldRole, precio);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_13->setPalette(palette10);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_13);

        layoutWidget1 = new QWidget(RegistroCerveza);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(390, 140, 191, 48));
        formLayout_2 = new QFormLayout(layoutWidget1);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_10->setPalette(palette11);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_11->setPalette(palette12);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        comboBox_2 = new QComboBox(layoutWidget1);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comboBox_2);

        layoutWidget->raise();
        layoutWidget->raise();
        label->raise();
        label_7->raise();
        btn_guardarCerveza->raise();

        retranslateUi(RegistroCerveza);

        QMetaObject::connectSlotsByName(RegistroCerveza);
    } // setupUi

    void retranslateUi(QDialog *RegistroCerveza)
    {
        RegistroCerveza->setWindowTitle(QApplication::translate("RegistroCerveza", "Registro Cerveza", 0));
        label->setText(QString());
        btn_guardarCerveza->setText(QString());
        label_7->setText(QString());
        label_2->setText(QApplication::translate("RegistroCerveza", "Descripci\303\263n:", 0));
        label_3->setText(QApplication::translate("RegistroCerveza", "Tipo de fermentaci\303\263n:", 0));
        label_4->setText(QApplication::translate("RegistroCerveza", "Tiempo de fermentaci\303\263n:", 0));
        label_12->setText(QApplication::translate("RegistroCerveza", "horas", 0));
        label_5->setText(QApplication::translate("RegistroCerveza", "Temperatura:", 0));
        label_6->setText(QApplication::translate("RegistroCerveza", "Color:", 0));
        label_8->setText(QApplication::translate("RegistroCerveza", "Cuerpo:", 0));
        label_9->setText(QApplication::translate("RegistroCerveza", "Precio:", 0));
        label_13->setText(QApplication::translate("RegistroCerveza", "Nombre", 0));
        label_10->setText(QApplication::translate("RegistroCerveza", "Familia:", 0));
        label_11->setText(QApplication::translate("RegistroCerveza", "Estilo:", 0));
    } // retranslateUi

};

namespace Ui {
    class RegistroCerveza: public Ui_RegistroCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROCERVEZA_H
