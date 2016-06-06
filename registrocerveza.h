#ifndef REGISTROCERVEZA_H
#define REGISTROCERVEZA_H

#include <QDialog>
#include "Grafo.h"

namespace Ui {
class RegistroCerveza;
}

class RegistroCerveza : public QDialog
{
    Q_OBJECT

public:
    explicit RegistroCerveza(QWidget *parent = 0);
    ~RegistroCerveza();

    void setGrafo(Grafo *pGrafo);

private:
    Ui::RegistroCerveza *ui;
    Grafo *grafoCervezas;
};

#endif // REGISTROCERVEZA_H
