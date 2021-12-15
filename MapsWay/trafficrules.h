#ifndef TRAFFICRULES_H
#define TRAFFICRULES_H

#include <QDialog>

namespace Ui {
class TrafficRules;
}

class TrafficRules : public QDialog
{
    Q_OBJECT

public:
    explicit TrafficRules(QWidget *parent = nullptr);
    ~TrafficRules();

private:
    Ui::TrafficRules *ui;
};

#endif // TRAFFICRULES_H
