#include "ciudadesaerolinea.h"
#include "ui_ciudadesaerolinea.h"
#include "matrizaerolinea.h"

ciudadesAerolinea::ciudadesAerolinea(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ciudadesAerolinea)
{
    ui->setupUi(this);
}

ciudadesAerolinea::~ciudadesAerolinea()
{
    delete ui;
}

void ciudadesAerolinea::on_btn_SeguirAMatriz_clicked()
{
    //ir a matriz
    matrizAerolinea mA;
    mA.setModal(true);
    this->close();
    mA.exec();
}
