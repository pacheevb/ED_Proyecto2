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
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_resultadoRuta
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget;

    void setupUi(QDialog *resultadoRuta)
    {
        if (resultadoRuta->objectName().isEmpty())
            resultadoRuta->setObjectName(QStringLiteral("resultadoRuta"));
        resultadoRuta->resize(640, 431);
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
        resultadoRuta->setPalette(palette);
        label = new QLabel(resultadoRuta);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 640, 431));
        label_2 = new QLabel(resultadoRuta);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 30, 391, 41));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/lb_resultado.png")));
        label_2->setScaledContents(false);
        tableWidget = new QTableWidget(resultadoRuta);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 110, 561, 291));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        retranslateUi(resultadoRuta);

        QMetaObject::connectSlotsByName(resultadoRuta);
    } // setupUi

    void retranslateUi(QDialog *resultadoRuta)
    {
        resultadoRuta->setWindowTitle(QApplication::translate("resultadoRuta", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class resultadoRuta: public Ui_resultadoRuta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADORUTA_H
