#ifndef CIUDADESAEROLINEA_H
#define CIUDADESAEROLINEA_H

#include <QDialog>

namespace Ui {
class ciudadesAerolinea;
}

class ciudadesAerolinea : public QDialog
{
    Q_OBJECT

public:
    explicit ciudadesAerolinea(QWidget *parent = 0);
    ~ciudadesAerolinea();

private:
    Ui::ciudadesAerolinea *ui;
};

#endif // CIUDADESAEROLINEA_H