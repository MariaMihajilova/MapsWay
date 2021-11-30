#include "markerwidget.h"

#include <QDebug>

MarkerWidget::MarkerWidget(QWidget* parent) : QLabel(parent)
{
    connect(parent->parentWidget(), SIGNAL(scaleChanged(float)), this, SLOT(on_scaleChanged(float)));
    connect(parent->parentWidget(), SIGNAL(moveSignal(QPoint)), this, SLOT(move(QPoint)));
    connect(parent->parentWidget(), SIGNAL(initialization()), this, SLOT(init()));
    scale = 1;
    offset = QPoint(0, 0);
}

void MarkerWidget::on_scaleChanged(float scale){
    this->scale = scale;
    this->setGeometry((int)(this->startPoint.x() * scale),
                      (int)(this->startPoint.y() * scale),
                      this->geometry().width(),
                      this->geometry().height());
}

void MarkerWidget::move(QPoint vec){
    this->setGeometry(this->geometry().x() + vec.x(),
                      this->geometry().y() + vec.y(),
                      this->geometry().width(),
                      this->geometry().height());
}

void MarkerWidget::init(){
    startPoint = QPoint(this->geometry().x(), this->geometry().y());
}
