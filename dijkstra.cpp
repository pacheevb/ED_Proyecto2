#include "dijkstra.h"
#include "ui_dijkstra.h"

Dijkstra::Dijkstra(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dijkstra)
{
    ui->setupUi(this);
}

Dijkstra::~Dijkstra()
{
    delete ui;
}
