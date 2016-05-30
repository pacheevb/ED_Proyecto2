#include "registroestilo.h"
#include "ui_registroestilo.h"

registroEstilo::registroEstilo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registroEstilo)
{
    ui->setupUi(this);
}

registroEstilo::~registroEstilo()
{
    delete ui;
}
