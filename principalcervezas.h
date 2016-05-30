#ifndef PRINCIPALCERVEZAS_H
#define PRINCIPALCERVEZAS_H

#include <QDialog>

namespace Ui {
class principalCervezas;
}

class principalCervezas : public QDialog
{
    Q_OBJECT

public:
    explicit principalCervezas(QWidget *parent = 0);
    ~principalCervezas();

private:
    Ui::principalCervezas *ui;
};

#endif // PRINCIPALCERVEZAS_H
