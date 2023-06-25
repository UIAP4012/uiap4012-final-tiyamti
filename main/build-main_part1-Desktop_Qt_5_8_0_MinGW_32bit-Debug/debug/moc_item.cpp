/****************************************************************************
** Meta object code from reading C++ file 'item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../main_part1/item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_item_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_item_t qt_meta_stringdata_item = {
    {
QT_MOC_LITERAL(0, 0, 4), // "item"
QT_MOC_LITERAL(1, 5, 18), // "on_additem_clicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "on_remitem_clicked"
QT_MOC_LITERAL(4, 44, 15), // "on_back_clicked"
QT_MOC_LITERAL(5, 60, 17), // "on_report_clicked"
QT_MOC_LITERAL(6, 78, 17), // "on_upitem_clicked"
QT_MOC_LITERAL(7, 96, 17) // "on_seitem_clicked"

    },
    "item\0on_additem_clicked\0\0on_remitem_clicked\0"
    "on_back_clicked\0on_report_clicked\0"
    "on_upitem_clicked\0on_seitem_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        item *_t = static_cast<item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_additem_clicked(); break;
        case 1: _t->on_remitem_clicked(); break;
        case 2: _t->on_back_clicked(); break;
        case 3: _t->on_report_clicked(); break;
        case 4: _t->on_upitem_clicked(); break;
        case 5: _t->on_seitem_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject item::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_item.data,
      qt_meta_data_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_item.stringdata0))
        return static_cast<void*>(const_cast< item*>(this));
    return QDialog::qt_metacast(_clname);
}

int item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
