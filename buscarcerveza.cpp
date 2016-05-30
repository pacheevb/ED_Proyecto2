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
