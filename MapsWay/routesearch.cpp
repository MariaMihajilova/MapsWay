#include "routesearch.h"
#include "ui_routesearch.h"

RouteSearch::RouteSearch(QWidget *parent, float scale, QPoint offset, Route* routeCtrl) :
    QDialog(parent),
    ui(new Ui::RouteSearch)
{
    ui->setupUi(this);

    this->scale = scale;
    this->offset = offset;

    File file(":/data/data/json/routes.json");
    routes = file.JsonRead();
    file = File(":/data/data/txt/Stop_Distance_List.txt");

    QList<QString> temp = file.TxtRead();
    stopDist = new int[temp.length()];
    for (int i = 0; i < temp.length(); i++){
        stopDist[i] = temp[i].toInt();
    }

    file = File(":/data/data/txt/Stope_Name_List.txt");
    stopNames = file.TxtRead();

    this->routeCtrl = routeCtrl;
    this->parent = parent;
}

RouteSearch::~RouteSearch()
{
    delete ui;
}
#include <QDebug>
void RouteSearch::on_pushButton_clicked()       //відкриття вікна Інформація про маршрут

{
    int index = ui->comboBox->currentIndex();

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


void RouteSearch::on_pushButton_2_clicked()
{
    int index = ui->comboBox->currentIndex();
    window5 = new RouteInformation(this);
    window5->show();
    window5->showInf(routes[index], stopNames);
}

