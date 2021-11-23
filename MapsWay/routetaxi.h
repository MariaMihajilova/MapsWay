#ifndef ROUTETAXI_H
#define ROUTETAXI_H

#include "transportmarker.h"

#include <QObject>
#include <QWidget>
#include <QTime>
#include <cmath>

class RouteTaxi : public TransportMarker
{
    Q_OBJECT
public:
    RouteTaxi(QWidget* parent, int pos, QPoint offset, float scale, bool left, int firstStop, int lastStop, int* stpos);

private slots:
    void Update();
    void scaleChanged (float scale);
    void offsetChanged (QPoint offset);

private :
    QPoint offset;
    float scale;
    int pos;
    bool isLeftSide;
    float reside;
    int firstStop;
    int lastStop;
    int* stops;

    int time;
    int prewStop;
    int stopMin;
    int stopSec;
    bool isOnStop;

    int findStop();
};

#endif // ROUTETAXI_H
