#ifndef STOPMARKER_H
#define STOPMARKER_H

#include "markerwidget.h"

#include <QWidget>
#include <QMouseEvent>

class StopMarker : public MarkerWidget
{
    Q_OBJECT
public:
    StopMarker(QWidget* parent);

signals:
    void clickSignal();

private:
    void mousePressEvent(QMouseEvent* event);
};

#endif // STOPMARKER_H
