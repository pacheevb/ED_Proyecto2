#ifndef FLOYD_H
#define FLOYD_H

#include <QDialog>

namespace Ui {
class floyd;
}

class floyd : public QDialog
{
    Q_OBJECT

public:
    explicit floyd(QWidget *parent = 0);
    ~floyd();

private:
    Ui::floyd *ui;
};

#endif // FLOYD_H
