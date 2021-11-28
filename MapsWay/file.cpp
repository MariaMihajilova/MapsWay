#include "file.h"

// Сетер шляху файлу
File::File(QString adress)
{
    Path = adress;  // Запам'ятаємо шлях до файлу
}

// Зчитування Csv файлу у модель
void File::CsvRead(QStandardItemModel *csvModel)
{
    try{
        QFile file(Path);                                   // Відкриваємо файл
        if ( !file.open(QFile::ReadOnly | QFile::Text) ) {  // Перевіримо чи відкрито файл
            throw (QString)"1";                             // Якщо ні повідомимо про помилку
        } else {
            // Створюємо потік для вилучення даних із файлу
            QTextStream in(&file);
            // Зчитуємо дані до кінця файлу
            while (!in.atEnd())
            {
                // Построчно
                QString line = in.readLine();
                // Додаємо до моделі по рядку з елементами
                QList<QStandardItem *> standardItemsList;
                // Враховуємо, що рядок розділяється крапкою з комою на колонки
                for (QString item : line.split(";")) {
                    standardItemsList.append(new QStandardItem(item));
                }
                csvModel->insertRow(csvModel->rowCount(), standardItemsList);
            }
            file.close();                       // Закриємо файл
        }
    }
    catch(QString ErrorCode){
          Exception Errore (ErrorCode);        // Повідомлення про помилку
    }
}
// Зчитування Json файлу
route* File::JsonRead(){
    QFile file(Path);                                               // Відкриваємо файл
    try {
        if ( !file.open(QFile::ReadOnly | QFile::Text) ) {          // Перевіримо чи відкрито файл
            throw (QString)"1";                                     // Якщо ні повідомимо про помилку
        } else{
            // Прочитаем в документ
            QJsonParseError JsonParseError;
            QJsonDocument JsonDocument = QJsonDocument::fromJson(file.readAll(), &JsonParseError);
            file.close();                                           // Закриємо файл

            QJsonObject RootObject = JsonDocument.object();         // Читаємо корінний об'єкт
            QJsonArray Array = RootObject.value("routes").toArray();// Читаємо масив маршрутів

            route* rarray = new route [Array.size()];                            // Виділимо місце під масив
            for (int i = 0; i < Array.size(); i++) {                // Заповнимо масив
                QJsonObject obj = Array[i].toObject();
                rarray[i].count = obj.value("count").toInt();
                rarray[i].numer = obj.value("numer").toString();
                rarray[i].type  = obj.value("type").toString();               
                rarray[i].startTime = obj.value("startTime").toInt();
                rarray[i].endTime   = obj.value("endTime").toInt();
                rarray[i].delay     = obj.value("delay").toInt();
                rarray[i].firstStop = obj.value("firstStop").toInt();
                rarray[i].endStop   = obj.value("endStop").toInt();
            }
            return rarray;                                         // Повернем масив
        }
    }
    catch(QString ErrorCode) {
          Exception Errore (ErrorCode);        // Повідомлення про помилку
    }
}

// Зчитування txt файлу у QList<QString>
QList<QString> File::TxtRead(){
    try {
        QFile file(Path);                                   // Відкриваємо файл
        QList<QString> StringList;                          // Створимо список
        if ( !file.open(QFile::ReadOnly | QFile::Text) ) {  // Перевіримо чи відкрито файл
            throw (QString)"1";                             // Якщо ні повідомимо про помилку
        } else {                                            // Якщо відкрити
            // Створюємо потік для вилучення даних із файлу
            QTextStream in(&file);
            // Зчитуємо дані до кінця файлу
            while (!in.atEnd())
            {
                // Построчно
                QString line = in.readLine();
                // Додаємо до списку по рядку з елементами
                StringList.append(line);
            }
            file.close();                                   // Закриємо файл
            return StringList;                              // Повертаємо List
        }
    }
    catch(QString ErrorCode) {
          Exception Errore (ErrorCode);        // Повідомлення про помилку
    }
}

// Запис у txt файл QString рядка
void File::TxtWrite(QString data){
    QFile file(Path);                           // Відкриємо файл
    try{
        if (!file.open(QIODevice::WriteOnly)) { // Перевіримо чи відкрито файл
            throw (QString)"1";                 // Якщо ні повідомимо про помилку
        }
        else {                                  // Якщо відкрити
            file.write(data.toUtf8());          // Запишемо у файл
            file.close();                       // Закриємо файл
        }
    }
    catch(QString ErrorCode) {
          Exception Errore (ErrorCode);        // Повідомлення про помилку
    }
}
