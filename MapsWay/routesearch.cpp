#include "routesearch.h"
#include "ui_routesearch.h"

RouteSearch::RouteSearch(QWidget *parent, float scale, QPoint offset, Route* routeCtrl) :
    QDialog(parent),
    ui(new Ui::RouteSearch)
{
    ui->setupUi(this);

    this->scale = scale;
    this->offset = offset;
    try {
        File file(":/data/data/json/routes.json");
        routes = file.JsonRead();
        if (routes == nullptr)
        {
            throw (QString)"4";
        }

        file = File(":/data/data/txt/Stop_Distance_List.txt");

        QList<QString> temp = file.TxtRead();
        if (temp.length() == 0)
        {
            throw (QString)"4";
        }

        stopDist = new int[temp.length()];
        for (int i = 0; i < temp.length(); i++){
            stopDist[i] = temp[i].toInt();
        }


        file = File(":/data/data/txt/Stope_Name_List.txt");
        stopNames = file.TxtRead();
        if (stopNames.empty())
        {
            throw (QString)"4";
        }

        this->routeCtrl = routeCtrl;
        this->parent = parent;
    }
    catch(QString ErrorCode)
    {
        Exception Errore (ErrorCode);
        this->deleteLater();
    }
}

RouteSearch::~RouteSearch()
{
    delete ui;
}
#include <QDebug>
void RouteSearch::on_pushButton_clicked()       //відкриття вікна Інформація про маршрут
{
    try {
        int index = ui->comboBox->currentIndex();
        if (index <= -1)
        {
            throw (QString) "2";
        }
        qDebug() << routeCtrl;
        if (routeCtrl != nullptr){
            Route *temp = routeCtrl;
            //routeCtrl = nullptr;
            //temp->~Route();
            delete temp;
            //delete routeCtrl;
            qDebug() << temp;
        }

        routeCtrl = new Route(routes[index], scale, offset, stopDist, parent);
    }
    catch(QString ErrorCode)
    {
        Exception Errore (ErrorCode);
    }
}


void RouteSearch::on_pushButton_2_clicked()
{
    try {
        int index = ui->comboBox->currentIndex();
        if (index <= -1)
        {
            throw (QString) "2";
        }
        window5 = new RouteInformation(this);
        window5->show();
        window5->showInf(routes[index], stopNames);
    }
    catch(QString ErrorCode)
    {
        Exception Errore (ErrorCode);
    }
}

