/****************************************************************************
** Meta object code from reading C++ file 'environmentvariablesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "environmentvariablesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'environmentvariablesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EnvironmentVariablesDialog_t {
    QByteArrayData data[6];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EnvironmentVariablesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EnvironmentVariablesDialog_t qt_meta_stringdata_EnvironmentVariablesDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "EnvironmentVariablesDialog"
QT_MOC_LITERAL(1, 27, 16), // "addButtonClicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 17), // "editButtonClicked"
QT_MOC_LITERAL(4, 63, 19), // "deleteButtonClicked"
QT_MOC_LITERAL(5, 83, 22) // "viewerSelectionChanged"

    },
    "EnvironmentVariablesDialog\0addButtonClicked\0"
    "\0editButtonClicked\0deleteButtonClicked\0"
    "viewerSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EnvironmentVariablesDialog[] = {

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

void EnvironmentVariablesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EnvironmentVariablesDialog *_t = static_cast<EnvironmentVariablesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addButtonClicked(); break;
        case 1: _t->editButtonClicked(); break;
        case 2: _t->deleteButtonClicked(); break;
        case 3: _t->viewerSelectionChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EnvironmentVariablesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EnvironmentVariablesDialog.data,
      qt_meta_data_EnvironmentVariablesDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EnvironmentVariablesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnvironmentVariablesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EnvironmentVariablesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EnvironmentVariablesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
