#ifndef PATHBUILDER_H
#define PATHBUILDER_H

#include <QObject>
#include <QWidget>
#include <QPainter>

class PathBuilder : public QWidget
{
    Q_OBJECT
public:
    explicit PathBuilder(QWidget *parent = nullptr);

private slots:
    void BuildPath(QPainter* painter, int start, int end);  // будування маршруту
    void scaleChanged (float scale);                        // онолення маштабу
    void offsetChanged (QPoint offset);                     // оновлення зсуву

    void visibleChanged(bool visible);                      // скриття або відображення маршруту
    void newPath(int start, int end);                       // оновлення стартової та останньої координат маршруту

private:

    QPoint findCoords(int pos);                             // пошук координат в залежності від положення на проспекті
    int PartEnd(int pos);                                   // пошук кінця відрізку проспекта
    void paintEvent(QPaintEvent* event);                    // метод малювання

    float scale;                                            // поточний маштаб
    QPoint offset;                                          // поточне зміщення цнтерфейсу
    bool visible;                                           // чи відображаеться маршрут
    int start;                                              // позиція початку маршрута
    int end;                                                // позиція кінця маршрута

};

#endif // PATHBUILDER_H
