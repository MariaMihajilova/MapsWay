#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>

#include "routesearch.h"
#include "busstopsearch.h"
#include "routeconstruction.h"
#include "trafficrules.h"

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

private slots:
    void on_action_triggered();

    void on_action_2_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_action_5_triggered();

    void on_scaleBar_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    RouteSearch *window;          // вікно пошук маршруту
    BusStopSearch *window2;       // вікно пошук зупинки
    RouteConstruction *window3;   // вікно будування маршруту
    TrafficRules *window4;        // вікно правила дорожнього руху

    QSlider* scaleBar;            // Повзунок зміни розміру

    float scale;                  // Змінна яка зберігає поточний розмір
    int a;

    bool isOutOfBounds;
    QRect rectBounds;             // Обмеження руху карти
    QPoint pointStart;            // Збереження позиції мищі при натисканні правої кнопки мищі
    QPoint pointWheel;            // Збереження позиції мищі при змінненні позиції коліщчатка

    QRect rectMap;                // Збереження геометрії мапи
    //QRect rectMarker;

    void wheelEvent(QWheelEvent* event);                 // Перевантаження методу взаємодії з коліщатком мищі
    void mousePressEvent(QMouseEvent* event);            // Перевантаження методу взаємодії з кнопками мищі
    void mouseMoveEvent(QMouseEvent* event);             // Перевантаження методу взаємодії з позицією мищі


};
#endif // MAINWINDOW_H
