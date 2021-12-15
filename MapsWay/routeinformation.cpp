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

void RouteInformation::showInf(route inf, QList<QString> stopList){
    ui->label_2->setText(inf.numer);
    ui->label->setText(inf.type);
    QString temp = QString::number(inf.startTime%60);
    if (temp == '0') temp = "00";
    ui->label_7->setText(QString::number(inf.startTime/60) + ':' + temp);
    temp = QString::number(inf.endTime%60);
    if (temp == '0') temp = "00";
    ui->label_9->setText(QString::number(inf.endTime/60) + ':' + temp);
    ui->label_11->setText(QString::number(inf.delay));

    QStandardItemModel* Model = new QStandardItemModel(this);
    Model->setColumnCount(1);
    Model->setHorizontalHeaderLabels(QStringList() << "");
    ui->tableView->setModel(Model);
    int j = 0;
    for (int i = inf.firstStop; i <= inf.endStop; i++, j++){
        QList<QStandardItem*> row;
        row.append(new QStandardItem(stopList[i]));
        Model->appendRow(row);
    }

    ui->tableView->horizontalHeader()->resizeSection(0, 200);
}
