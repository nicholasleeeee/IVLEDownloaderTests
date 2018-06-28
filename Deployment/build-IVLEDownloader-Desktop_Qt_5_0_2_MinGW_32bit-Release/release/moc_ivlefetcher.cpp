/****************************************************************************
** Meta object code from reading C++ file 'ivlefetcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IVLEDownloader/dunciator/ivlefetcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ivlefetcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IVLEFetcher_t {
    QByteArrayData data[14];
    char stringdata[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_IVLEFetcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_IVLEFetcher_t qt_meta_stringdata_IVLEFetcher = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 12),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 13),
QT_MOC_LITERAL(4, 40, 12),
QT_MOC_LITERAL(5, 53, 5),
QT_MOC_LITERAL(6, 59, 5),
QT_MOC_LITERAL(7, 65, 13),
QT_MOC_LITERAL(8, 79, 14),
QT_MOC_LITERAL(9, 94, 8),
QT_MOC_LITERAL(10, 103, 22),
QT_MOC_LITERAL(11, 126, 12),
QT_MOC_LITERAL(12, 139, 8),
QT_MOC_LITERAL(13, 148, 5)
    },
    "IVLEFetcher\0statusUpdate\0\0fetchingState\0"
    "tokenUpdated\0token\0error\0fetchingError\0"
    "fileDownloaded\0filename\0gotUnreadAnnouncements\0"
    "setDirectory\0setToken\0start\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IVLEFetcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x05,
       4,    1,   57,    2, 0x05,
       6,    1,   60,    2, 0x05,
       8,    1,   63,    2, 0x05,
      10,    1,   66,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      11,    1,   69,    2, 0x0a,
      12,    1,   72,    2, 0x0a,
      13,    0,   75,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QVariantList,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void IVLEFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IVLEFetcher *_t = static_cast<IVLEFetcher *>(_o);
        switch (_id) {
        case 0: _t->statusUpdate((*reinterpret_cast< fetchingState(*)>(_a[1]))); break;
        case 1: _t->tokenUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< fetchingError(*)>(_a[1]))); break;
        case 3: _t->fileDownloaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->gotUnreadAnnouncements((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        case 5: _t->setDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setToken((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IVLEFetcher::*_t)(fetchingState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IVLEFetcher::statusUpdate)) {
                *result = 0;
            }
        }
        {
            typedef void (IVLEFetcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IVLEFetcher::tokenUpdated)) {
                *result = 1;
            }
        }
        {
            typedef void (IVLEFetcher::*_t)(fetchingError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IVLEFetcher::error)) {
                *result = 2;
            }
        }
        {
            typedef void (IVLEFetcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IVLEFetcher::fileDownloaded)) {
                *result = 3;
            }
        }
        {
            typedef void (IVLEFetcher::*_t)(QVariantList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IVLEFetcher::gotUnreadAnnouncements)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject IVLEFetcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IVLEFetcher.data,
      qt_meta_data_IVLEFetcher,  qt_static_metacall, 0, 0}
};


const QMetaObject *IVLEFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IVLEFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IVLEFetcher.stringdata))
        return static_cast<void*>(const_cast< IVLEFetcher*>(this));
    return QObject::qt_metacast(_clname);
}

int IVLEFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void IVLEFetcher::statusUpdate(fetchingState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IVLEFetcher::tokenUpdated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IVLEFetcher::error(fetchingError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IVLEFetcher::fileDownloaded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void IVLEFetcher::gotUnreadAnnouncements(QVariantList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
