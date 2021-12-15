/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <mapwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QWidget *centralwidget;
    MapWidget *map;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(30, 30));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        map = new MapWidget(centralwidget);
        map->setObjectName(QString::fromUtf8("map"));
        map->setGeometry(QRect(0, 0, 887, 912));
        map->setStyleSheet(QString::fromUtf8("font: 8pt \"Times New Roman\";"));
        map->setPixmap(QPixmap(QString::fromUtf8(":/img/img/Maps_1.png")));
        map->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addAction(action_4);
        menu->addAction(action_5);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\232\320\260\321\200\321\202\320\260", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\210\321\203\320\272 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\321\203\n"
"", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\210\321\203\320\272 \320\267\321\203\320\277\320\270\320\275\320\272\320\270\n"
"", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\320\221\321\203\320\264\321\203\320\262\320\260\320\275\320\275\321\217 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\321\203\n"
"", nullptr));
        action_4->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\264\320\276\321\200\320\276\320\266\320\275\321\214\320\276\320\263\320\276 \321\200\321\203\321\205\321\203\n"
"", nullptr));
        action_5->setText(QApplication::translate("MainWindow", "\320\240\320\276\320\267\321\200\320\260\321\205\321\203\320\262\320\260\321\202\320\270 \321\202\321\200\320\260\321\204\321\226\320\272", nullptr));
        map->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
