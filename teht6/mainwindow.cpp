#include "mainwindow.h"
#include "calculator.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCount_clicked()
{
    qDebug()<<"Count button pressed";
    x++;
    QString s = QString::number(x);
    ui->txtCount->setText(s);
}


void MainWindow::on_btnReset_clicked()
{
    qDebug()<<"Reset button pressed";
    x=0;
    QString s = QString::number(x);
    ui->txtCount->setText(s);

}


void MainWindow::on_btnCalc_clicked()
{
    qDebug()<<"Open calculator button pressed";
    calculator *objectCalculator = new calculator(this);
    objectCalculator->show();
}

