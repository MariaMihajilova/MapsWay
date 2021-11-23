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

signals:

private slots:
    void BuildPath(QPainter* painter, int start, int end);
    void scaleChanged (float scale);
    void offsetChanged (QPoint offset);

    void visibleChanged(bool visible);
    void newPath(int start, int end);

private:

    QPoint findCoords(int pos);
    int PartEnd(int pos);
    void paintEvent(QPaintEvent* event);

    float scale;
    QPoint offset;
    bool visible;
    int start;
    int end;

};

#endif // PATHBUILDER_H
