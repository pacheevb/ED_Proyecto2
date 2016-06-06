#include "registrocerveza.h"
#include "ui_registrocerveza.h"

RegistroCerveza::RegistroCerveza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistroCerveza)
{
    ui->setupUi(this);
}

RegistroCerveza::~RegistroCerveza()
{
    delete ui;
}

void RegistroCerveza::setGrafo(Grafo *pGrafo){
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

void RegistroCerveza::on_btn_guardarCerveza_clicked()
{
    QString cerveza = ui->nombre->text();
    string destino = cerveza.toLocal8Bit().constData();

    QString estilo = ui->comboBox_2->currentText();
    string origen = estilo.toLocal8Bit().constData();

    string datos[7];

    datos[0] = ui->descripcion->toPlainText().toLocal8Bit().constData();
    datos[1] = ui->tipo->text().toLocal8Bit().constData();
    datos[2] = ui->tiempo->text().toLocal8Bit().constData();
    datos[3] = ui->temperatura->text().toLocal8Bit().constData();
    datos[4] = ui->color->text().toLocal8Bit().constData();
    datos[5] = ui->cuerpo->text().toLocal8Bit().constData();
    datos[6] = ui->precio->text().toLocal8Bit().constData();

    grafoCervezas->agregarVertice(destino, 3, datos); //3 por ser tipo Cerveza
    grafoCervezas->agregarArista(origen, destino, 0);
    grafoCervezas->mostrarGrafo();

    this->close();
}

void RegistroCerveza::on_comboBox_currentIndexChanged(int index)
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
