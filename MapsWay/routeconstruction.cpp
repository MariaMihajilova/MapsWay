#include "routeconstruction.h"
#include "ui_routeconstruction.h"

RouteConstruction::RouteConstruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RouteConstruction)
{
    ui->setupUi(this);
    File file(":/data/data/txt/Stop_Distance_List.txt");

    QList<QString> temp = file.TxtRead();
    stopDist = new int[temp.length()];
    for (int i = 0; i < temp.length(); i++){
        stopDist[i] = temp[i].toInt();
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

void RouteConstruction::on_pushButton_clicked()      // функція побудови маршруту
{
    int start = ui->comboBox->currentIndex();
    int end = ui->comboBox_2->currentIndex();

    if (start >= end){
        emit visibleChanged(true);
        emit newPath(stopDist[end], stopDist[start]);
    } else {
        emit visibleChanged(true);
        emit newPath(stopDist[start], stopDist[end]);
    }
}

