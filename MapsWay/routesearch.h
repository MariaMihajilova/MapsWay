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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void scaleChanged(float scale);
    void offsetChanged(QPoint offset);

private:
    Ui::RouteSearch *ui;
    RouteInformation *window5;    // вікно iнформація про маршрут
    QWidget* parent;

    Route* routeCtrl;

    route* routes;
    int* stopDist;
    QList<QString> stopNames;

    float scale;
    QPoint offset;
};

#endif // ROUTESEARCH_H
