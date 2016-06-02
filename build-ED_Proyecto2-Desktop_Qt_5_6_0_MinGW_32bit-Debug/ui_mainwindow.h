/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btn_aerolinea;
    QLabel *label_2;
    QPushButton *btn_cerveceria;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(763, 478);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(31, 37, 49, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btn_aerolinea = new QPushButton(centralWidget);
        btn_aerolinea->setObjectName(QStringLiteral("btn_aerolinea"));
        btn_aerolinea->setGeometry(QRect(470, 410, 151, 51));
        btn_aerolinea->setFlat(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 10, 361, 431));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/Rutas.png")));
        label_2->setScaledContents(true);
        btn_cerveceria = new QPushButton(centralWidget);
        btn_cerveceria->setObjectName(QStringLiteral("btn_cerveceria"));
        btn_cerveceria->setGeometry(QRect(140, 410, 131, 51));
        btn_cerveceria->setFlat(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 40, 401, 351));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/cervezas.png")));
        label->setScaledContents(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 10, 141, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/lb_menu.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 380, 171, 101));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_cerveceria.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(460, 380, 171, 100));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_aerolinea.png")));
        label_5->setScaledContents(true);
        label_5->setWordWrap(false);
        MainWindow->setCentralWidget(centralWidget);
        label_2->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        btn_cerveceria->raise();
        label_5->raise();
        btn_aerolinea->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btn_aerolinea->setText(QString());
        label_2->setText(QString());
        btn_cerveceria->setText(QString());
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
