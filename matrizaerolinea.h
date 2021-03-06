#ifndef MATRIZAEROLINEA_H
#define MATRIZAEROLINEA_H

#include <QDialog>
#include <QTableWidgetItem>
#include "Grafo.h"

namespace Ui {
class matrizAerolinea;
}

class matrizAerolinea : public QDialog
{
    Q_OBJECT

public:
    explicit matrizAerolinea(QWidget *parent = 0);
    ~matrizAerolinea();

private slots:
    void on_pushButton_clicked();

    void on_btn_dijkstra_clicked();

    void on_btn_prim_clicked();

    void on_btn_kruskal_clicked();

    void on_btn_agregarCiudad_clicked();

    void on_tableWidget_itemChanged(QTableWidgetItem *item);

    void on_btn_floyd_clicked();

private:
    Ui::matrizAerolinea *ui;
    Grafo mapa;

};

#endif // MATRIZAEROLINEA_H
