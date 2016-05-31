#include "principalcervezas.h"
#include "ui_principalcervezas.h"
#include "registrofamilia.h"
#include "registrocerveza.h"
#include "registroestilo.h"
#include "buscarcerveza.h"


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

void principalCervezas::on_btn_registroFamilia_clicked()
{
    //ir a registro familia
    registroFamilia rF;
    rF.setModal(true);
    this->close();
    rF.exec();
}

void principalCervezas::on_btn_registroCerveza_clicked()
{
    //ir a registroCerveza
    RegistroCerveza rC;
    rC.setModal(true);
    this->close();
    rC.exec();

}

void principalCervezas::on_btn_buscarCerveza_clicked()
{
    //ir a buscarCerveza
    buscarCerveza bC;
    bC.setModal(true);
    this->close();
    bC.exec();

}

void principalCervezas::on_btn_registroEstilo_clicked()
{
    registroEstilo rE;
    rE.setModal(true);
    this->close();
    rE.exec();

}
