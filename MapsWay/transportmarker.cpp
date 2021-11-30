#include "transportmarker.h"

TransportMarker::TransportMarker(QWidget* parent) : MarkerWidget(parent) {}

void TransportMarker::move(int value, QPoint offset, float scale){
    QPoint startPoint;
    QPoint vec;
    float coef = 0;
    if (value < 0){
        startPoint = QPoint(73, 12);
        vec = QPoint(509, 408);
        coef = 0;
    } else if (value >= 0 && value <= 652){
        startPoint = QPoint(73, 12);
        vec = QPoint(509, 408);
        coef = (float)value / 652;
    } else if (value >= 653 && value <= 719) {
        startPoint = QPoint(582, 420);
        vec = QPoint(64, 21);
        coef = (float)(value - 652) / 67;
    } else if (value >= 720 && value <= 1067) {
        startPoint = QPoint(646, 441);
        vec = QPoint(217, 272);
        coef = (float)(value - 719) / 348;
    } else if (value >= 1068 && value <= 1082) {
        startPoint = QPoint(863, 713);
        vec = QPoint(0, 15);
        coef = (float)(value - 1067) / 15;
    } else if (value >= 1083 && value <= 1175) {
        startPoint = QPoint(863, 728);
        vec = QPoint(-23, 90);
        coef = (float)(value - 1082) / 93;
    } else if (value >= 1176 && value <= 1207) {
        startPoint = QPoint(840, 818);
        vec = QPoint(0, 32);
        coef = (float)(value - 1175) / 32;
    } else if (value >= 1208 && value <= 1266) {
        startPoint = QPoint(840, 850);
        vec = QPoint(28, 52);
        coef = (float)(value - 1207) / 59;
    } else if (value > 1266){
        startPoint = QPoint(840, 850);
        vec = QPoint(28, 52);
        coef = 1;
    }

    vec *= coef;
    this->startPoint = QPoint(startPoint.x() + vec.x(), startPoint.y() + vec.y());
    this->setGeometry(((startPoint.x() + vec.x()) * scale) + offset.x(),
                      ((startPoint.y() + vec.y()) * scale) + offset.y(),
                      this->geometry().width(),
                      this->geometry().height());

}
