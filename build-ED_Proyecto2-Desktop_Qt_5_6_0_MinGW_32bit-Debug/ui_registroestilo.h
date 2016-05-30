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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_registroEstilo
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *registroEstilo)
    {
        if (registroEstilo->objectName().isEmpty())
            registroEstilo->setObjectName(QStringLiteral("registroEstilo"));
        registroEstilo->resize(200, 250);
        lineEdit = new QLineEdit(registroEstilo);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 120, 113, 20));
        label = new QLabel(registroEstilo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 81, 16));
        label_2 = new QLabel(registroEstilo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 120, 51, 16));

        retranslateUi(registroEstilo);

        QMetaObject::connectSlotsByName(registroEstilo);
    } // setupUi

    void retranslateUi(QDialog *registroEstilo)
    {
        registroEstilo->setWindowTitle(QApplication::translate("registroEstilo", "Dialog", 0));
        label->setText(QApplication::translate("registroEstilo", "Registro estilo:", 0));
        label_2->setText(QApplication::translate("registroEstilo", "Nombre:", 0));
    } // retranslateUi

};

namespace Ui {
    class registroEstilo: public Ui_registroEstilo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROESTILO_H
