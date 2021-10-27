#include "routesearch.h"
#include "ui_routesearch.h"

RouteSearch::RouteSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RouteSearch)
{
    ui->setupUi(this);
}

RouteSearch::~RouteSearch()
{
    delete ui;
}

void RouteSearch::on_pushButton_clicked()       //відкриття вікна Інформація про маршрут

{
    window5 = new RouteInformation(this);
    window5->show();
}

