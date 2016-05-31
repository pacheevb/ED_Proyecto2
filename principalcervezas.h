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

private slots:
    void on_btn_registroFamilia_clicked();

    void on_btn_registroCerveza_clicked();

    void on_btn_buscarCerveza_clicked();

    void on_btn_registroEstilo_clicked();

private:
    Ui::principalCervezas *ui;
};

#endif // PRINCIPALCERVEZAS_H
