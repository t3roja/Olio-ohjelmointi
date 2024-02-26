#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QProgressBar>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:

    void timeout();

private slots:

    void on_btnSwitchPlayerOne_clicked();

    void on_btnSwitchPlayerTwo_clicked();

    void on_btn120Seconds_clicked();

    void on_btn5Min_clicked();

    void on_btnStartGame_clicked();

    void on_btnStopGame_clicked();


private:

    Ui::MainWindow *ui;
    QTimer *pQTimer;

    void updateProgressBar();
    void setGameInfoText(QString, short);

    short playerOneTime;
    short playerTwoTime;
    short currentPlayer = 0;
    short gameTime;
    short x=0;
};
#endif // MAINWINDOW_H
