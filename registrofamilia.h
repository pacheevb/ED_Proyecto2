#ifndef REGISTROFAMILIA_H
#define REGISTROFAMILIA_H

#include <QDialog>
#include "Grafo.h"

namespace Ui {
class registroFamilia;
}

class registroFamilia : public QDialog
{
    Q_OBJECT

public:
    explicit registroFamilia(QWidget *parent = 0);
    ~registroFamilia();

    void setGrafo(Grafo *pGrafo);

private slots:
    void on_btn_guardarFam_clicked();

private:
    Ui::registroFamilia *ui;
    Grafo *grafoCervezas;
};

#endif // REGISTROFAMILIA_H
