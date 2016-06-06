#include "buscarcerveza.h"
#include "ui_buscarcerveza.h"

buscarCerveza::buscarCerveza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buscarCerveza)
{
    ui->setupUi(this);


}

buscarCerveza::~buscarCerveza()
{
    delete ui;
}

void buscarCerveza::setGrafo(Grafo *pGrafo){
    grafoCervezas = pGrafo;
    int tam = grafoCervezas->getSize();
    string str;
    for(int i = 0; i < tam; i++){
        str = grafoCervezas->getVertice(i).getNombre();
        QString qs = QString::fromLocal8Bit(str.c_str());
        if(grafoCervezas->getVertice(i).getTipo() == 1){
            ui->comboBox->addItem(qs);
        }
    }
}

void buscarCerveza::on_comboBox_currentIndexChanged(int index)
{
    ui->comboBox_2->clear();
    Vertice aux = grafoCervezas->getVertice(index);
    string str;
    for(int i = 0; i < aux.getAristas()->getSize(); i++){
        aux.getAristas()->goToPos(i);
        str = aux.getAristas()->getElement().getDestino();
        QString qs = QString::fromLocal8Bit(str.c_str());
        ui->comboBox_2->addItem(qs);
    }
}
