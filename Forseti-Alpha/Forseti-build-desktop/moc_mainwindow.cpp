/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu May 5 18:52:00 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Forseti/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      48,   42,   11,   11, 0x08,
      81,   11,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,
     138,   11,   11,   11, 0x08,
     166,   11,   11,   11, 0x08,
     193,   11,   11,   11, 0x08,
     217,   11,   11,   11, 0x08,
     242,   11,   11,   11, 0x08,
     272,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_refrOFilesButton_clicked()\0"
    "index\0on_tabWidget_currentChanged(int)\0"
    "on_refreshButton_clicked()\0"
    "on_scanCryptoButton_clicked()\0"
    "on_saveProcButton_clicked()\0"
    "on_dumpAllButton_clicked()\0"
    "on_dumpButton_clicked()\0"
    "on_action_Qt_triggered()\0"
    "on_action_Version_triggered()\0"
    "on_action_Open_triggered()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_refrOFilesButton_clicked(); break;
        case 1: on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_refreshButton_clicked(); break;
        case 3: on_scanCryptoButton_clicked(); break;
        case 4: on_saveProcButton_clicked(); break;
        case 5: on_dumpAllButton_clicked(); break;
        case 6: on_dumpButton_clicked(); break;
        case 7: on_action_Qt_triggered(); break;
        case 8: on_action_Version_triggered(); break;
        case 9: on_action_Open_triggered(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
