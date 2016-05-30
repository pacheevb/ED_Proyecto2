#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "principalcervezas.h"
#include "ciudadesaerolinea.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_cerveceria_clicked()
{
    //ir a menú de cervezas
    principalCervezas pC;
    pC.setModal(true);
    this->close();
    pC.exec();
}

void MainWindow::on_btn_aerolinea_clicked()
{
    //ir a ciudadesAerolinea
    ciudadesAerolinea cA;
    cA.setModal(true);
    this->close();
    cA.exec();
}
