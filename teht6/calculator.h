#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>

namespace Ui {
class calculator;
}

class calculator : public QDialog
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void on_btnN1_clicked();

    void on_btnN2_clicked();

    void on_btnN3_clicked();

    void on_btnN4_clicked();

    void on_btnN5_clicked();

    void on_btnN6_clicked();

    void on_btnN7_clicked();

    void on_btnN8_clicked();

    void on_btnN9_clicked();

    void on_btnN0_clicked();

    void on_btnClear_clicked();

    void on_btnEnter_clicked();

    void on_btnAdd_clicked();

    void on_btnSub_clicked();

    void on_btnMul_clicked();

    void on_btnDiv_clicked();

private:
    Ui::calculator *ui;
    QString number1;
    QString number2;
    float result;
    int state=0;
    short operand=9;

    void numberClickedHandler(int num);
    void addSubMulDivClickHandler(short calc);
    void resetLineEdits();
};

#endif // CALCULATOR_H
