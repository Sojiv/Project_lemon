/****************************************************************************
** Meta object code from reading C++ file 'summarytree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "summarytree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'summarytree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SummaryTree_t {
    QByteArrayData data[11];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SummaryTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SummaryTree_t qt_meta_stringdata_SummaryTree = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SummaryTree"
QT_MOC_LITERAL(1, 12, 7), // "addTask"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "addTestCase"
QT_MOC_LITERAL(4, 33, 12), // "addTestCases"
QT_MOC_LITERAL(5, 46, 10), // "deleteTask"
QT_MOC_LITERAL(6, 57, 14), // "deleteTestCase"
QT_MOC_LITERAL(7, 72, 16), // "selectionChanged"
QT_MOC_LITERAL(8, 89, 11), // "itemChanged"
QT_MOC_LITERAL(9, 101, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(10, 118, 12) // "titleChanged"

    },
    "SummaryTree\0addTask\0\0addTestCase\0"
    "addTestCases\0deleteTask\0deleteTestCase\0"
    "selectionChanged\0itemChanged\0"
    "QTreeWidgetItem*\0titleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SummaryTree[] = {

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
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void SummaryTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SummaryTree *_t = static_cast<SummaryTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addTask(); break;
        case 1: _t->addTestCase(); break;
        case 2: _t->addTestCases(); break;
        case 3: _t->deleteTask(); break;
        case 4: _t->deleteTestCase(); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SummaryTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_SummaryTree.data,
      qt_meta_data_SummaryTree,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SummaryTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SummaryTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SummaryTree.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int SummaryTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
