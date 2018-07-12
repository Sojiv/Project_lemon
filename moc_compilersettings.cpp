/****************************************************************************
** Meta object code from reading C++ file 'compilersettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "compilersettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compilersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CompilerSettings_t {
    QByteArrayData data[10];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CompilerSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CompilerSettings_t qt_meta_stringdata_CompilerSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CompilerSettings"
QT_MOC_LITERAL(1, 17, 14), // "moveUpCompiler"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "moveDownCompiler"
QT_MOC_LITERAL(4, 50, 11), // "addCompiler"
QT_MOC_LITERAL(5, 62, 14), // "deleteCompiler"
QT_MOC_LITERAL(6, 77, 19), // "compilerNameChanged"
QT_MOC_LITERAL(7, 97, 23), // "sourceExtensionsChanged"
QT_MOC_LITERAL(8, 121, 29), // "compilerListCurrentRowChanged"
QT_MOC_LITERAL(9, 151, 21) // "advancedButtonClicked"

    },
    "CompilerSettings\0moveUpCompiler\0\0"
    "moveDownCompiler\0addCompiler\0"
    "deleteCompiler\0compilerNameChanged\0"
    "sourceExtensionsChanged\0"
    "compilerListCurrentRowChanged\0"
    "advancedButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompilerSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       8,    0,   64,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CompilerSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CompilerSettings *_t = static_cast<CompilerSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moveUpCompiler(); break;
        case 1: _t->moveDownCompiler(); break;
        case 2: _t->addCompiler(); break;
        case 3: _t->deleteCompiler(); break;
        case 4: _t->compilerNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->sourceExtensionsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->compilerListCurrentRowChanged(); break;
        case 7: _t->advancedButtonClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CompilerSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CompilerSettings.data,
      qt_meta_data_CompilerSettings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CompilerSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompilerSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CompilerSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CompilerSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
