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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_buscarCerveza
{
public:
    QLabel *label;
    QListView *listView;
    QComboBox *comboBox;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *buscarCerveza)
    {
        if (buscarCerveza->objectName().isEmpty())
            buscarCerveza->setObjectName(QStringLiteral("buscarCerveza"));
        buscarCerveza->resize(500, 432);
        label = new QLabel(buscarCerveza);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 91, 16));
        listView = new QListView(buscarCerveza);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(30, 140, 291, 261));
        comboBox = new QComboBox(buscarCerveza);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 80, 69, 22));
        label_2 = new QLabel(buscarCerveza);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 51, 16));
        pushButton = new QPushButton(buscarCerveza);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 80, 75, 23));

        retranslateUi(buscarCerveza);

        QMetaObject::connectSlotsByName(buscarCerveza);
    } // setupUi

    void retranslateUi(QDialog *buscarCerveza)
    {
        buscarCerveza->setWindowTitle(QApplication::translate("buscarCerveza", "Dialog", 0));
        label->setText(QApplication::translate("buscarCerveza", "Buscar Cervezas:", 0));
        label_2->setText(QApplication::translate("buscarCerveza", "Familia:", 0));
        pushButton->setText(QApplication::translate("buscarCerveza", "Buscar", 0));
    } // retranslateUi

};

namespace Ui {
    class buscarCerveza: public Ui_buscarCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARCERVEZA_H
