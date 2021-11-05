#include "mapwidget.h"

#include <QDebug>

MapWidget::MapWidget(QWidget* parent) : QLabel(parent)
{
    this->setGeometry(0, 0, 887, 912);
    startRect = this->geometry();
}

void MapWidget::on_scaleChanged(float scale){
    // Зміна розміру відносно початкового
    this->setGeometry(this->geometry().x(),
                      this->geometry().y(),
                      (int)startRect.width() * scale,
                      (int)startRect.height() * scale);
}

void MapWidget::move(QPoint vec, QRect windowRect){

    // Обмеження руху карти по горизонталі
    if((vec.rx() + this->geometry().x() < 0) &&
       (windowRect.width() <= (this->geometry().width() + this->geometry().x() + vec.rx()))) {
        // Зміна Х координати
        this->setGeometry(vec.x() + this->geometry().x(),
                          this->geometry().y(),
                          this->geometry().width(),
                          this->geometry().height());
    }
    // Обмеження руху карти по вертикалі
    if((vec.ry() + this->geometry().y() < 0) &&
       (windowRect.height() <= (this->geometry().height() + this->geometry().y() + vec.ry()))){
        // Зміна Y координати
        this->setGeometry(this->geometry().x(),
                          vec.y() + this->geometry().y(),
                          this->geometry().width(),
                          this->geometry().height());
    }
}
