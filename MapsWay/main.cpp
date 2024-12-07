#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    try {
        QFile styleF;                                   // ініціалізація об'єкта класу QFile
        styleF.setFileName(":/design/css/style.css");   // вибір шляху
        if(!styleF.open(QFile::ReadOnly))               // відкриття для читання
        {
            throw (QString) "5";                        // генерація помилки
        }
        QString qssStr = styleF.readAll();              // запис змісту файлу

        qApp->setStyleSheet(qssStr);                    // додає css код у таблицю стилів
    }
    catch(QString ErrorCode)
    {
        Exception Errore (ErrorCode);                   // вивід помилки
    }

    MainWindow w;
    w.show();

    return a.exec();
}
