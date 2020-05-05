/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ClientManager/client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientModel_t {
    QByteArrayData data[10];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientModel_t qt_meta_stringdata_ClientModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ClientModel"
QT_MOC_LITERAL(1, 12, 9), // "unique_id"
QT_MOC_LITERAL(2, 22, 7), // "init_id"
QT_MOC_LITERAL(3, 30, 11), // "software_id"
QT_MOC_LITERAL(4, 42, 9), // "last_seen"
QT_MOC_LITERAL(5, 52, 7), // "last_ip"
QT_MOC_LITERAL(6, 60, 6), // "status"
QT_MOC_LITERAL(7, 67, 8), // "group_id"
QT_MOC_LITERAL(8, 76, 10), // "last_sw_id"
QT_MOC_LITERAL(9, 87, 6) // "active"

    },
    "ClientModel\0unique_id\0init_id\0software_id\0"
    "last_seen\0last_ip\0status\0group_id\0"
    "last_sw_id\0active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::QString, 0x00095103,
       3, QMetaType::QString, 0x00095103,
       4, QMetaType::QString, 0x00095103,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,

       0        // eod
};

void ClientModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<ClientModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->unique_id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->init_id(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->software_id(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->last_seen(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->last_ip(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->group_id(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->last_sw_id(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->active(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<ClientModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUnique_id(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setInit_id(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setSoftware_id(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setLast_seen(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setLast_ip(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setStatus(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setGroup_id(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setLast_sw_id(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setActive(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ClientModel::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ClientModel.data,
    qt_meta_data_ClientModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
