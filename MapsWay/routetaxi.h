#ifndef ROUTETAXI_H
#define ROUTETAXI_H

#include "transportmarker.h"

#include <QObject>
#include <QWidget>
#include <QTime>
#include <cmath>

class RouteTaxi : public TransportMarker
{
    Q_OBJECT
public:
    RouteTaxi(QWidget* parent, int pos, QPoint offset, float scale, bool left, int firstStop, int lastStop, int* stpos);

private slots:
    void Update();      // оновлення положення машини на карті

private :
    int pos;            // позиція відносно початку проспекта
    bool isLeftSide;    // сторона по якій рухається машина
    // якщо відстань яку подолала машина не ціле число,
    // дробна частина зберігається на наступне оновлення
    float reside;
    int firstStop;      // номер першої зупинки
    int lastStop;       // номер останньої зупинки
    int* stops;         // список позиції зупинок

    int prewStop;       // попередня відвідана машиною зупинка
    int stopMin;        // хвилина в яку машина продовжить рух
    int stopSec;        // секунда в яку машина продовжить рух
    bool isOnStop;      // чи знаходиться машина зараз на зупинці

    int findStop();     // пошук попередньої зупинки
};

#endif // ROUTETAXI_H
