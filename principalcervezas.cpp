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
    rF.setGrafo(&grafoCervezas);
    rF.setModal(true);
    rF.exec();
}

void principalCervezas::on_btn_registroCerveza_clicked()
{
    //ir a registroCerveza
    RegistroCerveza rC;
    rC.setModal(true);
    rC.exec();

}

void principalCervezas::on_btn_buscarCerveza_clicked()
{
    //ir a buscarCerveza
    buscarCerveza bC;
    bC.setGrafo(&grafoCervezas);
    bC.setModal(true);
    bC.exec();

}

void principalCervezas::on_btn_registroEstilo_clicked()
{
    registroEstilo rE;
    rE.setGrafo(&grafoCervezas);
    rE.setModal(true);
    rE.exec();

}

Grafo principalCervezas::getGrafo(){
    return grafoCervezas;
}
