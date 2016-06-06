/********************************************************************************
** Form generated from reading UI file 'registroestilo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROESTILO_H
#define UI_REGISTROESTILO_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registroEstilo
{
public:
    QLabel *label;
    QPushButton *btn_guardarEstilo;
    QLabel *label_4;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *comboBox;

    void setupUi(QDialog *registroEstilo)
    {
        if (registroEstilo->objectName().isEmpty())
            registroEstilo->setObjectName(QStringLiteral("registroEstilo"));
        registroEstilo->resize(390, 257);
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
        registroEstilo->setPalette(palette);
        label = new QLabel(registroEstilo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 311, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/lb_regEstilo.png")));
        label->setScaledContents(true);
        btn_guardarEstilo = new QPushButton(registroEstilo);
        btn_guardarEstilo->setObjectName(QStringLiteral("btn_guardarEstilo"));
        btn_guardarEstilo->setGeometry(QRect(260, 200, 101, 41));
        btn_guardarEstilo->setFlat(true);
        label_4 = new QLabel(registroEstilo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 200, 121, 51));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_guardar.png")));
        widget = new QWidget(registroEstilo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 120, 182, 48));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_2->setPalette(palette1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_3->setPalette(palette2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        lineEdit->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        comboBox->raise();
        label_4->raise();
        btn_guardarEstilo->raise();

        retranslateUi(registroEstilo);

        QMetaObject::connectSlotsByName(registroEstilo);
    } // setupUi

    void retranslateUi(QDialog *registroEstilo)
    {
        registroEstilo->setWindowTitle(QApplication::translate("registroEstilo", "Registro Estilo", 0));
        label->setText(QString());
        btn_guardarEstilo->setText(QString());
        label_4->setText(QString());
        label_2->setText(QApplication::translate("registroEstilo", "Nombre:", 0));
        label_3->setText(QApplication::translate("registroEstilo", "Familia:", 0));
    } // retranslateUi

};

namespace Ui {
    class registroEstilo: public Ui_registroEstilo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROESTILO_H
