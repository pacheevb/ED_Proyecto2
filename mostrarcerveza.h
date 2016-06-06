#ifndef MOSTRARCERVEZA_H
#define MOSTRARCERVEZA_H

#include <QDialog>

namespace Ui {
class mostrarCerveza;
}

class mostrarCerveza : public QDialog
{
    Q_OBJECT

public:
    explicit mostrarCerveza(QWidget *parent = 0);
    ~mostrarCerveza();

private:
    Ui::mostrarCerveza *ui;
};

#endif // MOSTRARCERVEZA_H
