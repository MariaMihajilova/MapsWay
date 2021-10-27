#include "trafficrules.h"
#include "ui_trafficrules.h"

TrafficRules::TrafficRules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrafficRules)
{
    ui->setupUi(this);
}

TrafficRules::~TrafficRules()
{
    delete ui;
}
