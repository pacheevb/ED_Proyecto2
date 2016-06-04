#ifndef AGREGARCIUDAD_H
#define AGREGARCIUDAD_H

#include <QDialog>

namespace Ui {
class agregarCiudad;
}

class agregarCiudad : public QDialog
{
    Q_OBJECT

public:
    explicit agregarCiudad(QWidget *parent = 0);
    ~agregarCiudad();

    QString nombre()const;//Obtener el nombre de la ciudad desde la ventana.

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::agregarCiudad *ui;
};

#endif // AGREGARCIUDAD_H
