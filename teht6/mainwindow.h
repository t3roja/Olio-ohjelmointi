#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnCount_clicked();
    void on_btnReset_clicked();

    void on_btnCalc_clicked();

private:
    int x=0;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
