#include "routeinformation.h"
#include "ui_routeinformation.h"

RouteInformation::RouteInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RouteInformation)
{
    ui->setupUi(this);
}

RouteInformation::~RouteInformation()
{
    delete ui;
}
