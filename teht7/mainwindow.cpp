#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();
    ui->labelMain->setText("Select time limit");
    ui->prgBarOne->setValue(0);
    ui->prgBarTwo->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::timeout()
{
    x++;
    if(playerOneTime > 0 && playerTwoTime > 0){
    qDebug()<< x << " Sekuntia kulunut";
    updateProgressBar();
    }
    else if (playerOneTime == 0){
    ui->labelMain->setText("Player 2 won!");
    pQTimer->stop();
    currentPlayer = 0;
    }
    else if (playerTwoTime == 0){
    ui->labelMain->setText("Player 1 won!");
    pQTimer->stop();
    currentPlayer = 0;
    }

}

void MainWindow::on_btnSwitchPlayerOne_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_btnSwitchPlayerTwo_clicked()
{
    currentPlayer = 1;
}



void MainWindow::on_btn120Seconds_clicked()
{
    if (currentPlayer == 0 || currentPlayer == 9){ // jos pelaaja 0 tai 9 eli ei kumpikaan on vuorossa voidaan säätää aikarajaa
        gameTime = 120;
        currentPlayer = 9;
        ui->labelMain->setText("120 second timelimit game");
    }
}


void MainWindow::on_btn5Min_clicked()
{
    if (currentPlayer == 0 || currentPlayer == 9){
        gameTime = 300;
        currentPlayer = 9;
        ui->labelMain->setText("5 minute timelimit game");
    }
}


void MainWindow::on_btnStartGame_clicked()
{
    if(currentPlayer==9){
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    pQTimer->start(1000);

    currentPlayer = 1;

    playerOneTime=gameTime;
    playerTwoTime=gameTime;

    ui->prgBarOne->setRange(0,gameTime);
    ui->prgBarOne->setValue(playerOneTime);

    ui->prgBarTwo->setRange(0,gameTime);
    ui->prgBarTwo->setValue(playerTwoTime);

    ui->labelMain->setText("Game ongoing");
    }
}


void MainWindow::on_btnStopGame_clicked()
{
    pQTimer->stop();
    currentPlayer = 0;

    ui->prgBarOne->setValue(0);
    ui->prgBarTwo->setValue(0);
}

void MainWindow::updateProgressBar()
{

    if (currentPlayer == 1){
    ui->prgBarOne->setValue(playerOneTime -= 1);
    }
    else if (currentPlayer == 2){
    ui->prgBarTwo->setValue(playerTwoTime -= 1);
    }

}

