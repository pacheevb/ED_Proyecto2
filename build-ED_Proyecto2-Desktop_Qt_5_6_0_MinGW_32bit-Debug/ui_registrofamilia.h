/********************************************************************************
** Form generated from reading UI file 'registrofamilia.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROFAMILIA_H
#define UI_REGISTROFAMILIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registroFamilia
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *btn_guardarFam;
    QLabel *label_3;

    void setupUi(QDialog *registroFamilia)
    {
        if (registroFamilia->objectName().isEmpty())
            registroFamilia->setObjectName(QStringLiteral("registroFamilia"));
        registroFamilia->resize(382, 265);
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
        registroFamilia->setPalette(palette);
        label = new QLabel(registroFamilia);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(29, 30, 321, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/lb_regFamilia.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(registroFamilia);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 120, 51, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_2->setPalette(palette1);
        lineEdit = new QLineEdit(registroFamilia);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 120, 113, 20));
        btn_guardarFam = new QPushButton(registroFamilia);
        btn_guardarFam->setObjectName(QStringLiteral("btn_guardarFam"));
        btn_guardarFam->setGeometry(QRect(270, 210, 91, 41));
        btn_guardarFam->setFlat(true);
        label_3 = new QLabel(registroFamilia);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 200, 111, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_guardar.png")));
        label->raise();
        label_2->raise();
        lineEdit->raise();
        label_3->raise();
        btn_guardarFam->raise();

        retranslateUi(registroFamilia);

        QMetaObject::connectSlotsByName(registroFamilia);
    } // setupUi

    void retranslateUi(QDialog *registroFamilia)
    {
        registroFamilia->setWindowTitle(QApplication::translate("registroFamilia", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("registroFamilia", "Nombre:", 0));
        btn_guardarFam->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class registroFamilia: public Ui_registroFamilia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROFAMILIA_H
