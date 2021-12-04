#include "busstopsearch.h"
#include "ui_busstopsearch.h"

BusStopSearch::BusStopSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BusStopSearch)
{
    ui->setupUi(this);

    window6 = new StopInformation(this);

    try {
        File file(":/data/data/txt/Stops_List.txt");
        stopPath = file.TxtRead();
        if (stopPath.empty())
        {
            throw (QString) "4";
        }

        file = File(":/data/data/txt/Stope_Name_List.txt");
        stopName = file.TxtRead();
        if (stopName.empty())
        {
            throw (QString) "4";
        }
    }
    catch(QString ErrorCode)
    {
        Exception Errore (ErrorCode);
        this->deleteLater();
    }
}

BusStopSearch::~BusStopSearch()
{
    delete ui;
}

void BusStopSearch::on_pushButton_clicked()
{
    try{
        window6->show();
        int index = ui->comboBox->currentIndex();
        if (index <= -1)
        {
            throw (QString) "2";
        }

        window6->showTable(stopPath[index], stopName[index]);       // виведення інформації на форму
    }
    catch(QString ErrorCode)
    {
        Exception Errore (ErrorCode);
    }
}

