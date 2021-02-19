#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <QMouseEvent>




MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground );

}


MainWindow::~MainWindow()
{
    delete ui;

}



void MainWindow::on_pushButton_clicked()
{
    QString Username = ui->lineEdit->text();
    QString Password = ui->lineEdit_2->text();

    if(Username == "12" && Password == "21"){
        hide();
        window = new SecondWindow(this);
        window->show();
    } else {
        ui->label->setText("Invalid Username or Password");
    }



}
