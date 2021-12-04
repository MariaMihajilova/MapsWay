#include "pathbuilder.h"

PathBuilder::PathBuilder(QWidget *parent) : QWidget(parent)
{
    this->setGeometry(0,0,800,600);
    connect(parent->parentWidget(), SIGNAL(scaleChanged(float)), this, SLOT(scaleChanged(float)));
    connect(parent->parentWidget(), SIGNAL(offset(QPoint)), this, SLOT(offsetChanged(QPoint)));
    scale = 1;
    offset = QPoint(0, 0);

    visible = false;
    start = 0; end = 0;
}

void PathBuilder::paintEvent(QPaintEvent *event){

    Q_UNUSED(event);
    if (visible){
        QPainter* painter = new QPainter(this);
        BuildPath(painter, start, end);
        painter->end();
    }
}

QPoint PathBuilder::findCoords(int pos){
    QPoint startPoint;
    QPoint vec;
    float coef = 0;
    if (pos < 0){
        startPoint = QPoint(73, 12);
        vec = QPoint(509, 408);
        coef = 0;
    } else if (pos >= 0 && pos <= 486){
        startPoint = QPoint(73, 12);
        vec = QPoint(377, 308);
        coef = (float)pos / 486;
    } else if (pos >= 487 && pos <=652){
        startPoint = QPoint(450, 320);
        vec = QPoint(132, 100);
        coef = (float)(pos - 486) / 165;
    } else if (pos >= 653 && pos <= 719) {
        startPoint = QPoint(582, 420);
        vec = QPoint(64, 21);
        coef = (float)(pos - 652) / 67;
    } else if (pos >= 720 && pos <= 1067) {
        startPoint = QPoint(646, 441);
        vec = QPoint(217, 272);
        coef = (float)(pos - 719) / 348;
    } else if (pos >= 1068 && pos <= 1082) {
        startPoint = QPoint(863, 713);
        vec = QPoint(0, 15);
        coef = (float)(pos - 1067) / 15;
    } else if (pos >= 1083 && pos <= 1175) {
        startPoint = QPoint(863, 728);
        vec = QPoint(-23, 90);
        coef = (float)(pos - 1082) / 93;
    } else if (pos >= 1176 && pos <= 1207) {
        startPoint = QPoint(840, 818);
        vec = QPoint(0, 32);
        coef = (float)(pos - 1175) / 32;
    } else if (pos >= 1208 && pos <= 1266) {
        startPoint = QPoint(840, 850);
        vec = QPoint(28, 52);
        coef = (float)(pos - 1207) / 59;
    } else if (pos > 1266){
        startPoint = QPoint(840, 850);
        vec = QPoint(28, 52);
        coef = 1;
    }

    vec *= coef;
    return startPoint + vec;
}

int PathBuilder::PartEnd(int pos){
    if (pos <= 486){
        return 486;
    } else if (pos <=651){
        return 651;
    } else if (pos <= 719) {
        return 719;
    } else if (pos <= 1067) {
        return 1067;
    } else if (pos <= 1082) {
        return 1082;
    } else if (pos <= 1175) {
        return 1175;
    } else if (pos <= 1207) {
        return 1207;
    } else if (pos > 1207) {
        return 1266;
    }
    return 0;
}

void PathBuilder::BuildPath(QPainter* painter, int start, int end){
    QPen pen(Qt::blue, 5 * scale, Qt::SolidLine);
    painter->setPen(pen);
    QPoint startPoint;

    while (start < end){
        if (end <= PartEnd(start)){
            startPoint = findCoords(start);
            painter->drawLine((startPoint * scale) + offset, (findCoords(end)* scale) + offset);
            return;
        } else{
            int temp = PartEnd(start);
            startPoint = findCoords(start);
            start = temp + 1;
            painter->drawLine((startPoint * scale) + offset, (findCoords(temp) * scale) + offset);
        }
    }
}

void PathBuilder::scaleChanged (float scale){
    this->scale = scale;
}

void PathBuilder::offsetChanged (QPoint offset){
    this->offset = offset;
}

void PathBuilder::visibleChanged(bool visible){
    this->visible = visible;
    if (!visible){
        this->start = 0;
        this->end = 0;
    }

    this->repaint();
}

void PathBuilder::newPath(int start, int end){
    this->start = start;
    this->end = end;
    this->repaint();
}
