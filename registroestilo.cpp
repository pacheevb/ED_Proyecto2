#include "registroestilo.h"
#include "ui_registroestilo.h"
#include <QMessageBox>

registroEstilo::registroEstilo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registroEstilo)
{
    ui->setupUi(this);
}

registroEstilo::~registroEstilo()
{
    delete ui;
}

void registroEstilo::setGrafo(Grafo *pGrafo){
    grafoCervezas = pGrafo;
    int tam = grafoCervezas->getSize();
    string str;
    for(int i = 0; i < tam; i++){
        if(grafoCervezas->getVertice(i).getTipo() == 1){
            str = grafoCervezas->getVertice(i).getNombre();
            QString qs = QString::fromLocal8Bit(str.c_str());
            ui->comboBox->addItem(qs);
        }
    }
}

void registroEstilo::on_btn_guardarEstilo_clicked()
{
    QString estilo = ui->lineEdit->text();
    string destino = estilo.toLocal8Bit().constData();

    QString familia = ui->comboBox->currentText();
    string origen = familia.toLocal8Bit().constData();

    if(familia == ""){
        QMessageBox::information(this, "Error", "Primero debe ingresar una familia");
    } else {
        grafoCervezas->agregarVertice(destino, 2); //2 por ser tipo Estilo
        grafoCervezas->agregarArista(origen, destino, 0);
        grafoCervezas->mostrarGrafo();
        this->close();
    }
}
