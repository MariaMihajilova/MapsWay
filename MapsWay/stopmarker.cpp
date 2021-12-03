#include "stopmarker.h"

StopMarker::StopMarker(QWidget* parent) : MarkerWidget(parent)
{
    this->isOpen = false;

}

void StopMarker::mousePressEvent(QMouseEvent* event){

     if (event->button() == Qt::LeftButton){
        if (!isOpen){
            File file(":/data/data/txt/Stops_List.txt");
            QString path = file.TxtRead()[this->property("id").toInt()];
            file = File(":/data/data/txt/Stope_Name_List.txt");
            QString name = file.TxtRead()[this->property("id").toInt()];


            StopInformation* infForm = new StopInformation();

            connect(infForm, SIGNAL(closed()), this, SLOT(infClosed()));
            infForm->show();
            infForm->showTable(path, name);
            isOpen = true;
        }
    }
}

void StopMarker::infClosed(){
    isOpen = false;
}
