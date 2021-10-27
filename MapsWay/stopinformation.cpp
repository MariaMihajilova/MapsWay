#include "stopinformation.h"
#include "ui_stopinformation.h"

StopInformation::StopInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StopInformation)
{
    ui->setupUi(this);
}

StopInformation::~StopInformation()
{
    delete ui;
}
