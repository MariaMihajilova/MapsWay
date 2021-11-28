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

void StopInformation::showTable(QString fileName, QString stopName){

    QStandardItemModel* csvModel = new QStandardItemModel(this);
    csvModel->setColumnCount(5);
    csvModel->setHorizontalHeaderLabels(QStringList() << "Route" << "Type" << "Start time" << "End time" << "Interval min");
    ui->tableView->setModel(csvModel); // вставляємо модель в таблицю

    File file(fileName); // вказуємо шлях до файлу
    file.CsvRead(csvModel);

    ui->label_2->setText(stopName);
}
