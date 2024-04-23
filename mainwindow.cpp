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



void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("hello\n Pls enter your name ");
    //ui->label1->setText("hello\n Pls enter your name ");
    QString Player_Name = ui->lineEdit_PlayerName->text();
}


