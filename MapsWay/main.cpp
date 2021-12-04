#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    try {
        QFile styleF;
        styleF.setFileName(":/design/css/style.css");
        if(!styleF.open(QFile::ReadOnly))
        {
            throw (QString) "5";
        }
        QString qssStr = styleF.readAll();

        qApp->setStyleSheet(qssStr);
    }
    catch(QString ErrorCode)
    {
        Exception Errore (ErrorCode);
    }

    return a.exec();
}
