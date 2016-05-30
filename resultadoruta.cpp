#include "resultadoruta.h"
#include "ui_resultadoruta.h"

resultadoRuta::resultadoRuta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resultadoRuta)
{
    ui->setupUi(this);
}

resultadoRuta::~resultadoRuta()
{
    delete ui;
}
