#ifndef MAPWIDGET_H
#define MAPWIDGET_H

//#include "mainwindow.h"

#include <QLabel>
#include <QWidget>
#include <QMainWindow>

class MapWidget : public QLabel
{

Q_OBJECT;

public:
    MapWidget(QWidget* parent = nullptr);

private:
    QRect startRect;                            // стартове положення карти

private slots:
    void on_scaleChanged(float scale);          // слот зміни маштабу карти
    void move(QPoint vec, QRect windowRect);    // слот переміщення карти на заданий вектор
};

#endif // MAPWIDGET_H
