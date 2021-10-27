#include "routeconstruction.h"
#include "ui_routeconstruction.h"

RouteConstruction::RouteConstruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RouteConstruction)
{
    ui->setupUi(this);
}

RouteConstruction::~RouteConstruction()
{
    delete ui;
}

void RouteConstruction::on_pushButton_clicked()      // функція побудови маршруту
{

}

