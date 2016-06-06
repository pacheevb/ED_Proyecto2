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
    QPushButton *btn_registroEstilo;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *principalCervezas)
    {
        if (principalCervezas->objectName().isEmpty())
            principalCervezas->setObjectName(QStringLiteral("principalCervezas"));
        principalCervezas->resize(293, 413);
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
        btn_registroFamilia->setFlat(true);
        btn_registroCerveza = new QPushButton(principalCervezas);
        btn_registroCerveza->setObjectName(QStringLiteral("btn_registroCerveza"));
        btn_registroCerveza->setGeometry(QRect(60, 190, 171, 51));
        btn_registroCerveza->setFlat(true);
        btn_buscarCerveza = new QPushButton(principalCervezas);
        btn_buscarCerveza->setObjectName(QStringLiteral("btn_buscarCerveza"));
        btn_buscarCerveza->setGeometry(QRect(60, 320, 171, 51));
        btn_buscarCerveza->setFlat(true);
        label = new QLabel(principalCervezas);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 210, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/lb_menu.png")));
        label->setScaledContents(true);
        btn_registroEstilo = new QPushButton(principalCervezas);
        btn_registroEstilo->setObjectName(QStringLiteral("btn_registroEstilo"));
        btn_registroEstilo->setGeometry(QRect(60, 254, 171, 51));
        btn_registroEstilo->setFlat(true);
        label_2 = new QLabel(principalCervezas);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(52, 107, 181, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_regFamilia.png")));
        label_2->setScaledContents(false);
        label_3 = new QLabel(principalCervezas);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(53, 309, 190, 70));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_buscarCerveza.png")));
        label_4 = new QLabel(principalCervezas);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(53, 174, 190, 70));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_regCerveza.png")));
        label_5 = new QLabel(principalCervezas);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(53, 241, 190, 70));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_regEstilo.png")));
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        btn_registroFamilia->raise();
        btn_buscarCerveza->raise();
        btn_registroCerveza->raise();
        btn_registroEstilo->raise();

        retranslateUi(principalCervezas);

        QMetaObject::connectSlotsByName(principalCervezas);
    } // setupUi

    void retranslateUi(QDialog *principalCervezas)
    {
        principalCervezas->setWindowTitle(QApplication::translate("principalCervezas", "Men\303\272 Cervezas", 0));
        btn_registroFamilia->setText(QString());
        btn_registroCerveza->setText(QString());
        btn_buscarCerveza->setText(QString());
        label->setText(QString());
        btn_registroEstilo->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class principalCervezas: public Ui_principalCervezas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPALCERVEZAS_H
