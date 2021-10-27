#ifndef ROUTEINFORMATION_H
#define ROUTEINFORMATION_H

#include <QDialog>

namespace Ui {
class RouteInformation;
}

class RouteInformation : public QDialog
{
    Q_OBJECT

public:
    explicit RouteInformation(QWidget *parent = nullptr);
    ~RouteInformation();

private:
    Ui::RouteInformation *ui;
};

#endif // ROUTEINFORMATION_H
