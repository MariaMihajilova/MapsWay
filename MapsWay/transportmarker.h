#ifndef TRANSPORTMARKER_H
#define TRANSPORTMARKER_H

#include "markerwidget.h"
#include "mapwidget.h"

#include <QWidget>

class TransportMarker : public MarkerWidget
{
    Q_OBJECT
public:
    TransportMarker(QWidget* parent = nullptr);

protected:
    void move(int value, QPoint offset, float scale);
};

#endif // TRANSPORTMARKER_H
