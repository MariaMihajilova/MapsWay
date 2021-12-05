#ifndef MARKERWIDGET_H
#define MARKERWIDGET_H

#include <QLabel>
#include <QMainWindow>

class MarkerWidget : public QLabel
{
    Q_OBJECT
public:
    MarkerWidget(QWidget* parent = nullptr);

private slots:
    void on_scaleChanged(float scale);          // слот зміни положення маркеру в залежності від маштабу
    void offsetChanged (QPoint offset);         // слот оновлення поточного зміщення інтерфейсу(потрібно для класів-нащадків)
    void init();                                // слот ініціалізації стартового положення маркера
    void move(QPoint vec);                      // слот зміни положення маркера на заданий вектор

protected:
    QPoint startPoint;                          // стартове положення маркера
    float scale;                                // поточний маштаб інтерфейсу
    QPoint offset;                              // поточне зміщення інтерфейсу
};

#endif // MARKERWIDGET_H
