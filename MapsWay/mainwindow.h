#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>

#include "routesearch.h"
#include "busstopsearch.h"
#include "routeconstruction.h"
#include "trafficrules.h"
#include "route.h"
#include "about.h"
#include "help.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void scaleChanged(float scale);                      // Сигнал зміни розміру інтерфейса
    void moveSignal (QPoint vec, QRect windowRect);      // Сигнал зміни позиції інтерфейсу
    void moveSignal (QPoint vec);                        // Сигнал зміни позиції інтерфейсу для міток
    void initialization ();
    void offset (QPoint offset);

    void newPath(int start, int end);
    void pathVisible(bool visible);

private slots:
    void on_action_triggered();

    void on_action_2_triggered();

    void on_action_3_triggered();

    void scaleBar_valueChanged(int value);

    void on_action_5_triggered();

    void on_action_6_triggered();

    void on_action_7_triggered();

private:
    Ui::MainWindow *ui;
    RouteSearch *window;          // вікно пошук маршруту
    BusStopSearch *window2;       // вікно пошук зупинки
    RouteConstruction *window3;   // вікно будування маршруту
    TrafficRules *window4;        // вікно правила дорожнього руху
    About *window5;
    Help *window6;

    Route* showRoute;

    QSlider* scaleBar;            // Повзунок зміни розміру

    float scale;                  // Змінна яка зберігає поточний розмір

    QRect rectBounds;             // Обмеження руху карти
    QPoint pointStart;            // Збереження позиції мищі при натисканні правої кнопки мищі
    QPoint pointWheel;            // Збереження позиції мищі при змінненні позиції коліщчатка

    QRect rectMap;                // Збереження геометрії карти

    void wheelEvent(QWheelEvent* event);                 // Перевантаження методу взаємодії з коліщатком мищі
    void mousePressEvent(QMouseEvent* event);            // Перевантаження методу взаємодії з кнопками мищі
    void mouseMoveEvent(QMouseEvent* event);             // Перевантаження методу взаємодії з позицією мищі


};
#endif // MAINWINDOW_H
