#include "principalcervezas.h"
#include "ui_principalcervezas.h"

principalCervezas::principalCervezas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::principalCervezas)
{
    ui->setupUi(this);
}

principalCervezas::~principalCervezas()
{
    delete ui;
}
