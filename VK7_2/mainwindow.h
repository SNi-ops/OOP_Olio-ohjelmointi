#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void SetEditNum(int num);

private slots:
    void on_plusButton_clicked();

    void on_minusButton_clicked();

    void on_timesButton_clicked();

    void on_divideButton_clicked();

    void on_n1Button_clicked();

    void on_n2Button_clicked();

    void on_n3Button_clicked();

    void on_enterButton_clicked();



    void on_clearButton_clicked();

    void on_n4button_clicked();

    void on_n5button_clicked();

    void on_n6button_clicked();

    void on_n7button_clicked();

    void on_n8button_clicked();

    void on_n9button_clicked();

    void on_n0button_clicked();

private:
    Ui::MainWindow *ui;
    int num1;
    int num2;
    int result;

    int tila = 0;
};
#endif // MAINWINDOW_H
