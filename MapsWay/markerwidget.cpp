#include "markerwidget.h"

#include <QDebug>

MarkerWidget::MarkerWidget(QWidget* parent) : QLabel(parent)
{
    connect(parent->parentWidget(), SIGNAL(scaleChanged(float)), this, SLOT(on_scaleChanged(float)));
    connect(parent->parentWidget(), SIGNAL(moveSignal(QPoint)), this, SLOT(move(QPoint)));
    startPoint = QPoint(-1, -1);
    scale = 1;
}

void MarkerWidget::on_scaleChanged(float scale){

    if (this->scale == 1 && startPoint == QPoint(-1, -1)) {
        startPoint = QPoint(this->geometry().x(), this->geometry().y());
    }
    this->setGeometry((int)startPoint.x() * scale,
                      (int)startPoint.y() * scale,
                      this->geometry().width(),
                      this->geometry().height());
}

void MarkerWidget::move(QPoint vec){
    if (scale == 1 && startPoint == QPoint(-1, -1)) {
        startPoint = QPoint(this->geometry().x(), this->geometry().y());
    }
    this->setGeometry(this->geometry().x() + vec.x(),
                      this->geometry().y() + vec.y(),
                      this->geometry().width(),
                      this->geometry().height());
}
