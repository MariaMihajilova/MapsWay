#ifndef BUSSTOPSEARCH_H
#define BUSSTOPSEARCH_H

#include <QDialog>

#include "stopinformation.h"
#include "file.h"

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
    void on_pushButton_clicked();   // обробка натискання кнопки показу інформації про зупинку

private:
    Ui::BusStopSearch *ui;
    StopInformation *window6;       // вікно показу інформації про зупинку

    QList<QString> stopNames;       // масив імен файлів з розкладом
};

#endif // BUSSTOPSEARCH_H
