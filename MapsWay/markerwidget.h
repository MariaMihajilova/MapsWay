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
    void init();
    void move(QPoint vec);

protected:
    QPoint startPoint;
    float scale;
    QPoint offset;
};

#endif // MARKERWIDGET_H
