#ifndef TRANSPORTMARKER_H
#define TRANSPORTMARKER_H

#include "markerwidget.h"

#include <QWidget>

class TransportMarker : public MarkerWidget
{
    Q_OBJECT
public:
    TransportMarker(QWidget* parent = nullptr);

protected:
    void move(int value, QPoint offset, float scale);   // розміщення маркера на карті
};

#endif // TRANSPORTMARKER_H
