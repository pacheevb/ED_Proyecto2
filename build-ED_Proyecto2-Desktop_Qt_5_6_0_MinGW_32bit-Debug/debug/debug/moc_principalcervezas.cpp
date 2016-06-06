/****************************************************************************
** Meta object code from reading C++ file 'principalcervezas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../principalcervezas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'principalcervezas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_principalCervezas_t {
    QByteArrayData data[6];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_principalCervezas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_principalCervezas_t qt_meta_stringdata_principalCervezas = {
    {
QT_MOC_LITERAL(0, 0, 17), // "principalCervezas"
QT_MOC_LITERAL(1, 18, 30), // "on_btn_registroFamilia_clicked"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 30), // "on_btn_registroCerveza_clicked"
QT_MOC_LITERAL(4, 81, 28), // "on_btn_buscarCerveza_clicked"
QT_MOC_LITERAL(5, 110, 29) // "on_btn_registroEstilo_clicked"

    },
    "principalCervezas\0on_btn_registroFamilia_clicked\0"
    "\0on_btn_registroCerveza_clicked\0"
    "on_btn_buscarCerveza_clicked\0"
    "on_btn_registroEstilo_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_principalCervezas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void principalCervezas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        principalCervezas *_t = static_cast<principalCervezas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_registroFamilia_clicked(); break;
        case 1: _t->on_btn_registroCerveza_clicked(); break;
        case 2: _t->on_btn_buscarCerveza_clicked(); break;
        case 3: _t->on_btn_registroEstilo_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject principalCervezas::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_principalCervezas.data,
      qt_meta_data_principalCervezas,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *principalCervezas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *principalCervezas::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_principalCervezas.stringdata0))
        return static_cast<void*>(const_cast< principalCervezas*>(this));
    return QDialog::qt_metacast(_clname);
}

int principalCervezas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
