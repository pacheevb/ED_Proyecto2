#include "agregarciudad.h"
#include "ui_agregarciudad.h"

agregarCiudad::agregarCiudad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregarCiudad)
{
    ui->setupUi(this);
}

agregarCiudad::~agregarCiudad()
{
    delete ui;
}

void agregarCiudad::on_buttonBox_accepted()
{
    accept();
}

void agregarCiudad::on_buttonBox_rejected()
{
    reject();
}

QString agregarCiudad::nombre()const{
    return ui->nombreCiudad->text();
}
