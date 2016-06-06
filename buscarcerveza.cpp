#include "buscarcerveza.h"
#include "ui_buscarcerveza.h"
#include "mostrarcerveza.h"

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
    Vertice aux = grafoCervezas->getVertice(grafoCervezas->getPos(ui->comboBox->currentText().toLocal8Bit().constData()));
    string str;
    for(int i = 0; i < aux.getAristas()->getSize(); i++){
        aux.getAristas()->goToPos(i);
        str = aux.getAristas()->getElement().getDestino();
        QString qs = QString::fromLocal8Bit(str.c_str());
        ui->comboBox_2->addItem(qs);
    }
}

void buscarCerveza::on_btn_buscar_clicked()
{
    ui->listWidget->clear();
    string str = ui->comboBox_2->currentText().toLocal8Bit().constData();
    Vertice aux = grafoCervezas->getVertice(grafoCervezas->getPos(str));

    for(int i = 0; i < aux.getAristas()->getSize(); i++){
        aux.getAristas()->goToPos(i);
        string strI = aux.getAristas()->getElement().getDestino();
        QString str = QString::fromLocal8Bit(strI.c_str());
        ui->listWidget->addItem(str);
    }
}

void buscarCerveza::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    mostrarCerveza mC(item->text(), grafoCervezas);
    mC.setModal(true);
    mC.exec();
}
