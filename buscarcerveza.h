#ifndef BUSCARCERVEZA_H
#define BUSCARCERVEZA_H

#include <QDialog>
#include <QModelIndex>
#include <QAbstractTableModel>
#include <QListWidgetItem>
#include "Grafo.h"
#include "Vertice.h"

namespace Ui {
class buscarCerveza;
}

class buscarCerveza : public QDialog
{
    Q_OBJECT

public:
    explicit buscarCerveza(QWidget *parent = 0);
    ~buscarCerveza();

    void setGrafo(Grafo *pGrafo);

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_btn_buscar_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::buscarCerveza *ui;
    Grafo *grafoCervezas;
};

#endif // BUSCARCERVEZA_H
