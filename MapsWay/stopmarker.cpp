#include "stopmarker.h"

StopMarker::StopMarker(QWidget* parent) : MarkerWidget(parent)
{
    this->isOpen = false;

}

void StopMarker::mousePressEvent(QMouseEvent* event){
    if (event->button() == Qt::LeftButton){
        try {
            if (isOpen)
            {
                throw (QString) "6";
            }
            QList<QString> temp;
            File file(":/data/data/txt/Stops_List.txt");
            temp = file.TxtRead();
            if (temp.empty())
            {
                throw (QString) "4";
            }
            if (this->property("id").toInt() + 1 > temp.size())
            {
                throw (QString) "3";
            }
            QString path = temp[this->property("id").toInt()];

            file = File(":/data/data/txt/Stope_Name_List.txt");
            temp = file.TxtRead();
            if (temp.empty())
            {
                throw (QString) "4";
            }
            if (this->property("id").toInt() + 1 > temp.size())
            {
                throw (QString) "3";
            }
            QString name = temp[this->property("id").toInt()];


            StopInformation* infForm = new StopInformation();

            connect(infForm, SIGNAL(closed()), this, SLOT(infClosed()));
            infForm->show();
            infForm->showTable(path, name);
            isOpen = true;
        }
        catch(QString ErrorCode)
        {
            Exception Errore (ErrorCode);
        }
    }
}

void StopMarker::infClosed(){
    isOpen = false;
}
