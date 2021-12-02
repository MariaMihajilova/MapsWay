#ifndef STOPMARKER_H
#define STOPMARKER_H

#include "markerwidget.h"
#include "stopinformation.h"

#include <QWidget>
#include <QMouseEvent>

class StopMarker : public MarkerWidget
{
    Q_OBJECT
public:
    StopMarker(QWidget* parent);

signals:
    void clickSignal();

private slots:
    void infClosed();

private:
    void mousePressEvent(QMouseEvent* event);

    bool isOpen;
};

#endif // STOPMARKER_H
