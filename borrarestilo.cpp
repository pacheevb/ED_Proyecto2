#include "borrarestilo.h"
#include "ui_borrarestilo.h"

borrarEstilo::borrarEstilo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::borrarEstilo)
{
    ui->setupUi(this);
}

borrarEstilo::~borrarEstilo()
{
    delete ui;
}
