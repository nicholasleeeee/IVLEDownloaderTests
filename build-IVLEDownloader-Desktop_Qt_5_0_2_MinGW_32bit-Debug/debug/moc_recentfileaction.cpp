/****************************************************************************
** Meta object code from reading C++ file 'recentfileaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VincentIVLEDownloader/recentfileaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recentfileaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_recentFileAction_t {
    QByteArrayData data[5];
    char stringdata[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_recentFileAction_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_recentFileAction_t qt_meta_stringdata_recentFileAction = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 7),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 8),
QT_MOC_LITERAL(4, 35, 8)
    },
    "recentFileAction\0setFile\0\0filePath\0"
    "openFile\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_recentFileAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a,
       4,    0,   27,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void recentFileAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        recentFileAction *_t = static_cast<recentFileAction *>(_o);
        switch (_id) {
        case 0: _t->setFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->openFile(); break;
        default: ;
        }
    }
}

const QMetaObject recentFileAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_recentFileAction.data,
      qt_meta_data_recentFileAction,  qt_static_metacall, 0, 0}
};


const QMetaObject *recentFileAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *recentFileAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_recentFileAction.stringdata))
        return static_cast<void*>(const_cast< recentFileAction*>(this));
    return QAction::qt_metacast(_clname);
}

int recentFileAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
