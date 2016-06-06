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
}
