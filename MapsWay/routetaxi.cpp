#include "routetaxi.h"

RouteTaxi::RouteTaxi(QWidget* parent, int pos, QPoint offset, float scale, bool left, int firstStop, int lastStop, int* stops) : TransportMarker(parent) {
    connect(parent->parentWidget(), SIGNAL(scaleChanged(float)), this, SLOT(scaleChanged(float)));
    connect(parent->parentWidget(), SIGNAL(offset(QPoint)), this, SLOT(offsetChanged(QPoint)));
    this->move(pos, offset, scale);
    this->setVisible(true);
    this->isLeftSide = left;
    this->pos = pos;
    this->offset = offset;
    this->scale = scale;
    this->reside = 0.0;

    this->firstStop = firstStop;
    this->lastStop = lastStop;
    this->stops = stops;

    this->isOnStop = false;
    this->stopMin = 0;
    this->stopSec = 0;
    this->prewStop = this->findStop();
}

int RouteTaxi::findStop(){
    if (isLeftSide){
        for(int i = firstStop; i <= lastStop; i++){
            if (pos <= stops[i]){
                return i;
            }
        }
    } else {
        for(int i = lastStop; i >= firstStop; i--){
            if (pos >= stops[i]){
                return i;
            }
        }
    }
    return -1;
}

void RouteTaxi::Update(){
    if (!isOnStop){
        double tempf = (float)97/60;
        if (isLeftSide){
            pos -= (int)tempf;
        } else {
            pos += (int)tempf;
        }
        double* temp = 0;
        tempf = modf(tempf,temp);
        reside += tempf;
        if (reside >= 1){
            if (isLeftSide){
                pos -= (int)reside;
            } else {
                pos += (int)reside;
            }
            reside = modf(reside, temp);
        }

        int newStop = findStop();

        if (newStop != prewStop){
            isOnStop = true;
            prewStop = newStop;
            stopMin = QTime::currentTime().minute() + 1;
            stopSec = QTime::currentTime().second();
            if (stopMin >= 60){
                stopMin = 0;
            }
        }

        if (pos > stops[lastStop]){
            pos = stops[lastStop] - (pos - stops[lastStop]);
            isLeftSide = true;
        }
        if (pos <= stops[firstStop]){
            pos = -1 * pos;
            isLeftSide = false;
        }

        this->move(pos, offset, scale);
    }
    else if(stopMin == QTime::currentTime().minute() && stopSec == QTime::currentTime().second()){
        isOnStop = false;
    }
}

void RouteTaxi::scaleChanged (float scale){
    this->scale = scale;
}

void RouteTaxi::offsetChanged (QPoint offset){
    this->offset = offset;
}
