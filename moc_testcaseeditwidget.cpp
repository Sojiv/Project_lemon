/****************************************************************************
** Meta object code from reading C++ file 'testcaseeditwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "testcaseeditwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testcaseeditwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestCaseEditWidget_t {
    QByteArrayData data[11];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestCaseEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestCaseEditWidget_t qt_meta_stringdata_TestCaseEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TestCaseEditWidget"
QT_MOC_LITERAL(1, 19, 15), // "dataPathChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "addSingleCase"
QT_MOC_LITERAL(4, 50, 16), // "deleteSingleCase"
QT_MOC_LITERAL(5, 67, 16), // "fullScoreChanged"
QT_MOC_LITERAL(6, 84, 16), // "timeLimitChanged"
QT_MOC_LITERAL(7, 101, 18), // "memoryLimitChanged"
QT_MOC_LITERAL(8, 120, 24), // "fileListSelectionChanged"
QT_MOC_LITERAL(9, 145, 19), // "fileListItemChanged"
QT_MOC_LITERAL(10, 165, 17) // "QTableWidgetItem*"

    },
    "TestCaseEditWidget\0dataPathChanged\0\0"
    "addSingleCase\0deleteSingleCase\0"
    "fullScoreChanged\0timeLimitChanged\0"
    "memoryLimitChanged\0fileListSelectionChanged\0"
    "fileListItemChanged\0QTableWidgetItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestCaseEditWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    1,   57,    2, 0x08 /* Private */,
       6,    1,   60,    2, 0x08 /* Private */,
       7,    1,   63,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,

       0        // eod
};

void TestCaseEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestCaseEditWidget *_t = static_cast<TestCaseEditWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataPathChanged(); break;
        case 1: _t->addSingleCase(); break;
        case 2: _t->deleteSingleCase(); break;
        case 3: _t->fullScoreChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->timeLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->memoryLimitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->fileListSelectionChanged(); break;
        case 7: _t->fileListItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TestCaseEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestCaseEditWidget::dataPathChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestCaseEditWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TestCaseEditWidget.data,
      qt_meta_data_TestCaseEditWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestCaseEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestCaseEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestCaseEditWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TestCaseEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void TestCaseEditWidget::dataPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
