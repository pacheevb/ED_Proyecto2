/********************************************************************************
** Form generated from reading UI file 'buscarcerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARCERVEZA_H
#define UI_BUSCARCERVEZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_buscarCerveza
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QComboBox *comboBox;
    QLabel *label_2;
    QPushButton *btn_buscar;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *buscarCerveza)
    {
        if (buscarCerveza->objectName().isEmpty())
            buscarCerveza->setObjectName(QStringLiteral("buscarCerveza"));
        buscarCerveza->resize(500, 432);
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
        buscarCerveza->setPalette(palette);
        label = new QLabel(buscarCerveza);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 311, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/lb_buscarCervezas.png")));
        label->setScaledContents(true);
        listWidget = new QListWidget(buscarCerveza);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(180, 120, 291, 291));
        comboBox = new QComboBox(buscarCerveza);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 150, 69, 22));
        label_2 = new QLabel(buscarCerveza);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 150, 51, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_2->setPalette(palette1);
        btn_buscar = new QPushButton(buscarCerveza);
        btn_buscar->setObjectName(QStringLiteral("btn_buscar"));
        btn_buscar->setGeometry(QRect(50, 260, 91, 41));
        btn_buscar->setFlat(true);
        comboBox_2 = new QComboBox(buscarCerveza);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(90, 180, 69, 22));
        label_3 = new QLabel(buscarCerveza);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 180, 51, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_3->setPalette(palette2);
        label_4 = new QLabel(buscarCerveza);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 260, 141, 51));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_buscar.png")));
        label_4->setScaledContents(false);
        label->raise();
        listWidget->raise();
        comboBox->raise();
        label_2->raise();
        comboBox_2->raise();
        label_3->raise();
        label_4->raise();
        btn_buscar->raise();

        retranslateUi(buscarCerveza);

        QMetaObject::connectSlotsByName(buscarCerveza);
    } // setupUi

    void retranslateUi(QDialog *buscarCerveza)
    {
        buscarCerveza->setWindowTitle(QApplication::translate("buscarCerveza", "Buscar Cerveza", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("buscarCerveza", "Familia:", 0));
        btn_buscar->setText(QString());
        label_3->setText(QApplication::translate("buscarCerveza", "Estilo:", 0));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class buscarCerveza: public Ui_buscarCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARCERVEZA_H
