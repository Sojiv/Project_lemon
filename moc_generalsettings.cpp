/****************************************************************************
** Meta object code from reading C++ file 'generalsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "generalsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generalsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeneralSettings_t {
    QByteArrayData data[11];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeneralSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeneralSettings_t qt_meta_stringdata_GeneralSettings = {
    {
QT_MOC_LITERAL(0, 0, 15), // "GeneralSettings"
QT_MOC_LITERAL(1, 16, 23), // "defaultFullScoreChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "defaultTimeLimitChanged"
QT_MOC_LITERAL(4, 65, 25), // "defaultMemoryLimitChanged"
QT_MOC_LITERAL(5, 91, 23), // "compileTimeLimitChanged"
QT_MOC_LITERAL(6, 115, 28), // "specialJudgeTimeLimitChanged"
QT_MOC_LITERAL(7, 144, 20), // "fileSizeLimitChanged"
QT_MOC_LITERAL(8, 165, 22), // "numberOfThreadsChanged"
QT_MOC_LITERAL(9, 188, 26), // "inputFileExtensionsChanged"
QT_MOC_LITERAL(10, 215, 27) // "outputFileExtensionsChanged"

    },
    "GeneralSettings\0defaultFullScoreChanged\0"
    "\0defaultTimeLimitChanged\0"
    "defaultMemoryLimitChanged\0"
    "compileTimeLimitChanged\0"
    "specialJudgeTimeLimitChanged\0"
    "fileSizeLimitChanged\0numberOfThreadsChanged\0"
    "inputFileExtensionsChanged\0"
    "outputFileExtensionsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeneralSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       3,    1,   62,    2, 0x08 /* Private */,
       4,    1,   65,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       6,    1,   71,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       8,    1,   77,    2, 0x08 /* Private */,
       9,    1,   80,    2, 0x08 /* Private */,
      10,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void GeneralSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GeneralSettings *_t = static_cast<GeneralSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->defaultFullScoreChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->defaultTimeLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->defaultMemoryLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->compileTimeLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->specialJudgeTimeLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->fileSizeLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->numberOfThreadsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->inputFileExtensionsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->outputFileExtensionsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GeneralSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GeneralSettings.data,
      qt_meta_data_GeneralSettings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GeneralSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeneralSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeneralSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GeneralSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
