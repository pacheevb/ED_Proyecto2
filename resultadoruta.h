#ifndef RESULTADORUTA_H
#define RESULTADORUTA_H

#include <QDialog>
#include "Grafo.h"
#include <QAbstractItemModel>

namespace Ui {
class resultadoRuta;
}

class resultadoRuta : public QDialog
{
    Q_OBJECT

public:
    explicit resultadoRuta(float **pM, Grafo *pGrafo, QWidget *parent = 0);
    ~resultadoRuta();

private:
    Ui::resultadoRuta *ui;
    float **datos;
    Grafo *grafoAviones;
};

#endif // RESULTADORUTA_H
