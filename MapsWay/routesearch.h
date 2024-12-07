#ifndef ROUTESEARCH_H
#define ROUTESEARCH_H

#include <QDialog>
#include "routeinformation.h"
#include "file.h"
#include "route.h"

namespace Ui {
class RouteSearch;
}

class RouteSearch : public QDialog
{
    Q_OBJECT

public:
    explicit RouteSearch(QWidget *parent, float scale, QPoint offset, Route* routeCtrl);
    ~RouteSearch();

private slots:
    void on_busShow_clicked();          // кнопка розміщення машин заданого маршруту на карті

    void on_BusInf_clicked();           // кнопка виведення інформації про маршрут

    void scaleChanged(float scale);     // оновлення поточного маштабу
    void offsetChanged(QPoint offset);  // оновлення поточного зміщення

private:
    Ui::RouteSearch *ui;
    RouteInformation *routeInfForm;     // вікно iнформація про маршрут
    QWidget* parent;

    Route* routeCtrl;                   // контроллер міток транспорту на карті

    route* routes;                      // список інформації про всі маршрути
    int* stopDist;                      // список позиції зупинок
    QList<QString> stopNames;           // список назв зупинок

    float scale;                        // поточний маштаб інтерфейсу
    QPoint offset;                      // поточне зміщення інтерфейсу
};

#endif // ROUTESEARCH_H
