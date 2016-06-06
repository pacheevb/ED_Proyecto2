#include "mostrarcerveza.h"
#include "ui_mostrarcerveza.h"

mostrarCerveza::mostrarCerveza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrarCerveza)
{
    ui->setupUi(this);
}

mostrarCerveza::~mostrarCerveza()
{
    delete ui;
}
