/********************************************************************************
** Form generated from reading UI file 'trafficrules.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAFFICRULES_H
#define UI_TRAFFICRULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_TrafficRules
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *TrafficRules)
    {
        if (TrafficRules->objectName().isEmpty())
            TrafficRules->setObjectName(QString::fromUtf8("TrafficRules"));
        TrafficRules->resize(523, 438);
        TrafficRules->setMinimumSize(QSize(523, 438));
        TrafficRules->setMaximumSize(QSize(523, 438));
        label = new QLabel(TrafficRules);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 40, 241, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(TrafficRules);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 110, 401, 271));
        label_2->setFont(font);

        retranslateUi(TrafficRules);

        QMetaObject::connectSlotsByName(TrafficRules);
    } // setupUi

    void retranslateUi(QDialog *TrafficRules)
    {
        TrafficRules->setWindowTitle(QApplication::translate("TrafficRules", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\264\320\276\321\200\320\276\320\266\320\275\321\214\320\276\320\263\320\276 \321\200\321\203\321\205\321\203 ", nullptr));
        label->setText(QApplication::translate("TrafficRules", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\264\320\276\321\200\320\276\320\266\320\275\321\214\320\276\320\263\320\276 \321\200\321\203\321\205\321\203", nullptr));
        label_2->setText(QApplication::translate("TrafficRules", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrafficRules: public Ui_TrafficRules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAFFICRULES_H
