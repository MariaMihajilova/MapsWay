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

    void showTable(QString fileName);       // виведення інформації на форму

private:
    Ui::StopInformation *ui;


};

#endif // STOPINFORMATION_H
