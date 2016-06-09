#ifndef BORRARESTILO_H
#define BORRARESTILO_H

#include <QDialog>
#include <QMessageBox>
#include "Grafo.h"
#include "Vertice.h"

namespace Ui {
class borrarEstilo;
}

class borrarEstilo : public QDialog
{
    Q_OBJECT

public:
    explicit borrarEstilo(Grafo *pGrafo, QWidget *parent = 0);
    ~borrarEstilo();

private slots:
    void on_btn_borrarEstilo_clicked();

    void on_familia_currentIndexChanged(int index);

private:
    Ui::borrarEstilo *ui;
    Grafo *grafoCervezas;
};

#endif // BORRARESTILO_H
