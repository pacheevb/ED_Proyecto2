#ifndef BUSCARCERVEZA_H
#define BUSCARCERVEZA_H

#include <QDialog>

namespace Ui {
class buscarCerveza;
}

class buscarCerveza : public QDialog
{
    Q_OBJECT

public:
    explicit buscarCerveza(QWidget *parent = 0);
    ~buscarCerveza();

private:
    Ui::buscarCerveza *ui;
};

#endif // BUSCARCERVEZA_H
