/****************************************************************************
** Meta object code from reading C++ file 'addtestcaseswizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addtestcaseswizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addtestcaseswizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddTestCasesWizard_t {
    QByteArrayData data[9];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddTestCasesWizard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddTestCasesWizard_t qt_meta_stringdata_AddTestCasesWizard = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AddTestCasesWizard"
QT_MOC_LITERAL(1, 19, 16), // "fullScoreChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "timeLimitChanged"
QT_MOC_LITERAL(4, 54, 18), // "memoryLimitChanged"
QT_MOC_LITERAL(5, 73, 24), // "inputFilesPatternChanged"
QT_MOC_LITERAL(6, 98, 25), // "outputFilesPatternChanged"
QT_MOC_LITERAL(7, 124, 11), // "addArgument"
QT_MOC_LITERAL(8, 136, 14) // "deleteArgument"

    },
    "AddTestCasesWizard\0fullScoreChanged\0"
    "\0timeLimitChanged\0memoryLimitChanged\0"
    "inputFilesPatternChanged\0"
    "outputFilesPatternChanged\0addArgument\0"
    "deleteArgument"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddTestCasesWizard[] = {

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
       1,    1,   49,    2, 0x08 /* Private */,
       3,    1,   52,    2, 0x08 /* Private */,
       4,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    1,   61,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddTestCasesWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddTestCasesWizard *_t = static_cast<AddTestCasesWizard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fullScoreChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->timeLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->memoryLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->inputFilesPatternChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->outputFilesPatternChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->addArgument(); break;
        case 6: _t->deleteArgument(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddTestCasesWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_AddTestCasesWizard.data,
      qt_meta_data_AddTestCasesWizard,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddTestCasesWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddTestCasesWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddTestCasesWizard.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int AddTestCasesWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
