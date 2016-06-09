#include "borrarfamilia.h"
#include "ui_borrarfamilia.h"
#include <QMessageBox>

borrarFamilia::borrarFamilia(Grafo *pGrafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::borrarFamilia)
{
    ui->setupUi(this);
    grafoCervezas = pGrafo;

    for(int i = 0; i < grafoCervezas->getSize(); i++){
        if(grafoCervezas->getVertice(i).getTipo() == 1){
            string nombre = grafoCervezas->getVertice(i).getNombre();
            ui->comboBox->addItem(QString::fromLocal8Bit(nombre.c_str()));
        }
    }
}

borrarFamilia::~borrarFamilia()
{
    delete ui;
}

void borrarFamilia::on_btn_borrarFamilia_clicked()
{
    string porBorrar = ui->comboBox->currentText().toLocal8Bit().constData();
    Vertice aux = grafoCervezas->getVertice(grafoCervezas->getPos(porBorrar));
    if(aux.getAristas()->getSize() > 0){
        QMessageBox::information(this, "Cervecería", "No se puede eliminar familias con estilos, primero borre los estilos!");
    } else {
        grafoCervezas->borrarVertice(porBorrar);
        this->close();
    }
}
