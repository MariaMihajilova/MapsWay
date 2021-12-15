/********************************************************************************
** Form generated from reading UI file 'routeinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTEINFORMATION_H
#define UI_ROUTEINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_RouteInformation
{
public:
    QListView *listView;
    QListView *listView_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *RouteInformation)
    {
        if (RouteInformation->objectName().isEmpty())
            RouteInformation->setObjectName(QString::fromUtf8("RouteInformation"));
        RouteInformation->resize(911, 300);
        listView = new QListView(RouteInformation);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(300, 60, 256, 192));
        listView_2 = new QListView(RouteInformation);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(630, 60, 256, 192));
        label = new QLabel(RouteInformation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 190, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(RouteInformation);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 81, 31));
        label_2->setFont(font);
        label_3 = new QLabel(RouteInformation);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 160, 141, 21));
        label_3->setFont(font);
        label_4 = new QLabel(RouteInformation);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 50, 151, 31));
        label_4->setFont(font);
        label_5 = new QLabel(RouteInformation);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 20, 81, 31));
        label_5->setFont(font);
        label_6 = new QLabel(RouteInformation);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(710, 20, 81, 31));
        label_6->setFont(font);

        retranslateUi(RouteInformation);

        QMetaObject::connectSlotsByName(RouteInformation);
    } // setupUi

    void retranslateUi(QDialog *RouteInformation)
    {
        RouteInformation->setWindowTitle(QApplication::translate("RouteInformation", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \320\274\320\260\321\200\321\210\321\200\321\203\321\202 ", nullptr));
        label->setText(QApplication::translate("RouteInformation", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("RouteInformation", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("RouteInformation", "\320\242\320\270\320\277 \321\202\321\200\320\260\320\275\321\201\320\277\320\276\321\200\321\202\321\203", nullptr));
        label_4->setText(QApplication::translate("RouteInformation", "\320\235\320\276\320\274\320\265\321\200 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\321\203", nullptr));
        label_5->setText(QApplication::translate("RouteInformation", "\320\227\321\203\320\277\320\270\320\275\320\272\320\270", nullptr));
        label_6->setText(QApplication::translate("RouteInformation", "\320\240\320\276\320\267\320\272\320\273\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RouteInformation: public Ui_RouteInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTEINFORMATION_H
