/****************************************************************************
** Meta object code from reading C++ file 'studentlogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../studentlogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentlogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StudentLogin_t {
    QByteArrayData data[11];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StudentLogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StudentLogin_t qt_meta_stringdata_StudentLogin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "StudentLogin"
QT_MOC_LITERAL(1, 13, 21), // "on_treeWidget_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "index"
QT_MOC_LITERAL(4, 42, 21), // "on_btn_search_clicked"
QT_MOC_LITERAL(5, 64, 11), // "update_exam"
QT_MOC_LITERAL(6, 76, 11), // "update_info"
QT_MOC_LITERAL(7, 88, 21), // "on_btn_cancel_clicked"
QT_MOC_LITERAL(8, 110, 23), // "on_btn_need_upd_clicked"
QT_MOC_LITERAL(9, 134, 21), // "on_btn_update_clicked"
QT_MOC_LITERAL(10, 156, 19) // "on_btn_exit_clicked"

    },
    "StudentLogin\0on_treeWidget_clicked\0\0"
    "index\0on_btn_search_clicked\0update_exam\0"
    "update_info\0on_btn_cancel_clicked\0"
    "on_btn_need_upd_clicked\0on_btn_update_clicked\0"
    "on_btn_exit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StudentLogin[] = {

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
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    0,   61,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StudentLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StudentLogin *_t = static_cast<StudentLogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_treeWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_btn_search_clicked(); break;
        case 2: _t->update_exam((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->update_info(); break;
        case 4: _t->on_btn_cancel_clicked(); break;
        case 5: _t->on_btn_need_upd_clicked(); break;
        case 6: _t->on_btn_update_clicked(); break;
        case 7: _t->on_btn_exit_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject StudentLogin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StudentLogin.data,
      qt_meta_data_StudentLogin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StudentLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StudentLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StudentLogin.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StudentLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
