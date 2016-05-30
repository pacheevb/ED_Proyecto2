/********************************************************************************
** Form generated from reading UI file 'registrocerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROCERVEZA_H
#define UI_REGISTROCERVEZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_RegistroCerveza
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QLabel *label_12;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *RegistroCerveza)
    {
        if (RegistroCerveza->objectName().isEmpty())
            RegistroCerveza->setObjectName(QStringLiteral("RegistroCerveza"));
        RegistroCerveza->resize(691, 449);
        lineEdit = new QLineEdit(RegistroCerveza);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 145, 113, 20));
        label = new QLabel(RegistroCerveza);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 121, 31));
        label_2 = new QLabel(RegistroCerveza);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 61, 31));
        label_3 = new QLabel(RegistroCerveza);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 111, 31));
        label_4 = new QLabel(RegistroCerveza);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 190, 121, 31));
        label_5 = new QLabel(RegistroCerveza);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 240, 111, 31));
        label_6 = new QLabel(RegistroCerveza);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 290, 51, 20));
        label_8 = new QLabel(RegistroCerveza);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 337, 41, 20));
        label_9 = new QLabel(RegistroCerveza);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 378, 51, 20));
        label_10 = new QLabel(RegistroCerveza);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(370, 100, 51, 31));
        label_11 = new QLabel(RegistroCerveza);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(371, 150, 41, 31));
        comboBox = new QComboBox(RegistroCerveza);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(440, 100, 131, 22));
        comboBox_2 = new QComboBox(RegistroCerveza);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(440, 159, 131, 22));
        textEdit = new QTextEdit(RegistroCerveza);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(150, 50, 104, 71));
        pushButton = new QPushButton(RegistroCerveza);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(590, 400, 75, 23));
        spinBox = new QSpinBox(RegistroCerveza);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(150, 196, 42, 22));
        spinBox_2 = new QSpinBox(RegistroCerveza);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(150, 240, 42, 22));
        label_12 = new QLabel(RegistroCerveza);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(200, 197, 41, 20));
        lineEdit_2 = new QLineEdit(RegistroCerveza);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 290, 113, 20));
        lineEdit_4 = new QLineEdit(RegistroCerveza);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 340, 113, 20));
        lineEdit_5 = new QLineEdit(RegistroCerveza);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 380, 113, 20));

        retranslateUi(RegistroCerveza);

        QMetaObject::connectSlotsByName(RegistroCerveza);
    } // setupUi

    void retranslateUi(QDialog *RegistroCerveza)
    {
        RegistroCerveza->setWindowTitle(QApplication::translate("RegistroCerveza", "Dialog", 0));
        label->setText(QApplication::translate("RegistroCerveza", "Registro de Cervezas", 0));
        label_2->setText(QApplication::translate("RegistroCerveza", "Descripci\303\263n:", 0));
        label_3->setText(QApplication::translate("RegistroCerveza", "Tipo de fermentaci\303\263n:", 0));
        label_4->setText(QApplication::translate("RegistroCerveza", "Tiempo de fermentaci\303\263n:", 0));
        label_5->setText(QApplication::translate("RegistroCerveza", "Temperatura:", 0));
        label_6->setText(QApplication::translate("RegistroCerveza", "Color:", 0));
        label_8->setText(QApplication::translate("RegistroCerveza", "Cuerpo:", 0));
        label_9->setText(QApplication::translate("RegistroCerveza", "Precio:", 0));
        label_10->setText(QApplication::translate("RegistroCerveza", "Familia:", 0));
        label_11->setText(QApplication::translate("RegistroCerveza", "Estilo:", 0));
        pushButton->setText(QApplication::translate("RegistroCerveza", "Guardar", 0));
        label_12->setText(QApplication::translate("RegistroCerveza", "horas", 0));
    } // retranslateUi

};

namespace Ui {
    class RegistroCerveza: public Ui_RegistroCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROCERVEZA_H
