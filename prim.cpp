#include "prim.h"
#include "ui_prim.h"

Prim::Prim(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prim)
{
    ui->setupUi(this);
}

Prim::~Prim()
{
    delete ui;
}
