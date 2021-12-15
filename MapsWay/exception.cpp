#include "exception.h"

Exception::Exception(QString key)
{
    // Завантажимо список помилок
    QMap<QString,QString> map;
    map["1"] = "Файл не знайдено";
    map["2"] = "Некоректні введені дані";
    map["3"] = "Некоректні дані файлу";
    map["4"] = "Дані не завантажені";
    map["5"] = "Стиль не завантажено";
    map["6"] = "Вікно вже відкрито";

    // Визначення тексту сповіщення
    QString value = map.value(key);
    QString data = ("Error: " + key +  " " + value);

    // Графічне повідомлення користувача про помилку
    QMessageBox messageBox;
    messageBox.critical(0,"Error №" + key, value +" !");

    // Запис повідомлення до звіту про помилки
    QFile file("logs/Error_Logs.txt");
    try{
        if (!file.open(QIODevice::Append)) {    // Якщо не вийшло правильно відкрити файл
            throw (QString)"0";                 // Викличемо повідомлення
        }
        else {
            file.write(data.toUtf8() + '\n');   // Запишемо повідомлення
            file.close();                       // Закриємо файл
        }
    }
    catch(QString ErrorCode) {                  // Повідомлення про помилку
          messageBox.critical(0,"Помилка №" + ErrorCode,"Файл для запису помилок не знайдено!");
    }
}
