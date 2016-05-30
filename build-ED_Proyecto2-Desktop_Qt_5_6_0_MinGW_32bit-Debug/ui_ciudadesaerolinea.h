/********************************************************************************
** Form generated from reading UI file 'ciudadesaerolinea.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIUDADESAEROLINEA_H
#define UI_CIUDADESAEROLINEA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ciudadesAerolinea
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QDialog *ciudadesAerolinea)
    {
        if (ciudadesAerolinea->objectName().isEmpty())
            ciudadesAerolinea->setObjectName(QStringLiteral("ciudadesAerolinea"));
        ciudadesAerolinea->resize(200, 250);
        label = new QLabel(ciudadesAerolinea);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 111, 16));
        spinBox = new QSpinBox(ciudadesAerolinea);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(80, 90, 42, 22));
        pushButton = new QPushButton(ciudadesAerolinea);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 170, 75, 23));

        retranslateUi(ciudadesAerolinea);

        QMetaObject::connectSlotsByName(ciudadesAerolinea);
    } // setupUi

    void retranslateUi(QDialog *ciudadesAerolinea)
    {
        ciudadesAerolinea->setWindowTitle(QApplication::translate("ciudadesAerolinea", "Dialog", 0));
        label->setText(QApplication::translate("ciudadesAerolinea", "Cantidad de ciudades:", 0));
        pushButton->setText(QApplication::translate("ciudadesAerolinea", "Seguir", 0));
    } // retranslateUi

};

namespace Ui {
    class ciudadesAerolinea: public Ui_ciudadesAerolinea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIUDADESAEROLINEA_H
