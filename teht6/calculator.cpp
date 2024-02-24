#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}

void calculator::numberClickedHandler(int num)
{
    if (state == 9){
        resetLineEdits();
    }
    if (state == 0){
        number1 = QString::number(num);
        ui->num1->setText(number1);
        state = 1;
    }
    else if (state == 1){
        number2 = QString::number(num);
        ui->num2->setText(number2);
        state = 0;
    }
}

void calculator::clearAndEnterClickHandler()
{

}

void calculator::addSubMulDivClickHandler(short calc)
{
    operand = calc; //0 on +, 1 on -, 2 on *, 3 on /
}

void calculator::resetLineEdits()
{
    number1 = "";
    number2 = "";
    ui->num1->setText(number1);
    ui->num2->setText(number2);
    ui->txtResult->setText("");
    state = 0;
}

void calculator::on_btnN1_clicked()
{
    numberClickedHandler(1);
}


void calculator::on_btnN2_clicked()
{
    numberClickedHandler(2);
}


void calculator::on_btnN3_clicked()
{
    numberClickedHandler(3);
}


void calculator::on_btnN4_clicked()
{
    numberClickedHandler(4);
}


void calculator::on_btnN5_clicked()
{
    numberClickedHandler(5);
}


void calculator::on_btnN6_clicked()
{
    numberClickedHandler(6);
}


void calculator::on_btnN7_clicked()
{
    numberClickedHandler(7);
}


void calculator::on_btnN8_clicked()
{
    numberClickedHandler(8);
}


void calculator::on_btnN9_clicked()
{
    numberClickedHandler(9);
}


void calculator::on_btnN0_clicked()
{
    numberClickedHandler(0);
}


void calculator::on_btnClear_clicked()
{
    resetLineEdits();
}


void calculator::on_btnEnter_clicked()
{
    float one = number1.toFloat();
    float two = number2.toFloat();
    switch (operand) {
    case 0:
        result = one + two;
        break;
    case 1:
        result = one - two;
        break;
    case 2:
        result = one * two;
        break;
    case 3:
        result = one / two;
    default:
        clearAndEnterClickHandler();
        break;
    }
    QString output;
    output.setNum(result);
    ui->txtResult->setText(output);
    state = 9;
}


void calculator::on_btnAdd_clicked()
{
    addSubMulDivClickHandler(0);
}


void calculator::on_btnSub_clicked()
{
    addSubMulDivClickHandler(1);
}


void calculator::on_btnMul_clicked()
{
    addSubMulDivClickHandler(2);
}


void calculator::on_btnDiv_clicked()
{
    addSubMulDivClickHandler(3);
}

