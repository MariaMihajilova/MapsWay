#include "mapwidget.h"

MapWidget::MapWidget(QWidget* parent) : QLabel(parent)
{
    this->setGeometry(0, 0, 887, 912);
    startRect = this->geometry();
    connect(parent->parentWidget(), SIGNAL(scaleChanged(float)), this, SLOT(on_scaleChanged(float)));
    connect(parent->parentWidget(), SIGNAL(moveSignal(QPoint,QRect)), this, SLOT(move(QPoint,QRect)));
}

void MapWidget::on_scaleChanged(float scale){
    this->setGeometry(this->geometry().x(),
                      this->geometry().y(),
                      (int)startRect.width() * scale,
                      (int)startRect.height() * scale);
}

void MapWidget::move(QPoint vec, QRect windowRect){

    if((vec.rx() + this->geometry().x() < 0) &&
       (windowRect.width() < (this->geometry().width() + this->geometry().x() + vec.rx()))) {
        this->setGeometry(vec.x() + this->geometry().x(),
                          this->geometry().y(),
                          this->geometry().width(),
                          this->geometry().height());
    }
    else {
        if (vec.rx() + this->geometry().x() > 0){
            this->setGeometry(0,
                              this->geometry().y(),
                              this->geometry().width(),
                              this->geometry().height());

        }
        if ((windowRect.width() >= (this->geometry().width() + this->geometry().x() + vec.rx()))){
            this->setGeometry(windowRect.width() - this->geometry().width(),
                              this->geometry().y(),
                              this->geometry().width(),
                              this->geometry().height());

        }

    }
    if((vec.ry() + this->geometry().y() < 0) &&
       (windowRect.height() < (this->geometry().height() + this->geometry().y() + vec.ry()))){
        this->setGeometry(this->geometry().x(),
                          vec.y() + this->geometry().y(),
                          this->geometry().width(),
                          this->geometry().height());
    }
    else {
        if (vec.ry() + this->geometry().y() >= 0){
            this->setGeometry(this->geometry().x(),
                              0,
                              this->geometry().width(),
                              this->geometry().height());
        }
        if (windowRect.height() >= (this->geometry().height() + this->geometry().y() + vec.ry())){
            this->setGeometry(this->geometry().x(),
                              windowRect.height() - this->geometry().height(),
                              this->geometry().width(),
                              this->geometry().height());
        }

    }
}
