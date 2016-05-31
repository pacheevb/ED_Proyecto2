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

QT_BEGIN_NAMESPACE

class Ui_registroFamilia
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *registroFamilia)
    {
        if (registroFamilia->objectName().isEmpty())
            registroFamilia->setObjectName(QStringLiteral("registroFamilia"));
        registroFamilia->resize(250, 200);
        label = new QLabel(registroFamilia);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 60, 94, 13));
        label_2 = new QLabel(registroFamilia);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 51, 16));
        lineEdit = new QLineEdit(registroFamilia);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 130, 113, 20));

        retranslateUi(registroFamilia);

        QMetaObject::connectSlotsByName(registroFamilia);
    } // setupUi

    void retranslateUi(QDialog *registroFamilia)
    {
        registroFamilia->setWindowTitle(QApplication::translate("registroFamilia", "Dialog", 0));
        label->setText(QApplication::translate("registroFamilia", "Registro de Familia:", 0));
        label_2->setText(QApplication::translate("registroFamilia", "Nombre:", 0));
    } // retranslateUi

};

namespace Ui {
    class registroFamilia: public Ui_registroFamilia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROFAMILIA_H
