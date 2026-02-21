#include "mainwindow.h"
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

void MainWindow::on_countButton_clicked()
{
    QString luku = ui->countEdit->text();
    qDebug() << "Nykyinen luku " << luku;
    // muutetaan merkkijono kokonailuvuksi
    int num = luku.toInt();
    qDebug() << "Nykyinen luku kokomaislukuna " << num;
    // lisataan luku
    num +=1;
    qDebug() << "Uusi luku kokomaislukuna " << num;
    // kirjataan luku
    QString txt = QString::number(num);
    ui->countEdit->setText(txt);

}


void MainWindow::on_resetButton_clicked()
{
    QString txt = "0";
    ui->countEdit->setText(txt);
}

