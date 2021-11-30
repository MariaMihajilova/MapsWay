#ifndef ROUTEINFORMATION_H
#define ROUTEINFORMATION_H

#include <QDialog>
#include "file.h"

namespace Ui {
class RouteInformation;
}

class RouteInformation : public QDialog
{
    Q_OBJECT

public:
    explicit RouteInformation(QWidget *parent = nullptr);
    ~RouteInformation();

    void showInf(route inf, QList<QString> stopList);

private:
    Ui::RouteInformation *ui;
};

#endif // ROUTEINFORMATION_H
