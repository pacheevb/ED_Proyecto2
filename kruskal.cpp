#include "kruskal.h"
#include "ui_kruskal.h"

Kruskal::Kruskal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Kruskal)
{
    ui->setupUi(this);
}

Kruskal::~Kruskal()
{
    delete ui;
}
