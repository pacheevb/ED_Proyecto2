#ifndef RESULTADORUTA_H
#define RESULTADORUTA_H

#include <QDialog>

namespace Ui {
class resultadoRuta;
}

class resultadoRuta : public QDialog
{
    Q_OBJECT

public:
    explicit resultadoRuta(QWidget *parent = 0);
    ~resultadoRuta();

private:
    Ui::resultadoRuta *ui;
};

#endif // RESULTADORUTA_H
