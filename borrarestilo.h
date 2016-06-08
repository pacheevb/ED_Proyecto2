#ifndef BORRARESTILO_H
#define BORRARESTILO_H

#include <QDialog>

namespace Ui {
class borrarEstilo;
}

class borrarEstilo : public QDialog
{
    Q_OBJECT

public:
    explicit borrarEstilo(QWidget *parent = 0);
    ~borrarEstilo();

private:
    Ui::borrarEstilo *ui;
};

#endif // BORRARESTILO_H
