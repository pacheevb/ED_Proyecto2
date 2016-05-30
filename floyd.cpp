#include "floyd.h"
#include "ui_floyd.h"

floyd::floyd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::floyd)
{
    ui->setupUi(this);
}

floyd::~floyd()
{
    delete ui;
}
