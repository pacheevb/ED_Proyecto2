#ifndef REGISTROCERVEZA_H
#define REGISTROCERVEZA_H

#include <QDialog>
#include "Grafo.h"
#include "Vertice.h"

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

private slots:
    void on_btn_guardarCerveza_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::RegistroCerveza *ui;
    Grafo *grafoCervezas;
};

#endif // REGISTROCERVEZA_H
