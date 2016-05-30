/********************************************************************************
** Form generated from reading UI file 'resultadoruta.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADORUTA_H
#define UI_RESULTADORUTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_resultadoRuta
{
public:

    void setupUi(QDialog *resultadoRuta)
    {
        if (resultadoRuta->objectName().isEmpty())
            resultadoRuta->setObjectName(QStringLiteral("resultadoRuta"));
        resultadoRuta->resize(640, 431);

        retranslateUi(resultadoRuta);

        QMetaObject::connectSlotsByName(resultadoRuta);
    } // setupUi

    void retranslateUi(QDialog *resultadoRuta)
    {
        resultadoRuta->setWindowTitle(QApplication::translate("resultadoRuta", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class resultadoRuta: public Ui_resultadoRuta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADORUTA_H
