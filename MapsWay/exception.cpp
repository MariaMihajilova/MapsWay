#include "exception.h"

Exception::Exception(QString key)
{
    // Загрузим список ошибок
    QMap<QString,QString> map;
    map["1"] = "File not exists";

    // Определение текста сповіщення
    QString value = map.value(key);
    QString data = ("Error: " + key +  " " + value);

    // Графическое уведомление пользователя об ошибке
    QMessageBox messageBox;
    messageBox.critical(0,"Error №" + key, value +" !");

    // Запись сообщения в отчет об ошибках
    QFile file(":/new/prefix1/Error.txt");
    try{
        if (!file.open(QIODevice::WriteOnly)) { // Якщо не вышло коректно открыть файл
            throw "0";                          // Вызовем сообщение
        }
        else {
            file.write(data.toUtf8());          // Запишем сообщение
            file.close();                       // Закроем файл
        }
    }
    catch(QString ErrorCode) {                  // Сообщение об ошибке
          messageBox.critical(0,"Error №" + ErrorCode,"Crash report file not found !");
    }
}
