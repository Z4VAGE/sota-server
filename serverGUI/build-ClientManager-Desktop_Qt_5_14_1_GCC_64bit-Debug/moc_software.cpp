/****************************************************************************
** Meta object code from reading C++ file 'software.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ClientManager/software.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'software.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Software_t {
    QByteArrayData data[7];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Software_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Software_t qt_meta_stringdata_Software = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Software"
QT_MOC_LITERAL(1, 9, 2), // "id"
QT_MOC_LITERAL(2, 12, 4), // "name"
QT_MOC_LITERAL(3, 17, 7), // "version"
QT_MOC_LITERAL(4, 25, 9), // "num_users"
QT_MOC_LITERAL(5, 35, 4), // "size"
QT_MOC_LITERAL(6, 40, 8) // "location"

    },
    "Software\0id\0name\0version\0num_users\0"
    "size\0location"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Software[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
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

       0        // eod
};

void Software::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Software *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_id; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->m_version; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->m_num_users; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->m_size; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->m_location; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Software *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_id != *reinterpret_cast< QString*>(_v)) {
                _t->m_id = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->m_name != *reinterpret_cast< QString*>(_v)) {
                _t->m_name = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->m_version != *reinterpret_cast< QString*>(_v)) {
                _t->m_version = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->m_num_users != *reinterpret_cast< QString*>(_v)) {
                _t->m_num_users = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 4:
            if (_t->m_size != *reinterpret_cast< QString*>(_v)) {
                _t->m_size = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 5:
            if (_t->m_location != *reinterpret_cast< QString*>(_v)) {
                _t->m_location = *reinterpret_cast< QString*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject Software::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Software.data,
    qt_meta_data_Software,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Software::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Software::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Software.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Software::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
