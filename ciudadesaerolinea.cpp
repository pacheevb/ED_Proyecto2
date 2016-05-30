#include "ciudadesaerolinea.h"
#include "ui_ciudadesaerolinea.h"

ciudadesAerolinea::ciudadesAerolinea(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ciudadesAerolinea)
{
    ui->setupUi(this);
}

ciudadesAerolinea::~ciudadesAerolinea()
{
    delete ui;
}
