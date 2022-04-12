#include "license.h"
#include "ui_license.h"

license::license(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::license)
{

}

license::~license()
{
    delete ui;
}


