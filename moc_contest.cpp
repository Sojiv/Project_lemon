/****************************************************************************
** Meta object code from reading C++ file 'contest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "contest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Contest_t {
    QByteArrayData data[17];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Contest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Contest_t qt_meta_stringdata_Contest = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Contest"
QT_MOC_LITERAL(1, 8, 22), // "taskAddedForContestant"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "taskDeletedForContestant"
QT_MOC_LITERAL(4, 57, 18), // "taskAddedForViewer"
QT_MOC_LITERAL(5, 76, 20), // "taskDeletedForViewer"
QT_MOC_LITERAL(6, 97, 19), // "problemTitleChanged"
QT_MOC_LITERAL(7, 117, 18), // "singleCaseFinished"
QT_MOC_LITERAL(8, 136, 18), // "taskJudgingStarted"
QT_MOC_LITERAL(9, 155, 19), // "taskJudgingFinished"
QT_MOC_LITERAL(10, 175, 22), // "contestantJudgingStart"
QT_MOC_LITERAL(11, 198, 25), // "contestantJudgingFinished"
QT_MOC_LITERAL(12, 224, 12), // "compileError"
QT_MOC_LITERAL(13, 237, 17), // "stopJudgingSignal"
QT_MOC_LITERAL(14, 255, 5), // "judge"
QT_MOC_LITERAL(15, 261, 8), // "judgeAll"
QT_MOC_LITERAL(16, 270, 15) // "stopJudgingSlot"

    },
    "Contest\0taskAddedForContestant\0\0"
    "taskDeletedForContestant\0taskAddedForViewer\0"
    "taskDeletedForViewer\0problemTitleChanged\0"
    "singleCaseFinished\0taskJudgingStarted\0"
    "taskJudgingFinished\0contestantJudgingStart\0"
    "contestantJudgingFinished\0compileError\0"
    "stopJudgingSignal\0judge\0judgeAll\0"
    "stopJudgingSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Contest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    1,   95,    2, 0x06 /* Public */,
       4,    0,   98,    2, 0x06 /* Public */,
       5,    1,   99,    2, 0x06 /* Public */,
       6,    0,  102,    2, 0x06 /* Public */,
       7,    4,  103,    2, 0x06 /* Public */,
       8,    1,  112,    2, 0x06 /* Public */,
       9,    0,  115,    2, 0x06 /* Public */,
      10,    1,  116,    2, 0x06 /* Public */,
      11,    0,  119,    2, 0x06 /* Public */,
      12,    2,  120,    2, 0x06 /* Public */,
      13,    0,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  126,    2, 0x0a /* Public */,
      14,    2,  129,    2, 0x0a /* Public */,
      15,    0,  134,    2, 0x0a /* Public */,
      16,    0,  135,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Contest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Contest *_t = static_cast<Contest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->taskAddedForContestant(); break;
        case 1: _t->taskDeletedForContestant((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->taskAddedForViewer(); break;
        case 3: _t->taskDeletedForViewer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->problemTitleChanged(); break;
        case 5: _t->singleCaseFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->taskJudgingStarted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->taskJudgingFinished(); break;
        case 8: _t->contestantJudgingStart((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->contestantJudgingFinished(); break;
        case 10: _t->compileError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->stopJudgingSignal(); break;
        case 12: _t->judge((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->judge((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->judgeAll(); break;
        case 15: _t->stopJudgingSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Contest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::taskAddedForContestant)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Contest::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::taskDeletedForContestant)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Contest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::taskAddedForViewer)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Contest::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::taskDeletedForViewer)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Contest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::problemTitleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Contest::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::singleCaseFinished)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Contest::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::taskJudgingStarted)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Contest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::taskJudgingFinished)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Contest::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::contestantJudgingStart)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Contest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::contestantJudgingFinished)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Contest::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::compileError)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Contest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contest::stopJudgingSignal)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Contest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Contest.data,
      qt_meta_data_Contest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Contest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Contest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Contest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Contest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Contest::taskAddedForContestant()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Contest::taskDeletedForContestant(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Contest::taskAddedForViewer()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Contest::taskDeletedForViewer(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Contest::problemTitleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Contest::singleCaseFinished(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Contest::taskJudgingStarted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Contest::taskJudgingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Contest::contestantJudgingStart(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Contest::contestantJudgingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Contest::compileError(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Contest::stopJudgingSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
