#ifndef BUSSTOPSEARCH_H
#define BUSSTOPSEARCH_H

#include <QDialog>
#include "stopinformation.h"
namespace Ui {
class BusStopSearch;
}

class BusStopSearch : public QDialog
{
    Q_OBJECT

public:
    explicit BusStopSearch(QWidget *parent = nullptr);
    ~BusStopSearch();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BusStopSearch *ui;
    StopInformation *window6;
};

#endif // BUSSTOPSEARCH_H
