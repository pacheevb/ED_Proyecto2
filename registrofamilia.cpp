#include "registrofamilia.h"
#include "ui_registrofamilia.h"

registroFamilia::registroFamilia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registroFamilia)
{
    ui->setupUi(this);
}

registroFamilia::~registroFamilia()
{
    delete ui;
}
