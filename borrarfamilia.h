#ifndef BORRARFAMILIA_H
#define BORRARFAMILIA_H

#include <QDialog>
#include "Grafo.h"
#include "Vertice.h"|

namespace Ui {
class borrarFamilia;
}

class borrarFamilia : public QDialog
{
    Q_OBJECT

public:
    explicit borrarFamilia(Grafo *pGrafo, QWidget *parent = 0);
    ~borrarFamilia();

private slots:
    void on_btn_borrarFamilia_clicked();

private:
    Ui::borrarFamilia *ui;
    Grafo *grafoCervezas;
};

#endif // BORRARFAMILIA_H
