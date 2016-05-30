#ifndef REGISTROFAMILIA_H
#define REGISTROFAMILIA_H

#include <QDialog>

namespace Ui {
class registroFamilia;
}

class registroFamilia : public QDialog
{
    Q_OBJECT

public:
    explicit registroFamilia(QWidget *parent = 0);
    ~registroFamilia();

private:
    Ui::registroFamilia *ui;
};

#endif // REGISTROFAMILIA_H
