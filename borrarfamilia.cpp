#include "borrarfamilia.h"
#include "ui_borrarfamilia.h"

borrarFamilia::borrarFamilia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::borrarFamilia)
{
    ui->setupUi(this);
}

borrarFamilia::~borrarFamilia()
{
    delete ui;
}
