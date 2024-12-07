#include "mapwidget.h"

MapWidget::MapWidget(QWidget* parent) : QLabel(parent)
{
    // ініцалізація
    this->setGeometry(0, 0, 887, 912);
    startRect = this->geometry();
    // з'єднання сигналів зміни положення та маштабу
    connect(parent->parentWidget(), SIGNAL(scaleChanged(float)), this, SLOT(on_scaleChanged(float)));
    connect(parent->parentWidget(), SIGNAL(moveSignal(QPoint,QRect)), this, SLOT(move(QPoint,QRect)));
}

void MapWidget::on_scaleChanged(float scale){
    // зміна розміру карти
    this->setGeometry(this->geometry().x(),
                      this->geometry().y(),
                      (int)startRect.width() * scale,
                      (int)startRect.height() * scale);
}

void MapWidget::move(QPoint vec, QRect windowRect){
    // переміщення карти на заданий вектор
    // перевірка на вихід за межі карти по горизонталі
    int leftEdge = vec.x() + this->geometry().x();
    int rightEdge = this->geometry().width() + this->geometry().x() + vec.x();
    if((leftEdge < 0) &&
       windowRect.width() < rightEdge) {
        this->setGeometry(leftEdge,
                          this->geometry().y(),
                          this->geometry().width(),
                          this->geometry().height());
    }
    else {
    // якщо вектор виходить за межі встановлюємо максимально доступні координати
        if (leftEdge > 0){
            this->setGeometry(0,
                              this->geometry().y(),
                              this->geometry().width(),
                              this->geometry().height());

        } else if (windowRect.width() >= rightEdge){
            this->setGeometry(windowRect.width() - this->geometry().width(),
                              this->geometry().y(),
                              this->geometry().width(),
                              this->geometry().height());

        }
    }
    // перевірка на вихід за межі карти по вертикалі
    int topEdge = vec.y() + this->geometry().y();
    int botEdge = this->geometry().height() + this->geometry().y() + vec.ry();
    if(topEdge < 0 &&
       windowRect.height() < botEdge){
        this->setGeometry(this->geometry().x(),
                          vec.y() + this->geometry().y(),
                          this->geometry().width(),
                          this->geometry().height());
    }
    else {
        if (topEdge >= 0){
            this->setGeometry(this->geometry().x(),
                              0,
                              this->geometry().width(),
                              this->geometry().height());
        }
        if (windowRect.height() >= botEdge){
            this->setGeometry(this->geometry().x(),
                              windowRect.height() - this->geometry().height(),
                              this->geometry().width(),
                              this->geometry().height());
        }
    }
}
