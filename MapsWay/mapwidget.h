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
    QRect startRect;

private slots:
    void on_scaleChanged(float scale);
    void move(QPoint vec, QRect windowRect);
};

#endif // MAPWIDGET_H
