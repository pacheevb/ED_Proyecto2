/****************************************************************************
** Meta object code from reading C++ file 'matrizaerolinea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../matrizaerolinea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'matrizaerolinea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_matrizAerolinea_t {
    QByteArrayData data[11];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_matrizAerolinea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_matrizAerolinea_t qt_meta_stringdata_matrizAerolinea = {
    {
QT_MOC_LITERAL(0, 0, 15), // "matrizAerolinea"
QT_MOC_LITERAL(1, 16, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "on_btn_dijkstra_clicked"
QT_MOC_LITERAL(4, 63, 19), // "on_btn_prim_clicked"
QT_MOC_LITERAL(5, 83, 22), // "on_btn_kruskal_clicked"
QT_MOC_LITERAL(6, 106, 28), // "on_btn_agregarCiudad_clicked"
QT_MOC_LITERAL(7, 135, 26), // "on_tableWidget_itemChanged"
QT_MOC_LITERAL(8, 162, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(9, 180, 4), // "item"
QT_MOC_LITERAL(10, 185, 20) // "on_btn_floyd_clicked"

    },
    "matrizAerolinea\0on_pushButton_clicked\0"
    "\0on_btn_dijkstra_clicked\0on_btn_prim_clicked\0"
    "on_btn_kruskal_clicked\0"
    "on_btn_agregarCiudad_clicked\0"
    "on_tableWidget_itemChanged\0QTableWidgetItem*\0"
    "item\0on_btn_floyd_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_matrizAerolinea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void matrizAerolinea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        matrizAerolinea *_t = static_cast<matrizAerolinea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_btn_dijkstra_clicked(); break;
        case 2: _t->on_btn_prim_clicked(); break;
        case 3: _t->on_btn_kruskal_clicked(); break;
        case 4: _t->on_btn_agregarCiudad_clicked(); break;
        case 5: _t->on_tableWidget_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_btn_floyd_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject matrizAerolinea::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_matrizAerolinea.data,
      qt_meta_data_matrizAerolinea,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *matrizAerolinea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *matrizAerolinea::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_matrizAerolinea.stringdata0))
        return static_cast<void*>(const_cast< matrizAerolinea*>(this));
    return QDialog::qt_metacast(_clname);
}

int matrizAerolinea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
