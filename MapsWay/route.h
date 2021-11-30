#ifndef ROUTE_H
#define ROUTE_H

#include "routetaxi.h"
#include "file.h"

#include <QList>
#include <QTimer>
#include <QTime>
#include <QObject>

class Route : public QObject
{
Q_OBJECT

public:
    Route(route routeInf, float scale, QPoint offset, int* stops, QWidget* parent);
    ~Route();

    static const int timerDelay = 1000;
    static const int speed = 97;

private slots:
    void scaleChanged (float scale);
    void offsetChanged (QPoint offset);

private:
    route routeInf;
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
