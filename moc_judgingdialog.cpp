/****************************************************************************
** Meta object code from reading C++ file 'judgingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "judgingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'judgingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JudgingDialog_t {
    QByteArrayData data[9];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JudgingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JudgingDialog_t qt_meta_stringdata_JudgingDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "JudgingDialog"
QT_MOC_LITERAL(1, 14, 17), // "stopJudgingSignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "stopJudgingSlot"
QT_MOC_LITERAL(4, 49, 18), // "singleCaseFinished"
QT_MOC_LITERAL(5, 68, 18), // "taskJudgingStarted"
QT_MOC_LITERAL(6, 87, 22), // "contestantJudgingStart"
QT_MOC_LITERAL(7, 110, 25), // "contestantJudgingFinished"
QT_MOC_LITERAL(8, 136, 12) // "compileError"

    },
    "JudgingDialog\0stopJudgingSignal\0\0"
    "stopJudgingSlot\0singleCaseFinished\0"
    "taskJudgingStarted\0contestantJudgingStart\0"
    "contestantJudgingFinished\0compileError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JudgingDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    4,   51,    2, 0x0a /* Public */,
       5,    1,   60,    2, 0x0a /* Public */,
       6,    1,   63,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x0a /* Public */,
       8,    2,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

       0        // eod
};

void JudgingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JudgingDialog *_t = static_cast<JudgingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopJudgingSignal(); break;
        case 1: _t->stopJudgingSlot(); break;
        case 2: _t->singleCaseFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->taskJudgingStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->contestantJudgingStart((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->contestantJudgingFinished(); break;
        case 6: _t->compileError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JudgingDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JudgingDialog::stopJudgingSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JudgingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_JudgingDialog.data,
      qt_meta_data_JudgingDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JudgingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JudgingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JudgingDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int JudgingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void JudgingDialog::stopJudgingSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
