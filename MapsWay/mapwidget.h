#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include <QLabel>
#include <QWidget>

class MapWidget : public QLabel
{
    Q_OBJECT;

    public:
        MapWidget(QWidget* parent = nullptr);

    private:
        QRect startRect;    // Збереження початкового позміру

    private slots:
        void on_scaleChanged(float scale);          // Мтод зміни розміру
        void move(QPoint vec, QRect windowRect);    // Метод переміщення на заданий вектор
};

#endif // MAPWIDGET_H
