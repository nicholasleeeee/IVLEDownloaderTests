/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IVLEDownloader/IVLEdownloader/settingsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SettingsDialog_t {
    QByteArrayData data[17];
    char stringdata[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SettingsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SettingsDialog_t qt_meta_stringdata_SettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 11),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 15),
QT_MOC_LITERAL(4, 44, 18),
QT_MOC_LITERAL(5, 63, 11),
QT_MOC_LITERAL(6, 75, 12),
QT_MOC_LITERAL(7, 88, 9),
QT_MOC_LITERAL(8, 98, 20),
QT_MOC_LITERAL(9, 119, 21),
QT_MOC_LITERAL(10, 141, 15),
QT_MOC_LITERAL(11, 157, 23),
QT_MOC_LITERAL(12, 181, 23),
QT_MOC_LITERAL(13, 205, 23),
QT_MOC_LITERAL(14, 229, 23),
QT_MOC_LITERAL(15, 253, 9),
QT_MOC_LITERAL(16, 263, 5)
    },
    "SettingsDialog\0gottenToken\0\0updateDirectory\0"
    "closedWithSettings\0configSaved\0"
    "setLabelText\0setDlText\0setDisplayedSettings\0"
    "on_pushButton_clicked\0onWebviewLoaded\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "getAPIkey\0parse\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x05,
       3,    1,   92,    2, 0x05,
       4,    1,   95,    2, 0x05,
       5,    1,   98,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       6,    1,  101,    2, 0x0a,
       7,    1,  104,    2, 0x0a,
       8,    1,  107,    2, 0x0a,
       9,    0,  110,    2, 0x08,
      10,    0,  111,    2, 0x08,
      11,    0,  112,    2, 0x08,
      12,    0,  113,    2, 0x08,
      13,    0,  114,    2, 0x08,
      14,    0,  115,    2, 0x08,
      15,    0,  116,    2, 0x08,
      16,    1,  117,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void, QMetaType::QVariantMap,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsDialog *_t = static_cast<SettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->gottenToken((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateDirectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->closedWithSettings((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 3: _t->configSaved((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 4: _t->setLabelText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setDlText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setDisplayedSettings((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->onWebviewLoaded(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->on_pushButton_3_clicked(); break;
        case 11: _t->on_pushButton_4_clicked(); break;
        case 12: _t->on_pushButton_5_clicked(); break;
        case 13: _t->getAPIkey(); break;
        case 14: _t->parse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SettingsDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsDialog::gottenToken)) {
                *result = 0;
            }
        }
        {
            typedef void (SettingsDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsDialog::updateDirectory)) {
                *result = 1;
            }
        }
        {
            typedef void (SettingsDialog::*_t)(QVariantMap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsDialog::closedWithSettings)) {
                *result = 2;
            }
        }
        {
            typedef void (SettingsDialog::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsDialog::configSaved)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject SettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SettingsDialog.data,
      qt_meta_data_SettingsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDialog.stringdata))
        return static_cast<void*>(const_cast< SettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void SettingsDialog::gottenToken(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SettingsDialog::updateDirectory(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SettingsDialog::closedWithSettings(QVariantMap _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SettingsDialog::configSaved(const QVariantMap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
