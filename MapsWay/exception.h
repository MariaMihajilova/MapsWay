#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

// Клас для зберігання коду помилки та її повідомлення
#include "QMap"
// Класи для оповіщення про помилки
#include "QFile"
#include "QMessageBox"

// Оголошення класу
class Exception
{
public:
    Exception(QString code);   // Конструктор приймає код помилки
                               // та викликає й записує повідомлення про помилку
};

#endif // EXCEPTION_H
