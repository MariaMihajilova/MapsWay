#ifndef ROUTESEARCH_H
#define ROUTESEARCH_H

#include <QDialog>
#include "routeinformation.h"
namespace Ui {
class RouteSearch;
}

class RouteSearch : public QDialog
{
    Q_OBJECT

public:
    explicit RouteSearch(QWidget *parent = nullptr);
    ~RouteSearch();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RouteSearch *ui;
    RouteInformation *window5;    // вікно iнформація про маршрут

};

#endif // ROUTESEARCH_H
