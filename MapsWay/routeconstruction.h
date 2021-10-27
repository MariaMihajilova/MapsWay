#ifndef ROUTECONSTRUCTION_H
#define ROUTECONSTRUCTION_H

#include <QDialog>

namespace Ui {
class RouteConstruction;
}

class RouteConstruction : public QDialog
{
    Q_OBJECT

public:
    explicit RouteConstruction(QWidget *parent = nullptr);
    ~RouteConstruction();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RouteConstruction *ui;
};

#endif // ROUTECONSTRUCTION_H
