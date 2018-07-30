/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VincentIVLEDownloader/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[29];
    char stringdata[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 12),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 12),
QT_MOC_LITERAL(4, 38, 13),
QT_MOC_LITERAL(5, 52, 15),
QT_MOC_LITERAL(6, 68, 11),
QT_MOC_LITERAL(7, 80, 8),
QT_MOC_LITERAL(8, 89, 11),
QT_MOC_LITERAL(9, 101, 13),
QT_MOC_LITERAL(10, 115, 12),
QT_MOC_LITERAL(11, 128, 21),
QT_MOC_LITERAL(12, 150, 8),
QT_MOC_LITERAL(13, 159, 21),
QT_MOC_LITERAL(14, 181, 13),
QT_MOC_LITERAL(15, 195, 33),
QT_MOC_LITERAL(16, 229, 10),
QT_MOC_LITERAL(17, 240, 10),
QT_MOC_LITERAL(18, 251, 20),
QT_MOC_LITERAL(19, 272, 13),
QT_MOC_LITERAL(20, 286, 9),
QT_MOC_LITERAL(21, 296, 5),
QT_MOC_LITERAL(22, 302, 15),
QT_MOC_LITERAL(23, 318, 10),
QT_MOC_LITERAL(24, 329, 10),
QT_MOC_LITERAL(25, 340, 3),
QT_MOC_LITERAL(26, 344, 5),
QT_MOC_LITERAL(27, 350, 10),
QT_MOC_LITERAL(28, 361, 12)
    },
    "MainWindow\0processToken\0\0updateStatus\0"
    "fetchingState\0updateDirectory\0logDownload\0"
    "filename\0updateFiles\0createFetcher\0"
    "updateRecent\0processSettingsDialog\0"
    "checkCon\0on_pushButton_clicked\0"
    "iconActivated\0QSystemTrayIcon::ActivationReason\0"
    "menuToShow\0openFolder\0processAnnouncements\0"
    "ivleLoginPage\0getAPIkey\0parse\0"
    "InitRegSettings\0QSettings*\0SetMyValue\0"
    "key\0value\0GetMyValue\0defaultValue\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x0a,
       3,    1,  117,    2, 0x0a,
       5,    1,  120,    2, 0x0a,
       6,    1,  123,    2, 0x0a,
       8,    0,  126,    2, 0x0a,
       9,    0,  127,    2, 0x0a,
      10,    1,  128,    2, 0x0a,
      11,    1,  131,    2, 0x0a,
      12,    0,  134,    2, 0x0a,
      13,    0,  135,    2, 0x08,
      14,    1,  136,    2, 0x08,
      16,    0,  139,    2, 0x08,
      17,    0,  140,    2, 0x08,
      18,    1,  141,    2, 0x08,
      19,    0,  144,    2, 0x08,
      20,    0,  145,    2, 0x08,
      21,    1,  146,    2, 0x08,
      22,    0,  149,    2, 0x08,
      24,    2,  150,    2, 0x08,
      27,    2,  155,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantList,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    0x80000000 | 23,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   25,   26,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QVariant,   25,   28,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->processToken((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateStatus((*reinterpret_cast< fetchingState(*)>(_a[1]))); break;
        case 2: _t->updateDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->logDownload((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateFiles(); break;
        case 5: _t->createFetcher(); break;
        case 6: _t->updateRecent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->processSettingsDialog((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 8: _t->checkCon(); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 11: _t->menuToShow(); break;
        case 12: _t->openFolder(); break;
        case 13: _t->processAnnouncements((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        case 14: _t->ivleLoginPage(); break;
        case 15: _t->getAPIkey(); break;
        case 16: _t->parse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: { QSettings* _r = _t->InitRegSettings();
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 18: _t->SetMyValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 19: { QVariant _r = _t->GetMyValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
