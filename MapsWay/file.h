#ifndef FILE_H
#define FILE_H

// Бібліотеки з класом винятків
#include <exception.h>

// Бібліотеки потрібні для зчитування всіх файлів
#include <QString>
#include <QFile>

// Бібліотеки потрібні для зчитування CSV файлів
#include <QStandardItemModel>
#include <QTextStream>

// Бібліотеки потрібні для зчитування Json файлу
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

// Структура потрібна для зчитування Json файлу
// Містить інформацію про маршрут
struct route {
    int count;      // Кількість машин на маршруті
    QString numer;  // Номер маршрута
    QString type;   // Тип транспорта на маршруте
    int startTime;  // Час початку руху (у хвилинах)
    int endTime;    // Час кінця руху
    int delay;      // Час простою на зупинці
    int firstStop;  // id першої зупинки
    int endStop;    // id останньої зупинки
};

// Оголошення классу
class File
{
private:
    QString Path;                               // Розташування файлу з яким ведуться роботи
public:
    File(QString adress);                       // Конструктор приймаючий розташування файлу
    void CsvRead(QStandardItemModel *csvModel); // Завантаження даних із CSV файлу в модель таблиці
    route* JsonRead();                          // Читання Json файлу та повернення масиву структур
                                                // з інформацією про маршрут
    QList<QString> TxtRead();                   // Читання txt файлів і повернення списку значень QString
                                                // (кожне значення рядок файлу)
    void TxtWrite(QString data);                // Запис у txt файл QString рядка
};

#endif // FILE_H
