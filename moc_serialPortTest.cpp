/****************************************************************************
** Meta object code from reading C++ file 'serialPortTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/headers/mainWindows/serialPortTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialPortTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_serialPortTest_t {
    QByteArrayData data[9];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_serialPortTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_serialPortTest_t qt_meta_stringdata_serialPortTest = {
    {
QT_MOC_LITERAL(0, 0, 14), // "serialPortTest"
QT_MOC_LITERAL(1, 15, 12), // "on_readyRead"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(4, 51, 23), // "on_statusButton_clicked"
QT_MOC_LITERAL(5, 75, 24), // "on_setNameButton_clicked"
QT_MOC_LITERAL(6, 100, 23), // "on_getPwdButton_clicked"
QT_MOC_LITERAL(7, 124, 23), // "on_setPwdButton_clicked"
QT_MOC_LITERAL(8, 148, 21) // "on_backButton_clicked"

    },
    "serialPortTest\0on_readyRead\0\0"
    "on_sendButton_clicked\0on_statusButton_clicked\0"
    "on_setNameButton_clicked\0"
    "on_getPwdButton_clicked\0on_setPwdButton_clicked\0"
    "on_backButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_serialPortTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void serialPortTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        serialPortTest *_t = static_cast<serialPortTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_readyRead(); break;
        case 1: _t->on_sendButton_clicked(); break;
        case 2: _t->on_statusButton_clicked(); break;
        case 3: _t->on_setNameButton_clicked(); break;
        case 4: _t->on_getPwdButton_clicked(); break;
        case 5: _t->on_setPwdButton_clicked(); break;
        case 6: _t->on_backButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject serialPortTest::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_serialPortTest.data,
      qt_meta_data_serialPortTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *serialPortTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serialPortTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_serialPortTest.stringdata0))
        return static_cast<void*>(const_cast< serialPortTest*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int serialPortTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
