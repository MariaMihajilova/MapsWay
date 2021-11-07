#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

// Класс для хранения кода ошибки и её сообщения
#include "QMap"
// Класы для оповещения о ошибках
#include "QFile"
#include "QMessageBox"

// Объявление класса
class Exception
{
public:
    Exception(QString code);   //Конструктор принимающий код ошибки
};

#endif // EXCEPTION_H
