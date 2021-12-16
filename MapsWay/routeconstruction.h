#ifndef ROUTECONSTRUCTION_H
#define ROUTECONSTRUCTION_H

#include <QDialog>
#include "file.h"

namespace Ui {
class RouteConstruction;
}

class RouteConstruction : public QDialog
{
    Q_OBJECT

public:
    explicit RouteConstruction(QWidget *parent = nullptr);
    ~RouteConstruction();

signals:
    void visibleChanged(bool visible);      // перемикання відображення маршруту
    void newPath(int start, int end);       // побудова нового маршруту

private slots:
    void on_routeConst_clicked();           // кнопка будування маршруту

private:
    Ui::RouteConstruction *ui;

    int* stopDist;                          // список позицій зупинок
    void closeEvent( QCloseEvent * e);      // подія закриття вікна
};

#endif // ROUTECONSTRUCTION_H
