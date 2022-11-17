#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "letter.h"
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
    ui->widget->check=1;
    ui->widget->updateGL();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->widget->check=2;
     ui->widget->updateGL();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->widget->check=3;
     ui->widget->updateGL();
}

void MainWindow::on_pushButton_4_clicked()
{
    QString str;
    str = ui->lineEdit->text();
    ui->widget->x_scale=str.toFloat();
    str = ui->lineEdit_2->text();
    ui->widget->y_scale=str.toFloat();
    str = ui->lineEdit_3->text();
    ui->widget->z_scale=str.toFloat();
    ui->widget->check=4;
    ui->widget->updateGL();
}

void MainWindow::on_pushButton_5_clicked()
{
    QString str;
    str = ui->lineEdit_4->text();
    ui->widget->x_transfer=str.toFloat();
    str = ui->lineEdit_5->text();
    ui->widget->y_transfer=str.toFloat();
    str = ui->lineEdit_6->text();
    ui->widget->z_transfer=str.toFloat();
    ui->widget->check=5;
    ui->widget->updateGL();
}

void MainWindow::on_pushButton_6_clicked()
{
    QString str;
    str = ui->lineEdit_7->text();
    ui->widget->check=6;
    ui->widget->angle=str.toFloat();
     ui->widget->updateGL();
}

void MainWindow::on_pushButton_7_clicked()
{
    QString str;
    str = ui->lineEdit_8->text();
    ui->widget->check=7;
    ui->widget->angle=str.toFloat();
     ui->widget->updateGL();
}

void MainWindow::on_pushButton_8_clicked()
{
    QString str;
    str = ui->lineEdit_9->text();
    ui->widget->check=8;
    ui->widget->angle=str.toFloat();
    ui->widget->updateGL();
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->widget->check=9;
    ui->widget->updateGL();
}

void MainWindow::on_pushButton_10_clicked()
{

    ui->widget->colour=QColorDialog::getColor(Qt::black, this );;
}
