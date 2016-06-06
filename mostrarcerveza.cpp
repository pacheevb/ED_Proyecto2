#include "mostrarcerveza.h"
#include "ui_mostrarcerveza.h"

mostrarCerveza::mostrarCerveza(QString pCerveza, Grafo *pGrafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrarCerveza)
{
    ui->setupUi(this);
    grafoCervezas = pGrafo;

    Vertice aux = grafoCervezas->getVertice(grafoCervezas->getPos(pCerveza.toLocal8Bit().constData()));
    string *datos = aux.getDatos();
    ui->mostrarNombre->setText(pCerveza);
    ui->mostrarDescripcion->setText(QString::fromLocal8Bit(datos[0].c_str()));
    ui->mostrarTipo->setText(QString::fromLocal8Bit(datos[1].c_str()));
    ui->mostrarTiempo->setText(QString::fromLocal8Bit(datos[2].c_str()));
    ui->mostrarTemperatura->setText(QString::fromLocal8Bit(datos[3].c_str()));
    ui->mostrarColor->setText(QString::fromLocal8Bit(datos[4].c_str()));
    ui->mostrarCuerepo->setText(QString::fromLocal8Bit(datos[5].c_str()));
    ui->mostrarPrecio->setText(QString::fromLocal8Bit(datos[6].c_str()));
}

mostrarCerveza::~mostrarCerveza()
{
    delete ui;
}

void mostrarCerveza::on_btn_borrar_clicked()
{
    QString nombre = ui->mostrarNombre->text();
    string str = nombre.toLocal8Bit().constData();

    grafoCervezas->borrarVertice(str);

    this->close();
}
