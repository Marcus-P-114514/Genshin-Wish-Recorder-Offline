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
    ui->frame->setTabVisible(3,false);
    ui->frame->setTabVisible(4,false);
    ui->frame->setTabVisible(5,false);
    ui->frame->setTabVisible(6,false);
    ui->frame->setTabVisible(7,false);

    //Set Index
    ui->frame->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}




//Back & Next buttons
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


void MainWindow::on_previous_page_from_page_three_button_clicked()
{
    ui->frame->setCurrentIndex(1);
}


void MainWindow::on_next_page_from_page_three_button_clicked()
{
    ui->frame->setCurrentIndex(3);
}


void MainWindow::on_previous_page_from_page_four_button_clicked()
{
    ui->frame->setCurrentIndex(2);
}


void MainWindow::on_next_page_from_page_four_button_clicked()
{
    ui->frame->setCurrentIndex(4);
}


void MainWindow::on_previous_page_from_page_five_button_clicked()
{
    ui->frame->setCurrentIndex(3);
}


void MainWindow::on_next_page_from_page_five_button_clicked()
{
    ui->frame->setCurrentIndex(5);
}


void MainWindow::on_previous_page_from_page_six_button_clicked()
{
    ui->frame->setCurrentIndex(4);
}


void MainWindow::on_next_page_from_page_six_button_clicked()
{

}

