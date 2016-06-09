#include "principalcervezas.h"
#include "ui_principalcervezas.h"
#include "registrofamilia.h"
#include "registrocerveza.h"
#include "registroestilo.h"
#include "buscarcerveza.h"
#include "borrarestilo.h"
#include "borrarfamilia.h"


principalCervezas::principalCervezas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::principalCervezas)
{
    ui->setupUi(this);
/*
    grafoCervezas.agregarVertice("Ale", 1);
    grafoCervezas.agregarVertice("Britanica", 2);
    string cer1[7] = {"Tica", "Alta", "30", "25", "Roja", "Baja", "300"};
    string cer2[7] = {"Inglesa", "Alta", "20", "15", "Verde", "Fuerte", "200"};
    string cer3[7] = {"Alemana", "Baja", "20", "35", "Azul", "Fuerte", "400"};
    grafoCervezas.agregarVertice("Imperial", 3, cer1);
    grafoCervezas.agregarVertice("Pilsen", 3, cer2);
    grafoCervezas.agregarVertice("Bavaria", 3, cer3);

    grafoCervezas.agregarArista("Ale", "Britanica", 0);
    grafoCervezas.agregarArista("Britanica", "Imperial", 0);
    grafoCervezas.agregarArista("Britanica", "Pilsen", 0);
    grafoCervezas.agregarArista("Britanica", "Bavaria", 0);*/
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
    rC.setGrafo(&grafoCervezas);
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

void principalCervezas::on_btn_borrarFamilia_clicked()
{
    borrarFamilia bF(&grafoCervezas);
    bF.setModal(true);
    bF.exec();
}
