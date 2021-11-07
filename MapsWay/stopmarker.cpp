#include "stopmarker.h"

StopMarker::StopMarker(QWidget* parent) : MarkerWidget(parent)
{
    connect(this, SIGNAL(clickSignal()), parent->parentWidget(), SLOT(stopMarker_clicked()));
}

void StopMarker::mousePressEvent(QMouseEvent* event){
    if (event->button() == Qt::LeftButton){
        emit clickSignal();
    }
}
