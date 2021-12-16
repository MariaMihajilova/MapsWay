#include "routeconstruction.h"
#include "ui_routeconstruction.h"

RouteConstruction::RouteConstruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RouteConstruction)
{
    ui->setupUi(this);
    try {
        File file(":/data/data/txt/Stop_Distance_List.txt");

        QList<QString> temp = file.TxtRead();
        if (temp.size() == 0)
        {
            throw (QString) "5";
        }

        stopDist = new int[temp.length()];
        for (int i = 0; i < temp.length(); i++){
            stopDist[i] = temp[i].toInt();
        }
    }
    catch(QString ErrorCode)
    {
        Exception Errore (ErrorCode);
        this->deleteLater();
    }
}

RouteConstruction::~RouteConstruction()
{
    delete ui;
}

void RouteConstruction::closeEvent ( QCloseEvent * e){
    Q_UNUSED(e);
    emit visibleChanged(false);
}

void RouteConstruction::on_routeConst_clicked()      // функція побудови маршруту
{
    try {
        int start = ui->comboBox->currentIndex();
        int end = ui->comboBox_2->currentIndex();
        if ((start <= -1) || (end <= -1))
        {
            throw (QString) "2";
        }

        if ((stopDist[start] < 1) || (stopDist[start] > 1266) ||
            (stopDist[end] < 1) || (stopDist[end] > 1266))
        {
            throw (QString) "3";
        }

        if (start >= end){
            emit visibleChanged(true);
            emit newPath(stopDist[end], stopDist[start]);
        } else {
            emit visibleChanged(true);
            emit newPath(stopDist[start], stopDist[end]);
        }
    }
    catch(QString ErrorCode)
    {
        Exception Errore (ErrorCode);
    }
}

