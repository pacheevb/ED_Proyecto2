#ifndef REGISTROESTILO_H
#define REGISTROESTILO_H

#include <QDialog>
#include "Grafo.h"

namespace Ui {
class registroEstilo;
}

class registroEstilo : public QDialog
{
    Q_OBJECT

public:
    explicit registroEstilo(QWidget *parent = 0);
    ~registroEstilo();

    void setGrafo(Grafo *pGrafo);

private slots:
    void on_btn_guardarEstilo_clicked();

private:
    Ui::registroEstilo *ui;
    Grafo *grafoCervezas;
};

#endif // REGISTROESTILO_H
