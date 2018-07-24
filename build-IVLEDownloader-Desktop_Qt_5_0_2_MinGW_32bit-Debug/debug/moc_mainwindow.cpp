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
    QByteArrayData data[28];
    char stringdata[366];
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
QT_MOC_LITERAL(12, 150, 21),
QT_MOC_LITERAL(13, 172, 13),
QT_MOC_LITERAL(14, 186, 33),
QT_MOC_LITERAL(15, 220, 10),
QT_MOC_LITERAL(16, 231, 10),
QT_MOC_LITERAL(17, 242, 20),
QT_MOC_LITERAL(18, 263, 13),
QT_MOC_LITERAL(19, 277, 9),
QT_MOC_LITERAL(20, 287, 5),
QT_MOC_LITERAL(21, 293, 15),
QT_MOC_LITERAL(22, 309, 10),
QT_MOC_LITERAL(23, 320, 10),
QT_MOC_LITERAL(24, 331, 3),
QT_MOC_LITERAL(25, 335, 5),
QT_MOC_LITERAL(26, 341, 10),
QT_MOC_LITERAL(27, 352, 12)
    },
    "MainWindow\0processToken\0\0updateStatus\0"
    "fetchingState\0updateDirectory\0logDownload\0"
    "filename\0updateFiles\0createFetcher\0"
    "updateRecent\0processSettingsDialog\0"
    "on_pushButton_clicked\0iconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
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
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x0a,
       3,    1,  112,    2, 0x0a,
       5,    1,  115,    2, 0x0a,
       6,    1,  118,    2, 0x0a,
       8,    0,  121,    2, 0x0a,
       9,    0,  122,    2, 0x0a,
      10,    1,  123,    2, 0x0a,
      11,    1,  126,    2, 0x0a,
      12,    0,  129,    2, 0x08,
      13,    1,  130,    2, 0x08,
      15,    0,  133,    2, 0x08,
      16,    0,  134,    2, 0x08,
      17,    1,  135,    2, 0x08,
      18,    0,  138,    2, 0x08,
      19,    0,  139,    2, 0x08,
      20,    1,  140,    2, 0x08,
      21,    0,  143,    2, 0x08,
      23,    2,  144,    2, 0x08,
      26,    2,  149,    2, 0x08,

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
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantList,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    0x80000000 | 22,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   24,   25,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QVariant,   24,   27,

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
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 10: _t->menuToShow(); break;
        case 11: _t->openFolder(); break;
        case 12: _t->processAnnouncements((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        case 13: _t->ivleLoginPage(); break;
        case 14: _t->getAPIkey(); break;
        case 15: _t->parse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { QSettings* _r = _t->InitRegSettings();
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = _r; }  break;
        case 17: _t->SetMyValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 18: { QVariant _r = _t->GetMyValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])));
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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
