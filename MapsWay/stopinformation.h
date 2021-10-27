#ifndef STOPINFORMATION_H
#define STOPINFORMATION_H

#include <QDialog>

namespace Ui {
class StopInformation;
}

class StopInformation : public QDialog
{
    Q_OBJECT

public:
    explicit StopInformation(QWidget *parent = nullptr);
    ~StopInformation();

private:
    Ui::StopInformation *ui;
};

#endif // STOPINFORMATION_H
