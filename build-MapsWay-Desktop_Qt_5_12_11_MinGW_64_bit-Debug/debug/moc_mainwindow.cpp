/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MapsWay/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "scaleChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "scale"
QT_MOC_LITERAL(4, 31, 10), // "moveSignal"
QT_MOC_LITERAL(5, 42, 3), // "vec"
QT_MOC_LITERAL(6, 46, 10), // "windowRect"
QT_MOC_LITERAL(7, 57, 14), // "initialization"
QT_MOC_LITERAL(8, 72, 6), // "offset"
QT_MOC_LITERAL(9, 79, 7), // "newPath"
QT_MOC_LITERAL(10, 87, 5), // "start"
QT_MOC_LITERAL(11, 93, 3), // "end"
QT_MOC_LITERAL(12, 97, 11), // "pathVisible"
QT_MOC_LITERAL(13, 109, 7), // "visible"
QT_MOC_LITERAL(14, 117, 19), // "on_action_triggered"
QT_MOC_LITERAL(15, 137, 21), // "on_action_2_triggered"
QT_MOC_LITERAL(16, 159, 21), // "on_action_3_triggered"
QT_MOC_LITERAL(17, 181, 21), // "on_action_4_triggered"
QT_MOC_LITERAL(18, 203, 21), // "on_action_5_triggered"
QT_MOC_LITERAL(19, 225, 24), // "on_scaleBar_valueChanged"
QT_MOC_LITERAL(20, 250, 5) // "value"

    },
    "MainWindow\0scaleChanged\0\0scale\0"
    "moveSignal\0vec\0windowRect\0initialization\0"
    "offset\0newPath\0start\0end\0pathVisible\0"
    "visible\0on_action_triggered\0"
    "on_action_2_triggered\0on_action_3_triggered\0"
    "on_action_4_triggered\0on_action_5_triggered\0"
    "on_scaleBar_valueChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    2,   82,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       7,    0,   90,    2, 0x06 /* Public */,
       8,    1,   91,    2, 0x06 /* Public */,
       9,    2,   94,    2, 0x06 /* Public */,
      12,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,
      18,    0,  106,    2, 0x08 /* Private */,
      19,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QRect,    5,    6,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scaleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->moveSignal((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 2: _t->moveSignal((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->initialization(); break;
        case 4: _t->offset((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->newPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->pathVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_action_triggered(); break;
        case 8: _t->on_action_2_triggered(); break;
        case 9: _t->on_action_3_triggered(); break;
        case 10: _t->on_action_4_triggered(); break;
        case 11: _t->on_action_5_triggered(); break;
        case 12: _t->on_scaleBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::scaleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QPoint , QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::moveSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::moveSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::initialization)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::offset)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::newPath)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::pathVisible)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::scaleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::moveSignal(QPoint _t1, QRect _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::moveSignal(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::initialization()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::offset(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::newPath(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::pathVisible(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
