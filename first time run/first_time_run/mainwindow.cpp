#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Hide tabs
    ui->frame->setTabVisible(0,false);
    ui->frame->setTabVisible(1,false);
    ui->frame->setTabVisible(2,false);

    //Set Index
    ui->frame->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_next_page_from_page_one_button_clicked()
{
    ui->frame->setCurrentIndex(1);
}


void MainWindow::on_next_page_from_page_two_button_clicked()
{
    ui->frame->setCurrentIndex(2);
}


void MainWindow::on_previous_page_from_page_two_button_clicked()
{
    ui->frame->setCurrentIndex(0);
}

