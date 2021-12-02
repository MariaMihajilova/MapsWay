#ifndef STOPINFORMATION_H
#define STOPINFORMATION_H

#include <QDialog>

#include "file.h"

namespace Ui {
class StopInformation;
}

class StopInformation : public QDialog
{
    Q_OBJECT

public:
    explicit StopInformation(QWidget *parent = nullptr);
    ~StopInformation();

    void showTable(QString fileName, QString stopName);       // виведення інформації на форму

signals:
    void closed();

private:
    Ui::StopInformation *ui;

    void closeEvent ( QCloseEvent * e);


};

#endif // STOPINFORMATION_H
