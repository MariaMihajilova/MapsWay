#include "markerwidget.h"

MarkerWidget::MarkerWidget(QWidget* parent) : QLabel(parent)
{
    // з'єднання сигналу зміни маштабу
    connect(parent->parentWidget(), SIGNAL(scaleChanged(float)), this, SLOT(on_scaleChanged(float)));
    // з'єднання сигналу оновлення зсуву
    connect(parent->parentWidget(), SIGNAL(offset(QPoint)), this, SLOT(offsetChanged(QPoint)));
    // з'єднання сигналу переміщення
    connect(parent->parentWidget(), SIGNAL(moveSignal(QPoint)), this, SLOT(move(QPoint)));
    // з'єднання сигналу ініціалізації
    connect(parent->parentWidget(), SIGNAL(initialization()), this, SLOT(init()));
    scale = 1;
    offset = QPoint(0, 0);
}

// зміна маштабу
void MarkerWidget::on_scaleChanged(float scale){
    // оновлення поточного маштабу
    this->scale = scale;
    this->setGeometry((int)(this->startPoint.x() * scale),
                      (int)(this->startPoint.y() * scale),
                      this->geometry().width(),
                      this->geometry().height());
}

// зміна положення
void MarkerWidget::move(QPoint vec){
    this->setGeometry(this->geometry().x() + vec.x(),
                      this->geometry().y() + vec.y(),
                      this->geometry().width(),
                      this->geometry().height());
}

// ініціалізація стартового положення
void MarkerWidget::init(){
    startPoint = QPoint(this->geometry().x(), this->geometry().y());
}

// оновлення поточного зсуву
void MarkerWidget::offsetChanged(QPoint offset){
    this->offset = offset;
}
