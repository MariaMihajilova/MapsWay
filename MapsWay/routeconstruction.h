#ifndef ROUTECONSTRUCTION_H
#define ROUTECONSTRUCTION_H

#include <QDialog>
#include "file.h"

namespace Ui {
class RouteConstruction;
}

class RouteConstruction : public QDialog
{
    Q_OBJECT

public:
    explicit RouteConstruction(QWidget *parent = nullptr);
    ~RouteConstruction();

signals:
    void visibleChanged(bool visible);
    void newPath(int start, int end);

private slots:
    void on_pushButton_clicked();

private:
    Ui::RouteConstruction *ui;

    int* stopDist;
    void closeEvent( QCloseEvent * e);
};

#endif // ROUTECONSTRUCTION_H
