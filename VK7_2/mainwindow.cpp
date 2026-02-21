#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}



void MainWindow::on_plusButton_clicked(){
    if(tila == 1){
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();

        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();

        qDebug() << num1 << " + " << num2;

        result = num1 + num2;

        QString r = QString::number(result);
        ui->resultEdit->setText(r);

        tila = 0;
    }

}


void MainWindow::on_minusButton_clicked(){
    if(tila == 1){
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();

        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();

        qDebug() << num1 << " - " << num2;

        result = num1 - num2;

        QString r = QString::number(result);
        ui->resultEdit->setText(r);

        tila = 0;
    }

}


void MainWindow::on_timesButton_clicked(){
    if(tila == 1){
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();

        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();

        qDebug() << num1 << " * " << num2;

        result = num1 * num2;

        QString r = QString::number(result);
        ui->resultEdit->setText(r);

        tila = 0;
    }

}


void MainWindow::on_divideButton_clicked(){
    if(tila == 1){
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();

        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();

        qDebug() << num1 << " / " << num2;

        result = num1 / num2;

        QString r = QString::number(result);
        ui->resultEdit->setText(r);

        tila = 0;
    }

}


void MainWindow::on_n1Button_clicked(){
    SetEditNum(1);
}


void MainWindow::on_n2Button_clicked(){
    SetEditNum(2);
}


void MainWindow::on_n3Button_clicked(){
    SetEditNum(3);
}

void MainWindow::on_n4button_clicked(){
    SetEditNum(4);
}

void MainWindow::on_n5button_clicked(){
    SetEditNum(5);
}

void MainWindow::on_n6button_clicked(){
    SetEditNum(6);
}

void MainWindow::on_n7button_clicked(){
    SetEditNum(7);
}

void MainWindow::on_n8button_clicked(){
    SetEditNum(8);
}

void MainWindow::on_n9button_clicked(){
    SetEditNum(9);
}

void MainWindow::on_n0button_clicked(){
    SetEditNum(0);
}

void MainWindow::SetEditNum(int num){
    QString lukunyt;
    if(tila == 0){
        qDebug() << "tila 0 kirjoitetaan num1";

        lukunyt = ui->num1Edit->text();
        lukunyt = lukunyt +  QString::number(num);
        ui->num1Edit->setText(lukunyt);
    }
    else if (tila == 1){
        qDebug() << "tila 1 kirjoitetaan num2";

        lukunyt = ui->num2Edit->text();
        lukunyt = lukunyt +  QString::number(num);
        ui->num2Edit->setText(lukunyt);
    }

}

void MainWindow::on_enterButton_clicked(){
    qDebug() << "Nykyinen tila: " << tila;
    if(tila == 0){
        tila = 1;
    }
    qDebug() << "Uusi tila: " << tila;
}

void MainWindow::on_clearButton_clicked(){
    ui->num1Edit->clear();
    ui->num2Edit->clear();
    ui->resultEdit->clear();
    tila = 0;
}




