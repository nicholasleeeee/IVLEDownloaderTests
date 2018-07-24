/****************************************************************************
** Meta object code from reading C++ file 'downloaderui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VincentIVLEDownloader/downloaderui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloaderui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DownloaderUI_t {
    QByteArrayData data[20];
    char stringdata[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DownloaderUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DownloaderUI_t qt_meta_stringdata_DownloaderUI = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 5),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 7),
QT_MOC_LITERAL(4, 28, 6),
QT_MOC_LITERAL(5, 35, 19),
QT_MOC_LITERAL(6, 55, 5),
QT_MOC_LITERAL(7, 61, 19),
QT_MOC_LITERAL(8, 81, 5),
QT_MOC_LITERAL(9, 87, 6),
QT_MOC_LITERAL(10, 94, 6),
QT_MOC_LITERAL(11, 101, 17),
QT_MOC_LITERAL(12, 119, 23),
QT_MOC_LITERAL(13, 143, 23),
QT_MOC_LITERAL(14, 167, 23),
QT_MOC_LITERAL(15, 191, 23),
QT_MOC_LITERAL(16, 215, 27),
QT_MOC_LITERAL(17, 243, 11),
QT_MOC_LITERAL(18, 255, 12),
QT_MOC_LITERAL(19, 268, 30)
    },
    "DownloaderUI\0login\0\0deleted\0update\0"
    "on_treeView_clicked\0index\0on_listView_clicked\0"
    "parse\0parse2\0parse3\0ModulesPageLoader\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_6_clicked\0"
    "on_pushButton_login_clicked\0loadOutlook\0"
    "startOutlook\0on_pushButton_forgetMe_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloaderUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    1,  100,    2, 0x0a,
       4,    2,  103,    2, 0x0a,
       5,    1,  108,    2, 0x08,
       7,    1,  111,    2, 0x08,
       8,    1,  114,    2, 0x08,
       9,    1,  117,    2, 0x08,
      10,    1,  120,    2, 0x08,
      11,    0,  123,    2, 0x08,
      12,    0,  124,    2, 0x08,
      13,    0,  125,    2, 0x08,
      14,    0,  126,    2, 0x08,
      15,    0,  127,    2, 0x08,
      16,    0,  128,    2, 0x08,
      17,    0,  129,    2, 0x08,
      18,    0,  130,    2, 0x08,
      19,    0,  131,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DownloaderUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DownloaderUI *_t = static_cast<DownloaderUI *>(_o);
        switch (_id) {
        case 0: _t->login(); break;
        case 1: _t->deleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->update((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_treeView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_listView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->parse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->parse2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->parse3((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->ModulesPageLoader(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->on_pushButton_3_clicked(); break;
        case 11: _t->on_pushButton_5_clicked(); break;
        case 12: _t->on_pushButton_6_clicked(); break;
        case 13: _t->on_pushButton_login_clicked(); break;
        case 14: _t->loadOutlook(); break;
        case 15: _t->startOutlook(); break;
        case 16: _t->on_pushButton_forgetMe_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DownloaderUI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloaderUI::login)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject DownloaderUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DownloaderUI.data,
      qt_meta_data_DownloaderUI,  qt_static_metacall, 0, 0}
};


const QMetaObject *DownloaderUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloaderUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloaderUI.stringdata))
        return static_cast<void*>(const_cast< DownloaderUI*>(this));
    return QDialog::qt_metacast(_clname);
}

int DownloaderUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void DownloaderUI::login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
