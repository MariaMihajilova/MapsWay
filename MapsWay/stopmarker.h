#ifndef STOPMARKER_H
#define STOPMARKER_H

#include "markerwidget.h"
#include "stopinformation.h"

#include <QWidget>
#include <QMouseEvent>

class StopMarker : public MarkerWidget
{
    Q_OBJECT
public:
    StopMarker(QWidget* parent);

signals:
    void clickSignal();                         // сигнал натискання на маркер

private slots:
    void infClosed();                           // зпрацьовує коли вікно з інформацією закривається

private:
    void mousePressEvent(QMouseEvent* event);   // подія натискання кнопки мищі

    bool isOpen;                                // чи відкрита інформація про зупинку
};

#endif // STOPMARKER_H
