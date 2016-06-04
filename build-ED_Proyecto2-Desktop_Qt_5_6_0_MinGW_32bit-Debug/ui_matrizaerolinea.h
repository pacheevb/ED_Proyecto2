/********************************************************************************
** Form generated from reading UI file 'matrizaerolinea.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIZAEROLINEA_H
#define UI_MATRIZAEROLINEA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_matrizAerolinea
{
public:
    QLabel *label;
    QPushButton *btn_floyd;
    QPushButton *btn_dijkstra;
    QPushButton *btn_prim;
    QPushButton *btn_kruskal;
    QPushButton *btn_agregarCiudad;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTableWidget *tableWidget;
    QLabel *label_2;

    void setupUi(QDialog *matrizAerolinea)
    {
        if (matrizAerolinea->objectName().isEmpty())
            matrizAerolinea->setObjectName(QStringLiteral("matrizAerolinea"));
        matrizAerolinea->resize(807, 503);
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
        matrizAerolinea->setPalette(palette);
        label = new QLabel(matrizAerolinea);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 481, 41));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/lb_matriz.png")));
        label->setScaledContents(true);
        btn_floyd = new QPushButton(matrizAerolinea);
        btn_floyd->setObjectName(QStringLiteral("btn_floyd"));
        btn_floyd->setGeometry(QRect(690, 140, 75, 41));
        btn_floyd->setFlat(true);
        btn_dijkstra = new QPushButton(matrizAerolinea);
        btn_dijkstra->setObjectName(QStringLiteral("btn_dijkstra"));
        btn_dijkstra->setGeometry(QRect(690, 200, 75, 41));
        btn_dijkstra->setFlat(true);
        btn_prim = new QPushButton(matrizAerolinea);
        btn_prim->setObjectName(QStringLiteral("btn_prim"));
        btn_prim->setGeometry(QRect(690, 260, 75, 41));
        btn_prim->setFlat(true);
        btn_kruskal = new QPushButton(matrizAerolinea);
        btn_kruskal->setObjectName(QStringLiteral("btn_kruskal"));
        btn_kruskal->setGeometry(QRect(690, 320, 75, 41));
        btn_kruskal->setFlat(true);
        btn_agregarCiudad = new QPushButton(matrizAerolinea);
        btn_agregarCiudad->setObjectName(QStringLiteral("btn_agregarCiudad"));
        btn_agregarCiudad->setGeometry(QRect(30, 440, 181, 41));
        btn_agregarCiudad->setFlat(true);
        label_3 = new QLabel(matrizAerolinea);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(670, 140, 121, 51));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_floyd.png")));
        label_4 = new QLabel(matrizAerolinea);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(670, 200, 121, 51));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_dijkstra.png")));
        label_5 = new QLabel(matrizAerolinea);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(670, 260, 121, 51));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_prim.png")));
        label_6 = new QLabel(matrizAerolinea);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(670, 320, 121, 51));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_kuskal.png")));
        tableWidget = new QTableWidget(matrizAerolinea);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 70, 621, 361));
        label_2 = new QLabel(matrizAerolinea);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 440, 211, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Recursos/btn_agregarCiudad.png")));
        label->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        btn_prim->raise();
        btn_floyd->raise();
        btn_dijkstra->raise();
        btn_kruskal->raise();
        tableWidget->raise();
        label_2->raise();
        btn_agregarCiudad->raise();

        retranslateUi(matrizAerolinea);

        QMetaObject::connectSlotsByName(matrizAerolinea);
    } // setupUi

    void retranslateUi(QDialog *matrizAerolinea)
    {
        matrizAerolinea->setWindowTitle(QApplication::translate("matrizAerolinea", "Dialog", 0));
        label->setText(QString());
        btn_floyd->setText(QString());
        btn_dijkstra->setText(QString());
        btn_prim->setText(QString());
        btn_kruskal->setText(QString());
        btn_agregarCiudad->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class matrizAerolinea: public Ui_matrizAerolinea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIZAEROLINEA_H
