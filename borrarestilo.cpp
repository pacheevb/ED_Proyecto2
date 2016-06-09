#include "borrarestilo.h"
#include "ui_borrarestilo.h"

borrarEstilo::borrarEstilo(Grafo *pGrafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::borrarEstilo)
{
    ui->setupUi(this);
    grafoCervezas = pGrafo;

    int tam = grafoCervezas->getSize();
    string str;
    for(int i = 0; i < tam; i++){
        if(grafoCervezas->getVertice(i).getTipo() == 1){
            str = grafoCervezas->getVertice(i).getNombre();
            QString qs = QString::fromLocal8Bit(str.c_str());
            ui->familia->addItem(qs);
        }
    }

}

borrarEstilo::~borrarEstilo()
{
    delete ui;
}

void borrarEstilo::on_btn_borrarEstilo_clicked()
{
    string porBorrar = ui->estilo->currentText().toLocal8Bit().constData();
    Vertice aux = grafoCervezas->getVertice(grafoCervezas->getPos(porBorrar));
    if(aux.getAristas()->getSize() > 0){
        QMessageBox::information(this, "Cervecería", "No se puede eliminar estilos con cervezas!");
    } else {
        grafoCervezas->borrarVertice(porBorrar);
        this->close();
    }
}

void borrarEstilo::on_familia_currentIndexChanged(int index)
{
    ui->estilo->clear();
    Vertice aux = grafoCervezas->getVertice(grafoCervezas->getPos(ui->familia->currentText().toLocal8Bit().constData()));
    string str;
    for(int i = 0; i < aux.getAristas()->getSize(); i++){
        aux.getAristas()->goToPos(i);
        str = aux.getAristas()->getElement().getDestino();
        QString qs = QString::fromLocal8Bit(str.c_str());
        ui->estilo->addItem(qs);
    }
}
