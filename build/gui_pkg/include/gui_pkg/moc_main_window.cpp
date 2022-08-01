/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui_pkg/include/gui_pkg/main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[390];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "UpdateGUI"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 24), // "ResetControlButtonValues"
QT_MOC_LITERAL(4, 47, 14), // "unsigned char&"
QT_MOC_LITERAL(5, 62, 10), // "button_val"
QT_MOC_LITERAL(6, 73, 30), // "on_b_enable_cyclic_pos_clicked"
QT_MOC_LITERAL(7, 104, 29), // "on_b_enable_cylic_vel_clicked"
QT_MOC_LITERAL(8, 134, 23), // "on_b_enable_vel_clicked"
QT_MOC_LITERAL(9, 158, 23), // "on_b_enable_pos_clicked"
QT_MOC_LITERAL(10, 182, 22), // "on_b_init_ecat_clicked"
QT_MOC_LITERAL(11, 205, 24), // "on_b_reinit_ecat_clicked"
QT_MOC_LITERAL(12, 230, 26), // "on_b_enable_drives_clicked"
QT_MOC_LITERAL(13, 257, 27), // "on_b_disable_drives_clicked"
QT_MOC_LITERAL(14, 285, 29), // "on_b_enter_cyclic_pdo_clicked"
QT_MOC_LITERAL(15, 315, 28), // "on_b_stop_cyclic_pdo_clicked"
QT_MOC_LITERAL(16, 344, 27), // "on_b_emergency_mode_clicked"
QT_MOC_LITERAL(17, 372, 17) // "on_b_send_clicked"

    },
    "MainWindow\0UpdateGUI\0\0ResetControlButtonValues\0"
    "unsigned char&\0button_val\0"
    "on_b_enable_cyclic_pos_clicked\0"
    "on_b_enable_cylic_vel_clicked\0"
    "on_b_enable_vel_clicked\0on_b_enable_pos_clicked\0"
    "on_b_init_ecat_clicked\0on_b_reinit_ecat_clicked\0"
    "on_b_enable_drives_clicked\0"
    "on_b_disable_drives_clicked\0"
    "on_b_enter_cyclic_pdo_clicked\0"
    "on_b_stop_cyclic_pdo_clicked\0"
    "on_b_emergency_mode_clicked\0"
    "on_b_send_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    1,   85,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateGUI(); break;
        case 1: _t->ResetControlButtonValues((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 2: _t->on_b_enable_cyclic_pos_clicked(); break;
        case 3: _t->on_b_enable_cylic_vel_clicked(); break;
        case 4: _t->on_b_enable_vel_clicked(); break;
        case 5: _t->on_b_enable_pos_clicked(); break;
        case 6: _t->on_b_init_ecat_clicked(); break;
        case 7: _t->on_b_reinit_ecat_clicked(); break;
        case 8: _t->on_b_enable_drives_clicked(); break;
        case 9: _t->on_b_disable_drives_clicked(); break;
        case 10: _t->on_b_enter_cyclic_pdo_clicked(); break;
        case 11: _t->on_b_stop_cyclic_pdo_clicked(); break;
        case 12: _t->on_b_emergency_mode_clicked(); break;
        case 13: _t->on_b_send_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
