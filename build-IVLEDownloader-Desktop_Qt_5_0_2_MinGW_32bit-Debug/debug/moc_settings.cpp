/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IVLEDownloader-master/settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Settings_t {
    QByteArrayData data[12];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Settings_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Settings_t qt_meta_stringdata_Settings = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 8),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 12),
QT_MOC_LITERAL(4, 32, 9),
QT_MOC_LITERAL(5, 42, 3),
QT_MOC_LITERAL(6, 46, 14),
QT_MOC_LITERAL(7, 61, 1),
QT_MOC_LITERAL(8, 63, 19),
QT_MOC_LITERAL(9, 83, 21),
QT_MOC_LITERAL(10, 105, 23),
QT_MOC_LITERAL(11, 129, 9)
    },
    "Settings\0setToken\0\0setDirectory\0"
    "setNotify\0val\0setMaxFileSize\0s\0"
    "setIgnoreUploadable\0setNotifyAnnouncement\0"
    "setLastAnnouncementTime\0setConfig\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Settings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a,
       3,    1,   57,    2, 0x0a,
       4,    1,   60,    2, 0x0a,
       6,    1,   63,    2, 0x0a,
       8,    1,   66,    2, 0x0a,
       9,    1,   69,    2, 0x0a,
      10,    1,   72,    2, 0x0a,
      11,    1,   75,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QDateTime,    2,
    QMetaType::Void, QMetaType::QVariantMap,    2,

       0        // eod
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Settings *_t = static_cast<Settings *>(_o);
        switch (_id) {
        case 0: _t->setToken((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setNotify((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setMaxFileSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setIgnoreUploadable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setNotifyAnnouncement((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setLastAnnouncementTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 7: _t->setConfig((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Settings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Settings.data,
      qt_meta_data_Settings,  qt_static_metacall, 0, 0}
};


const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Settings.stringdata))
        return static_cast<void*>(const_cast< Settings*>(this));
    return QObject::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
