#ifndef MOSTRARCERVEZA_H
#define MOSTRARCERVEZA_H

#include <QDialog>
#include "Grafo.h"
#include "Vertice.h"

namespace Ui {
class mostrarCerveza;
}

class mostrarCerveza : public QDialog
{
    Q_OBJECT

public:
    explicit mostrarCerveza(QString pCerveza, Grafo *pGrafo, QWidget *parent = 0);
    ~mostrarCerveza();

private slots:
    void on_btn_borrar_clicked();

private:
    Ui::mostrarCerveza *ui;
    Grafo *grafoCervezas;

};

#endif // MOSTRARCERVEZA_H
