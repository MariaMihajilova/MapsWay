/********************************************************************************
** Form generated from reading UI file 'routesearch.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTESEARCH_H
#define UI_ROUTESEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RouteSearch
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *RouteSearch)
    {
        if (RouteSearch->objectName().isEmpty())
            RouteSearch->setObjectName(QString::fromUtf8("RouteSearch"));
        RouteSearch->resize(400, 300);
        RouteSearch->setMinimumSize(QSize(400, 300));
        RouteSearch->setMaximumSize(QSize(400, 300));
        label = new QLabel(RouteSearch);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 40, 161, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        label->setFont(font);
        comboBox = new QComboBox(RouteSearch);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 90, 191, 22));
        comboBox->setFont(font);
        pushButton = new QPushButton(RouteSearch);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 220, 371, 41));
        pushButton->setFont(font);

        retranslateUi(RouteSearch);

        QMetaObject::connectSlotsByName(RouteSearch);
    } // setupUi

    void retranslateUi(QDialog *RouteSearch)
    {
        RouteSearch->setWindowTitle(QApplication::translate("RouteSearch", "\320\237\320\276\321\210\321\203\320\272 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\321\203 ", nullptr));
        label->setText(QApplication::translate("RouteSearch", "\320\237\320\276\321\210\321\203\320\272 \320\234\320\260\321\200\321\210\321\200\321\203\321\202\321\203", nullptr));
        pushButton->setText(QApplication::translate("RouteSearch", "\320\227\320\275\320\260\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RouteSearch: public Ui_RouteSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTESEARCH_H
