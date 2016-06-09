#ifndef PRINCIPALCERVEZAS_H
#define PRINCIPALCERVEZAS_H

#include <QDialog>
#include "Grafo.h"

namespace Ui {
class principalCervezas;
}

class principalCervezas : public QDialog
{
    Q_OBJECT

public:
    explicit principalCervezas(QWidget *parent = 0);
    ~principalCervezas();

    Grafo getGrafo();

private slots:
    void on_btn_registroFamilia_clicked();

    void on_btn_registroCerveza_clicked();

    void on_btn_buscarCerveza_clicked();

    void on_btn_registroEstilo_clicked();

    void on_btn_borrarFamilia_clicked();

    void on_btn_borrarEstilo_clicked();

private:
    Ui::principalCervezas *ui;
    Grafo grafoCervezas;
};

#endif // PRINCIPALCERVEZAS_H
