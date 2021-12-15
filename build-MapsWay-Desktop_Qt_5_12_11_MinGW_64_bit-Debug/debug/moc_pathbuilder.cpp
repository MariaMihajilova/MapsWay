/****************************************************************************
** Meta object code from reading C++ file 'pathbuilder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MapsWay/pathbuilder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathbuilder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PathBuilder_t {
    QByteArrayData data[14];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathBuilder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathBuilder_t qt_meta_stringdata_PathBuilder = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PathBuilder"
QT_MOC_LITERAL(1, 12, 9), // "BuildPath"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "QPainter*"
QT_MOC_LITERAL(4, 33, 7), // "painter"
QT_MOC_LITERAL(5, 41, 5), // "start"
QT_MOC_LITERAL(6, 47, 3), // "end"
QT_MOC_LITERAL(7, 51, 12), // "scaleChanged"
QT_MOC_LITERAL(8, 64, 5), // "scale"
QT_MOC_LITERAL(9, 70, 13), // "offsetChanged"
QT_MOC_LITERAL(10, 84, 6), // "offset"
QT_MOC_LITERAL(11, 91, 14), // "visibleChanged"
QT_MOC_LITERAL(12, 106, 7), // "visible"
QT_MOC_LITERAL(13, 114, 7) // "newPath"

    },
    "PathBuilder\0BuildPath\0\0QPainter*\0"
    "painter\0start\0end\0scaleChanged\0scale\0"
    "offsetChanged\0offset\0visibleChanged\0"
    "visible\0newPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathBuilder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x08 /* Private */,
       7,    1,   46,    2, 0x08 /* Private */,
       9,    1,   49,    2, 0x08 /* Private */,
      11,    1,   52,    2, 0x08 /* Private */,
      13,    2,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

       0        // eod
};

void PathBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PathBuilder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BuildPath((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->scaleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->offsetChanged((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->visibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->newPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PathBuilder::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_PathBuilder.data,
    qt_meta_data_PathBuilder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathBuilder.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PathBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
