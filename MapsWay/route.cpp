#include "route.h"

#include <QtMath>

Route::Route(route routeInf, float scale, QPoint offset, int* stops, QWidget* parent)
{
    this->routeInf = routeInf;
    this->stops = stops;
    this->stopCount = routeInf.firstStop - routeInf.endStop + 1;

    this->scale = scale;
    this->offset = offset;
    start = stops[routeInf.firstStop];

    this->vehicleList = new RouteTaxi*[routeInf.count];
    for (int i = 0; i < routeInf.count; i++){
        vehicleList[i] = nullptr;
    }

    timer = new QTimer;
    timer->start(1000);

    this->init(parent);
}

Route::~Route(){
    delete timer;
    for (int i = 0; i < routeInf.count; i++){
        if (vehicleList[i] != nullptr){
            delete vehicleList[i];
        }
    }
    delete[] vehicleList;
}

int Route::posInit(int timeMin, int timeSec, bool* left){
    int currStop = routeInf.firstStop;
    int dist = timeMin * 97 + (float)97/60 * timeSec;
    int pos = stops[currStop];
    bool temp = true;

    while (temp){
        if (*left){
            if (currStop == routeInf.firstStop){
                *left = false;
            } else {
                if (dist >= stops[currStop] - stops[currStop - 1]){
                    dist -= stops[currStop] - stops[currStop - 1];
                    dist -= 97;
                    currStop -= 1;
                    pos = stops[currStop];
                } else {
                    if (dist > 0)
                        pos -= dist;
                    temp = false;
                }
            }
        } else {
            if (currStop == routeInf.endStop){
                *left = true;
            } else {
                if (dist >= stops[currStop + 1] - stops[currStop] ){
                    dist -= stops[currStop + 1] - stops[currStop];
                    dist -= 97;
                    currStop += 1;
                    pos = stops[currStop];
                } else {
                    if (dist > 0)
                        pos += dist;
                    temp = false;
                }
            }
        }
    }
    return pos;
}

void Route::init(QWidget* parent){
    int globalTimeMinutes = QTime::currentTime().hour() * 60 + QTime::currentTime().minute();
    int globalTimeSeconds = QTime::currentTime().second();

    if (globalTimeMinutes >= routeInf.startTime && globalTimeMinutes < routeInf.endTime){
        for (int i = 0; i < routeInf.count; i++){
            bool left = false;
            int pos = posInit(((globalTimeMinutes - routeInf.startTime) % routeInf.delay) - 1 + routeInf.delay * i,
                             globalTimeSeconds, &left);
            vehicleList[i] = new RouteTaxi(parent, pos, offset, scale, left, routeInf.firstStop, routeInf.endStop, stops);
            connect(timer, SIGNAL(timeout()), vehicleList[i], SLOT(Update()));
        }
    }
}

void Route::scaleChanged (float scale){
    this->scale = scale;
}

void Route::offsetChanged (QPoint offset){
    this->offset = offset;
}
