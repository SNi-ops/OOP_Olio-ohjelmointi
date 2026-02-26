#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->infoLabel->setText("Select time!");

    ui->progressBarBlack->setRange(0,100);
    ui->progressBarWhite->setRange(0,100);

    ui->progressBarWhite->setValue(100);
    ui->progressBarBlack->setValue(100);

    whiteTimer = new QTimer(this);
    whiteTimer->setInterval(1000);

    connect(whiteTimer, &QTimer::timeout,this, &MainWindow::timeout);


    blackTimer = new QTimer(this);
    blackTimer->setInterval(1000);

    connect(blackTimer, &QTimer::timeout,this, &MainWindow::timeout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_timeButton2_clicked()
{
    gameTime = 120;
    whiteTime=gameTime;
    blackTime=gameTime;
    ui->infoLabel->setText("Game time selected: 2 min.");
    ui->startButton->setEnabled(true);
}


void MainWindow::on_timeButton5_clicked()
{
    gameTime = 300;
    whiteTime=gameTime;
    blackTime=gameTime;
    ui->infoLabel->setText("Game time selected: 5 min.");
    ui->startButton->setEnabled(true);
}


void MainWindow::on_startButton_clicked()
{
    whiteTimer->start();
    currentPlayer = true;
    ui->infoLabel->setText("Game ongoing! White player turn!");
}


void MainWindow::on_stopButton_clicked()
{
    whiteTimer->stop();
    blackTimer ->stop();
    ui->infoLabel->setText("Game stopped! Select new time!");

    ui->startButton->setEnabled(false);
}

void MainWindow::on_swichWhite_clicked()
{
    whiteTimer->stop();
    currentPlayer = false;
    blackTimer->start();
    qDebug()<< "White switch";
    ui->infoLabel->setText("Black player turn!");
}


void MainWindow::on_swichBlack_clicked()
{
    blackTimer->stop();
    currentPlayer = true;
    whiteTimer->start();
    qDebug()<< "Black switch";
    ui->infoLabel->setText("White player turn!");

}

void MainWindow::timeout()
{
    if(currentPlayer){
        whiteTime--;
        qDebug()<< "White time: " << whiteTime;
    }
    else if(!currentPlayer){
        blackTime--;
        qDebug()<< "Blacks time: " << blackTime;
    }

    updateProgressBar();

    if(whiteTime <= 0){
        ui->infoLabel->setText("Black player WON!");

        blackTimer->stop();
        whiteTimer->stop();


        ui->startButton->setEnabled(false);
        ui->timeButton2->setEnabled(true);
        ui->timeButton5->setEnabled(true);

        return;
    }
    if(blackTime <= 0){
        ui->infoLabel->setText("White player WON!");

        blackTimer->stop();
        whiteTimer->stop();


        ui->startButton->setEnabled(false);
        ui->timeButton2->setEnabled(true);
        ui->timeButton5->setEnabled(true);
        return;
    }
}

void MainWindow::updateProgressBar()
{
    int whiteGameTime = (whiteTime * 100) / gameTime;
    int blackGameTime = (blackTime * 100) / gameTime;

    ui->progressBarWhite->setValue(whiteGameTime);
    ui->progressBarBlack->setValue(blackGameTime);
}









