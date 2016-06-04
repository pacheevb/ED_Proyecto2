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
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QSpinBox *spinBox;
    QLabel *label_12;
    QLabel *label_5;
    QSpinBox *spinBox_2;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QWidget *widget1;
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
        widget = new QWidget(RegistroCerveza);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 40, 271, 411));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_2->setPalette(palette2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, textEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_3->setPalette(palette3);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_4->setPalette(palette4);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_12->setPalette(palette5);

        formLayout->setWidget(5, QFormLayout::FieldRole, label_12);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_5->setPalette(palette6);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        formLayout->setWidget(6, QFormLayout::FieldRole, spinBox_2);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_6->setPalette(palette7);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_6);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_2);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_8->setPalette(palette8);

        formLayout->setWidget(9, QFormLayout::LabelRole, label_8);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lineEdit_4);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_9->setPalette(palette9);

        formLayout->setWidget(11, QFormLayout::LabelRole, label_9);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        formLayout->setWidget(11, QFormLayout::FieldRole, lineEdit_5);

        widget1 = new QWidget(RegistroCerveza);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(390, 140, 191, 48));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QStringLiteral("label_10"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_10->setPalette(palette10);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        comboBox = new QComboBox(widget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_11 = new QLabel(widget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_11->setPalette(palette11);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        comboBox_2 = new QComboBox(widget1);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comboBox_2);

        lineEdit->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        comboBox->raise();
        comboBox_2->raise();
        textEdit->raise();
        spinBox->raise();
        spinBox_2->raise();
        label_12->raise();
        lineEdit_2->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
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
        label_10->setText(QApplication::translate("RegistroCerveza", "Familia:", 0));
        label_11->setText(QApplication::translate("RegistroCerveza", "Estilo:", 0));
    } // retranslateUi

};

namespace Ui {
    class RegistroCerveza: public Ui_RegistroCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROCERVEZA_H
