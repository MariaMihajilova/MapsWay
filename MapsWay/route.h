#ifndef ROUTE_H
#define ROUTE_H

#include "routetaxi.h"
#include "file.h"

#include <QList>
#include <QTimer>
#include <QTime>
#include <QObject>

class Route : public QObject
{
Q_OBJECT

public:
    Route(route routeInf, float scale, QPoint offset, int* stops, QWidget* parent);
    ~Route();

    static const int timerDelay = 1000;                     // затримка перед оновленням відображення маршрута
    static const int speed = 97;                            // умовна швидкість машин

private slots:
    void scaleChanged (float scale);                        // оновлення поточного маштабу інтерфейсу
    void offsetChanged (QPoint offset);                     // оновлення поточного зміщення інтерфейсу

private:
    route routeInf;                                         // інформація про маршрут
    int start;                                              // номер першої зупинки
    int end;                                                // номер останньої зупинки
    RouteTaxi** vehicleList;                                // список покажчиків на машини маршркту
    int* stops;                                             // список координат зупинок
    int stopCount;                                          // кількість зупинок

    QTimer* timer;                                          // таймер оновлення відображення маршрута
    bool visible;                                           // чи відображається зараз маршрут
    float scale;                                            // поточний маштаб інтерфейсу
    QPoint offset;                                          // поточне зміщення інтерфейсу


    void init(QWidget* parent);                             // стартове розміщення транспорту
    int posInit(int timeMin, int timeSec, bool* left);      // розрахунок стартової позиції машини


};

#endif // ROUTE_H
