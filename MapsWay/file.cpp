#include "file.h"

File::File(QString adress)
{
    Path = adress;  // Запомним путь к фалу
}

void File::CsvRead(QStandardItemModel *csvModel)
{
    try{
        QFile file(Path);                                   // Открываем файл
        if ( !file.open(QFile::ReadOnly | QFile::Text) ) {  // Проверим открыт ли файл
            throw "1";                                      // Если нет сообщим об ошибке
        } else {
            // Создаём поток для извлечения данных из файла
            QTextStream in(&file);
            // Считываем данные до конца файла
            while (!in.atEnd())
            {
                // Построчно
                QString line = in.readLine();
                // Добавляем в модель по строке с элементами
                QList<QStandardItem *> standardItemsList;
                // Учитываем, что строка разделяется точкой с запятой на колонки
                for (QString item : line.split(";")) {
                    standardItemsList.append(new QStandardItem(item));
                }
                csvModel->insertRow(csvModel->rowCount(), standardItemsList);
            }
            file.close();                       // Закроем файл
        }
    }
    catch(QString ErrorCode){
          Exception Errore (ErrorCode);        // Сообщение об ошибке
    }
}

route File::JsonRead(){
    QFile file(Path);                                               // Открываем файл
    try {
        if ( !file.open(QFile::ReadOnly | QFile::Text) ) {          // Проверим открыт ли файл
            throw "1";                                              // Если нет сообщим об ошибке
        } else{
            // Прочитаем в документ
            QJsonParseError JsonParseError;
            QJsonDocument JsonDocument = QJsonDocument::fromJson(file.readAll(), &JsonParseError);
            file.close();                                           // Закроем файл

            QJsonObject RootObject = JsonDocument.object();         // Читаем кореной объект
            QJsonArray Array = RootObject.value("routes").toArray();// Читаем масив маршрутов

            route rarray [Array.size()];                            // Выделим место под масив
            for (int i = 0; i < Array.size(); i++) {                // Заполним масив
                QJsonObject obj = Array[i].toObject();
                rarray[i].count = obj.value("count").toInt();
                rarray[i].numer = obj.value("numer").toString();
                rarray[i].type  = obj.value("type").toString();
            }
            return *rarray;                                         // Вернем масив
        }
    }
    catch(QString ErrorCode) {
          Exception Errore (ErrorCode);        // Сообщение об ошибке
    }
}

QList<QString> File::TxtRead(){
    try {
        QFile file(Path);                                   // Открываем файл
        QList<QString> StringList;                          // Создадим список
        if ( !file.open(QFile::ReadOnly | QFile::Text) ) {  // Проверим открыт ли файл
            throw "1";                                      // Если нет сообщим об ошибке
        } else {                                            // Если открыт
            // Создаём поток для извлечения данных из файла
            QTextStream in(&file);
            // Считываем данные до конца файла
            while (!in.atEnd())
            {
                // Построчно
                QString line = in.readLine();
                // Добавляем в список по строке с элементами
                StringList.append(line);
            }
            file.close();                                   // Закроем файл
            return StringList;                              // Возвращаем модель
        }
    }
    catch(QString ErrorCode) {
          Exception Errore (ErrorCode);        // Сообщение об ошибке
    }
}

// Запись в txt файл QString строки
void File::TxtWrite(QString data){
    QFile file(Path);                           // Откроем файл
    try{
        if (!file.open(QIODevice::WriteOnly)) { // Проверим открыт ли файл
            throw "1";                          // Если нет сообщим об ошибке
        }
        else {                                  // Если открыт
            file.write(data.toUtf8());          // Запишем в файл
            file.close();                       // Закроем файл
        }
    }
    catch(QString ErrorCode) {
          Exception Errore (ErrorCode);        // Сообщение об ошибке
    }
}
