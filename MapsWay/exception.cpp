#include "exception.h"

Exception::Exception(QString key)
{
    // Завантажимо список помилок
    QMap<QString,QString> map;
    map["1"] = "File not exists";

    // Визначення тексту сповіщення
    QString value = map.value(key);
    QString data = ("Error: " + key +  " " + value);

    // Графічне повідомлення користувача про помилку
    QMessageBox messageBox;
    messageBox.critical(0,"Error №" + key, value +" !");

    // Запис повідомлення до звіту про помилки
    QFile file(":/data/logs/Error.txt");
    try{
        if (!file.open(QIODevice::WriteOnly)) { // Якщо не вийшло правильно відкрити файл
            throw (QString)"0";                          // Викличемо повідомлення
        }
        else {
            file.write(data.toUtf8());          // Запишемо повідомлення
            file.close();                       // Закриємо файл
        }
    }
    catch(QString ErrorCode) {                  // Повідомлення про помилку
          messageBox.critical(0,"Error №" + ErrorCode,"Crash report file not found !");
    }
}
