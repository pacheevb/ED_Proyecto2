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

QT_BEGIN_NAMESPACE

class Ui_matrizAerolinea
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *btn_dijkstra;
    QPushButton *btn_prim;
    QPushButton *btn_kruskal;

    void setupUi(QDialog *matrizAerolinea)
    {
        if (matrizAerolinea->objectName().isEmpty())
            matrizAerolinea->setObjectName(QStringLiteral("matrizAerolinea"));
        matrizAerolinea->resize(748, 472);
        label = new QLabel(matrizAerolinea);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 30, 111, 16));
        pushButton = new QPushButton(matrizAerolinea);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(640, 160, 75, 23));
        btn_dijkstra = new QPushButton(matrizAerolinea);
        btn_dijkstra->setObjectName(QStringLiteral("btn_dijkstra"));
        btn_dijkstra->setGeometry(QRect(640, 200, 75, 23));
        btn_prim = new QPushButton(matrizAerolinea);
        btn_prim->setObjectName(QStringLiteral("btn_prim"));
        btn_prim->setGeometry(QRect(640, 240, 75, 23));
        btn_kruskal = new QPushButton(matrizAerolinea);
        btn_kruskal->setObjectName(QStringLiteral("btn_kruskal"));
        btn_kruskal->setGeometry(QRect(640, 280, 75, 23));

        retranslateUi(matrizAerolinea);

        QMetaObject::connectSlotsByName(matrizAerolinea);
    } // setupUi

    void retranslateUi(QDialog *matrizAerolinea)
    {
        matrizAerolinea->setWindowTitle(QApplication::translate("matrizAerolinea", "Dialog", 0));
        label->setText(QApplication::translate("matrizAerolinea", "Matriz de adyacencia:", 0));
        pushButton->setText(QApplication::translate("matrizAerolinea", "Floyd", 0));
        btn_dijkstra->setText(QApplication::translate("matrizAerolinea", "Dijkstra", 0));
        btn_prim->setText(QApplication::translate("matrizAerolinea", "Prim", 0));
        btn_kruskal->setText(QApplication::translate("matrizAerolinea", "Kruskal", 0));
    } // retranslateUi

};

namespace Ui {
    class matrizAerolinea: public Ui_matrizAerolinea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIZAEROLINEA_H
