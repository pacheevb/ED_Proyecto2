#ifndef REGISTROESTILO_H
#define REGISTROESTILO_H

#include <QDialog>

namespace Ui {
class registroEstilo;
}

class registroEstilo : public QDialog
{
    Q_OBJECT

public:
    explicit registroEstilo(QWidget *parent = 0);
    ~registroEstilo();

private:
    Ui::registroEstilo *ui;
};

#endif // REGISTROESTILO_H
