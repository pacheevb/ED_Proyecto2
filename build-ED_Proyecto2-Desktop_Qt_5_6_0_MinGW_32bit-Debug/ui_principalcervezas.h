/********************************************************************************
** Form generated from reading UI file 'principalcervezas.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPALCERVEZAS_H
#define UI_PRINCIPALCERVEZAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_principalCervezas
{
public:
    QPushButton *btn_registroFamilia;
    QPushButton *btn_registroCerveza;
    QPushButton *btn_buscarCerveza;
    QLabel *label;

    void setupUi(QDialog *principalCervezas)
    {
        if (principalCervezas->objectName().isEmpty())
            principalCervezas->setObjectName(QStringLiteral("principalCervezas"));
        principalCervezas->resize(293, 352);
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
        principalCervezas->setPalette(palette);
        btn_registroFamilia = new QPushButton(principalCervezas);
        btn_registroFamilia->setObjectName(QStringLiteral("btn_registroFamilia"));
        btn_registroFamilia->setGeometry(QRect(60, 120, 171, 51));
        btn_registroCerveza = new QPushButton(principalCervezas);
        btn_registroCerveza->setObjectName(QStringLiteral("btn_registroCerveza"));
        btn_registroCerveza->setGeometry(QRect(60, 190, 171, 51));
        btn_buscarCerveza = new QPushButton(principalCervezas);
        btn_buscarCerveza->setObjectName(QStringLiteral("btn_buscarCerveza"));
        btn_buscarCerveza->setGeometry(QRect(60, 260, 171, 51));
        label = new QLabel(principalCervezas);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 210, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/lb_menu.png")));
        label->setScaledContents(true);

        retranslateUi(principalCervezas);

        QMetaObject::connectSlotsByName(principalCervezas);
    } // setupUi

    void retranslateUi(QDialog *principalCervezas)
    {
        principalCervezas->setWindowTitle(QApplication::translate("principalCervezas", "Dialog", 0));
        btn_registroFamilia->setText(QApplication::translate("principalCervezas", "Registro Familia", 0));
        btn_registroCerveza->setText(QApplication::translate("principalCervezas", "Registro Cerveza", 0));
        btn_buscarCerveza->setText(QApplication::translate("principalCervezas", "Buscar Cerveza", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class principalCervezas: public Ui_principalCervezas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPALCERVEZAS_H
