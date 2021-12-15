/********************************************************************************
** Form generated from reading UI file 'stopinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOPINFORMATION_H
#define UI_STOPINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_StopInformation
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView;

    void setupUi(QDialog *StopInformation)
    {
        if (StopInformation->objectName().isEmpty())
            StopInformation->setObjectName(QString::fromUtf8("StopInformation"));
        StopInformation->resize(698, 365);
        StopInformation->setMinimumSize(QSize(698, 365));
        StopInformation->setMaximumSize(QSize(698, 365));
        label = new QLabel(StopInformation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 100, 131, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(StopInformation);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 140, 81, 41));
        label_2->setFont(font);
        tableView = new QTableView(StopInformation);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(200, 20, 451, 321));

        retranslateUi(StopInformation);

        QMetaObject::connectSlotsByName(StopInformation);
    } // setupUi

    void retranslateUi(QDialog *StopInformation)
    {
        StopInformation->setWindowTitle(QApplication::translate("StopInformation", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \320\267\321\203\320\277\320\270\320\275\320\272\321\203 ", nullptr));
        label->setText(QApplication::translate("StopInformation", "\320\235\320\260\320\267\320\262\320\260 \320\267\321\203\320\277\320\270\320\275\320\272\320\270", nullptr));
        label_2->setText(QApplication::translate("StopInformation", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StopInformation: public Ui_StopInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOPINFORMATION_H
