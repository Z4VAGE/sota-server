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
struct qt_meta_stringdata_Client_t {
    QByteArrayData data[10];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Client_t qt_meta_stringdata_Client = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Client"
QT_MOC_LITERAL(1, 7, 9), // "unique_id"
QT_MOC_LITERAL(2, 17, 7), // "init_id"
QT_MOC_LITERAL(3, 25, 11), // "software_id"
QT_MOC_LITERAL(4, 37, 9), // "last_seen"
QT_MOC_LITERAL(5, 47, 7), // "last_ip"
QT_MOC_LITERAL(6, 55, 6), // "status"
QT_MOC_LITERAL(7, 62, 8), // "group_id"
QT_MOC_LITERAL(8, 71, 10), // "last_sw_id"
QT_MOC_LITERAL(9, 82, 6) // "active"

    },
    "Client\0unique_id\0init_id\0software_id\0"
    "last_seen\0last_ip\0status\0group_id\0"
    "last_sw_id\0active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Client[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,
       3, QMetaType::QString, 0x00095003,
       4, QMetaType::QString, 0x00095003,
       5, QMetaType::QString, 0x00095003,
       6, QMetaType::QString, 0x00095003,
       7, QMetaType::QString, 0x00095003,
       8, QMetaType::QString, 0x00095003,
       9, QMetaType::QString, 0x00095003,

       0        // eod
};

void Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_unique_id; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->m_init_id; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->m_software_id; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->m_last_seen; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->m_last_ip; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->m_status; break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->m_group_id; break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->m_last_sw_id; break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->m_active; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_unique_id != *reinterpret_cast< QString*>(_v)) {
                _t->m_unique_id = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->m_init_id != *reinterpret_cast< QString*>(_v)) {
                _t->m_init_id = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->m_software_id != *reinterpret_cast< QString*>(_v)) {
                _t->m_software_id = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->m_last_seen != *reinterpret_cast< QString*>(_v)) {
                _t->m_last_seen = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 4:
            if (_t->m_last_ip != *reinterpret_cast< QString*>(_v)) {
                _t->m_last_ip = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 5:
            if (_t->m_status != *reinterpret_cast< QString*>(_v)) {
                _t->m_status = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 6:
            if (_t->m_group_id != *reinterpret_cast< QString*>(_v)) {
                _t->m_group_id = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 7:
            if (_t->m_last_sw_id != *reinterpret_cast< QString*>(_v)) {
                _t->m_last_sw_id = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 8:
            if (_t->m_active != *reinterpret_cast< QString*>(_v)) {
                _t->m_active = *reinterpret_cast< QString*>(_v);
            }
            break;
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

QT_INIT_METAOBJECT const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Client.data,
    qt_meta_data_Client,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
