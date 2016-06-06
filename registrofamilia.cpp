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

void registroFamilia::on_btn_guardarFam_clicked()
{
    QString familia = ui->lineEdit->text();
    grafoCervezas->agregarVertice(familia.toLocal8Bit().constData(), 1); //1 por ser tipo Familia
    grafoCervezas->mostrarGrafo();
    this->close();
}

void registroFamilia::setGrafo(Grafo *pGrafo){
    grafoCervezas = pGrafo;
}
