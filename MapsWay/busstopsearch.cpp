#include "busstopsearch.h"
#include "ui_busstopsearch.h"

BusStopSearch::BusStopSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BusStopSearch)
{
    ui->setupUi(this);
}

BusStopSearch::~BusStopSearch()
{
    delete ui;
}

void BusStopSearch::on_pushButton_clicked()
{
    window6 = new StopInformation(this);
    window6->show();
}

