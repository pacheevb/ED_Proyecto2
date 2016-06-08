#ifndef BORRARFAMILIA_H
#define BORRARFAMILIA_H

#include <QDialog>

namespace Ui {
class borrarFamilia;
}

class borrarFamilia : public QDialog
{
    Q_OBJECT

public:
    explicit borrarFamilia(QWidget *parent = 0);
    ~borrarFamilia();

private:
    Ui::borrarFamilia *ui;
};

#endif // BORRARFAMILIA_H
