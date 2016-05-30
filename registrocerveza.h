#ifndef REGISTROCERVEZA_H
#define REGISTROCERVEZA_H

#include <QDialog>

namespace Ui {
class RegistroCerveza;
}

class RegistroCerveza : public QDialog
{
    Q_OBJECT

public:
    explicit RegistroCerveza(QWidget *parent = 0);
    ~RegistroCerveza();

private:
    Ui::RegistroCerveza *ui;
};

#endif // REGISTROCERVEZA_H
