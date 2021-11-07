#ifndef FILE_H
#define FILE_H

// Библиотека с классом исключений
#include <exception.h>

// Библиотеки нужные для чтения всех файла
#include <QString>
#include <QFile>

// Библиотеки нужные для чтения CSV файлов
#include <QStandardItemModel>
#include <QTextStream>

// Библиотеки нужные для чтения Json файла
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

// Структура нужная для чтения Json файла
// Содержит информацию о маршруте
struct route {
    QString type;   // Тип транспорта на маршруте
    QString numer;  // Номер маршрута
    int count;      // Количество машин на маршруте
};

// Объявление класса
class File
{
private:
    QString Path;                               // Расположения файла с которым ведуться работы
public:
    File(QString adress);                       // Конструктор принимаючий расположение файла
    void CsvRead(QStandardItemModel *csvModel); // Загрузка данных из CSV файла в модель таблицы
    route JsonRead();                           // Чтение Json файла и возвращение массива структур с информацией о маршруте
    QList<QString> TxtRead();                   // Чтение txt файлов и возвращение списока QString значений (каждое значение строка файла)
    void TxtWrite(QString data);                // Запись в txt файл QString строки
};

#endif // FILE_H
