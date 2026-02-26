#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();




private slots:


    void on_startButton_clicked();

    void on_stopButton_clicked();

    void on_swichWhite_clicked();

    void on_swichBlack_clicked();

    void updateProgressBar();

    void timeout();

    void on_timeButton2_clicked();

    void on_timeButton5_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *whiteTimer;
    QTimer *blackTimer;

    bool currentPlayer = false;
    short whiteTime = 0;
    short blackTime = 0;
    short gameTime = 0;

};
#endif // MAINWINDOW_H
