#include "busstopsearch.h"
#include "ui_busstopsearch.h"

BusStopSearch::BusStopSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BusStopSearch)
{
    ui->setupUi(this);
    // проверка считывания данных
    File file(":/data/data/txt/Stops_List.txt");
    stopPath = file.TxtRead();

    file = File(":/data/data/txt/Stope_Name_List.txt");
    stopName = file.TxtRead();
}

BusStopSearch::~BusStopSearch()
{
    delete ui;
}

void BusStopSearch::on_pushButton_clicked()
{
    window6 = new StopInformation(this);
    window6->show();
    // ид не должен быть -1
    // индекс меньше длины stopNames
    int index = ui->comboBox->currentIndex();

    window6->showTable(stopPath[index], stopName[index]);       // виведення інформації на форму
}

