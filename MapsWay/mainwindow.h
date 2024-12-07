#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>

#include "routesearch.h"
#include "busstopsearch.h"
#include "routeconstruction.h"
#include "trafficrules.h"
#include "pathbuilder.h"
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
    void scaleChanged(float scale);                     // сигнал зміни розміру інтерфейса
    void moveSignal (QPoint vec, QRect windowRect);     // сигнал зміни позиції інтерфейсу
    void moveSignal (QPoint vec);                       // сигнал зміни позиції інтерфейсу для міток
    void initialization ();                             // сигнал ініціфлізації деяких єлементів
    void offset (QPoint offset);                        // сигнал оновлення данних про зміщення інтерфейсу

private slots:
    void on_routeSearch_show_triggered();               // відкриття вікна Пошук маршруту

    void on_stopSearch_show_triggered();                // відкриття вікна Пошук зупинки

    void on_routeConst_show_triggered();                // відкриття вікна Будування маршруту

    void on_helpForm_show_triggered();                  // відкриття вікна з інструкцією

    void on_aboutForm_show_triggered();                 // відкриття вікна з інформацією про розробників

    void on_rules_show_triggered();                     // відкриття вікна Правила користування громадським транспортом

    void scaleBar_valueChanged(int value);


private:
    Ui::MainWindow *ui;
    RouteSearch *routeSearch;           // вікно пошук маршруту
    BusStopSearch *stopSearch;          // вікно пошук зупинки
    RouteConstruction *routeConst;      // вікно будування маршруту
    TrafficRules *rules;                // вікно правила користування громадським транспортом
    About *aboutForm;
    Help *helpForm;

    Route* showRoute;                   // клас керування маршрутами
    PathBuilder* path;                  // клас будування та відображення маршруту

    QSlider* scaleBar;                  // Повзунок зміни розміру

    float scale;                        // Змінна яка зберігає поточний розмір

    QRect rectBounds;                   // Обмеження руху карти
    QPoint pointStart;                  // Збереження позиції мищі при натисканні правої кнопки мищі

    QRect rectMap;                      // Збереження геометрії карти

    void wheelEvent(QWheelEvent* event);                 // Перевантаження методу взаємодії з коліщатком мищі
    void mousePressEvent(QMouseEvent* event);            // Перевантаження методу взаємодії з кнопками мищі
    void mouseMoveEvent(QMouseEvent* event);             // Перевантаження методу взаємодії з позицією мищі


};
#endif // MAINWINDOW_H
