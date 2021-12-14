#include "transportmarker.h"

TransportMarker::TransportMarker(QWidget* parent) : MarkerWidget(parent) {}

void TransportMarker::move(int pos, QPoint offset, float scale){
    QPoint partStart;
    QPoint vec;
    float coef = 0;
    if (pos < 0){
        partStart = QPoint(73, 12);
        vec = QPoint(509, 408);
        coef = 0;
    } else if (pos >= 0 && pos <= 486){
        partStart = QPoint(73, 12);
        vec = QPoint(377, 308);
        coef = (float)pos / 486;
    } else if (pos >= 487 && pos <=652){
        partStart = QPoint(450, 320);
        vec = QPoint(132, 100);
        coef = (float)(pos - 486) / 165;
    } else if (pos >= 653 && pos <= 719) {
        partStart = QPoint(582, 420);
        vec = QPoint(64, 21);
        coef = (float)(pos - 652) / 67;
    } else if (pos >= 720 && pos <= 1067) {
        partStart = QPoint(646, 441);
        vec = QPoint(217, 272);
        coef = (float)(pos - 719) / 348;
    } else if (pos >= 1068 && pos <= 1082) {
        partStart = QPoint(863, 713);
        vec = QPoint(0, 15);
        coef = (float)(pos - 1067) / 15;
    } else if (pos >= 1083 && pos <= 1175) {
        partStart = QPoint(863, 728);
        vec = QPoint(-23, 90);
        coef = (float)(pos - 1082) / 93;
    } else if (pos >= 1176 && pos <= 1207) {
        partStart = QPoint(840, 818);
        vec = QPoint(0, 32);
        coef = (float)(pos - 1175) / 32;
    } else if (pos >= 1208 && pos <= 1266) {
        partStart = QPoint(840, 850);
        vec = QPoint(28, 52);
        coef = (float)(pos - 1207) / 59;
    } else if (pos > 1266){
        partStart = QPoint(840, 850);
        vec = QPoint(28, 52);
        coef = 1;
    }


    vec *= coef;
    this->startPoint = partStart + vec;
    this->setGeometry(((partStart.x() + vec.x()) * scale) + offset.x(),
                      ((partStart.y() + vec.y()) * scale) + offset.y(),
                      this->geometry().width(),
                      this->geometry().height());

}
