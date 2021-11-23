#ifndef ROUTE_H
#define ROUTE_H

#include "routetaxi.h"

#include <QList>
#include <QTimer>
#include <QTime>
#include <QObject>

struct RouteInf{
    int id = 1;
    int startTime = 340;
    int endTime = 10000;
    int delay = 3;
    int vehicleCount = 9;
    int firstStop = 0;
    int endStop = 9;
};

class Route : public QObject
{
Q_OBJECT

public:
    Route(RouteInf routeInf, float scale, QPoint offset, int* stops, QWidget* parent);
    ~Route();

    static const int timerDelay = 1000;
    static const int speed = 97;

private slots:
    void scaleChanged (float scale);
    void offsetChanged (QPoint offset);

private:
    RouteInf routeInf;
    int start;
    int end;
    RouteTaxi** vehicleList;
    int* stops;
    int stopCount;

    QTimer* timer;
    bool visible;
    float scale;
    QPoint offset;


    void init(QWidget* parent);
    int posInit(int timeMin, int timeSec, bool* left);


};

#endif // ROUTE_H
