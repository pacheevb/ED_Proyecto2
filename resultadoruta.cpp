#include "resultadoruta.h"
#include "ui_resultadoruta.h"

resultadoRuta::resultadoRuta(float **pM, Grafo *pGrafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resultadoRuta)
{
    ui->setupUi(this);
    grafoAviones = pGrafo;
    datos = pM;

    int tam = grafoAviones->getSize();

    string str;
    QString nombreCiudad;
    for(int i = 0; i < tam; i++){
        str = grafoAviones->getVertice(i).getNombre();
        nombreCiudad = QString::fromLocal8Bit(str.c_str());

        ui->tableWidget->insertRow(ui->tableWidget->rowCount());//Nueva Fila
        ui->tableWidget->insertColumn(ui->tableWidget->columnCount());//Nueva Columna

        ui->tableWidget->setHorizontalHeaderItem(ui->tableWidget->columnCount() - 1,  new QTableWidgetItem(nombreCiudad));
        ui->tableWidget->setVerticalHeaderItem(ui->tableWidget->rowCount() - 1, new QTableWidgetItem(nombreCiudad) );
    }


    QString valor;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            valor = QString::number(datos[i][j]);
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(valor));
        }
    }

}

resultadoRuta::~resultadoRuta()
{
    delete ui;
}
