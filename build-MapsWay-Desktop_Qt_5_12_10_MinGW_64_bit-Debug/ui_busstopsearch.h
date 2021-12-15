/********************************************************************************
** Form generated from reading UI file 'busstopsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSSTOPSEARCH_H
#define UI_BUSSTOPSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BusStopSearch
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QComboBox *comboBox;

    void setupUi(QDialog *BusStopSearch)
    {
        if (BusStopSearch->objectName().isEmpty())
            BusStopSearch->setObjectName(QString::fromUtf8("BusStopSearch"));
        BusStopSearch->resize(400, 300);
        BusStopSearch->setMinimumSize(QSize(400, 300));
        BusStopSearch->setMaximumSize(QSize(400, 300));
        label = new QLabel(BusStopSearch);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 50, 121, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(BusStopSearch);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 210, 351, 41));
        pushButton->setFont(font);
        comboBox = new QComboBox(BusStopSearch);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 100, 191, 21));
        comboBox->setFont(font);

        retranslateUi(BusStopSearch);

        QMetaObject::connectSlotsByName(BusStopSearch);
    } // setupUi

    void retranslateUi(QDialog *BusStopSearch)
    {
        BusStopSearch->setWindowTitle(QApplication::translate("BusStopSearch", "\320\237\320\276\321\210\321\203\320\272 \320\267\321\203\320\277\320\270\320\275\320\272\320\270 ", nullptr));
        label->setText(QApplication::translate("BusStopSearch", "\320\235\320\260\320\267\320\262\320\260 \320\267\321\203\320\277\320\270\320\275\320\272\320\270", nullptr));
        pushButton->setText(QApplication::translate("BusStopSearch", "\320\227\320\275\320\260\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BusStopSearch: public Ui_BusStopSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSSTOPSEARCH_H
