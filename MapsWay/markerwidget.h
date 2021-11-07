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
    void on_scaleChanged(float scale);
    void move(QPoint vec);

private:
    QPoint startPoint;

    float scale;
};

#endif // MARKERWIDGET_H
