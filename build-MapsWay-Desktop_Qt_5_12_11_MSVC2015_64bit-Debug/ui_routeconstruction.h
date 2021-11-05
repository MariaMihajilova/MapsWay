/********************************************************************************
** Form generated from reading UI file 'routeconstruction.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTECONSTRUCTION_H
#define UI_ROUTECONSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RouteConstruction
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton;

    void setupUi(QDialog *RouteConstruction)
    {
        if (RouteConstruction->objectName().isEmpty())
            RouteConstruction->setObjectName(QString::fromUtf8("RouteConstruction"));
        RouteConstruction->resize(400, 423);
        RouteConstruction->setMinimumSize(QSize(400, 423));
        RouteConstruction->setMaximumSize(QSize(400, 423));
        label = new QLabel(RouteConstruction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 50, 141, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(RouteConstruction);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 180, 141, 31));
        label_2->setFont(font);
        comboBox = new QComboBox(RouteConstruction);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 100, 171, 22));
        comboBox_2 = new QComboBox(RouteConstruction);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(100, 240, 171, 22));
        pushButton = new QPushButton(RouteConstruction);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 310, 331, 41));
        pushButton->setFont(font);

        retranslateUi(RouteConstruction);

        QMetaObject::connectSlotsByName(RouteConstruction);
    } // setupUi

    void retranslateUi(QDialog *RouteConstruction)
    {
        RouteConstruction->setWindowTitle(QApplication::translate("RouteConstruction", "\320\221\321\203\320\264\321\203\320\262\320\260\320\275\320\275\321\217 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\321\203 ", nullptr));
        label->setText(QApplication::translate("RouteConstruction", "\320\242\320\276\321\207\320\272\320\260 \320\262\321\226\320\264\320\277\321\200\320\260\320\262\320\272\320\270", nullptr));
        label_2->setText(QApplication::translate("RouteConstruction", "\320\242\320\276\321\207\320\272\320\260 \320\262\321\226\320\264\320\277\321\200\320\260\320\262\320\272\320\270", nullptr));
        pushButton->setText(QApplication::translate("RouteConstruction", "\320\237\320\276\320\261\321\203\320\264\321\203\320\262\320\260\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RouteConstruction: public Ui_RouteConstruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTECONSTRUCTION_H
