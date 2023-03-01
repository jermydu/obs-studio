/****************************************************************************
** Meta object code from reading C++ file 'hotkey-edit.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../UI/hotkey-edit.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hotkey-edit.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OBSHotkeyLabel_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSHotkeyLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSHotkeyLabel_t qt_meta_stringdata_OBSHotkeyLabel = {
    {
QT_MOC_LITERAL(0, 0, 14) // "OBSHotkeyLabel"

    },
    "OBSHotkeyLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSHotkeyLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OBSHotkeyLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OBSHotkeyLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_OBSHotkeyLabel.data,
    qt_meta_data_OBSHotkeyLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OBSHotkeyLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSHotkeyLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OBSHotkeyLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int OBSHotkeyLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OBSHotkeyEdit_t {
    QByteArrayData data[10];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSHotkeyEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSHotkeyEdit_t qt_meta_stringdata_OBSHotkeyEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OBSHotkeyEdit"
QT_MOC_LITERAL(1, 14, 10), // "KeyChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 21), // "obs_key_combination_t"
QT_MOC_LITERAL(4, 48, 9), // "SearchKey"
QT_MOC_LITERAL(5, 58, 12), // "HandleNewKey"
QT_MOC_LITERAL(6, 71, 7), // "new_key"
QT_MOC_LITERAL(7, 79, 15), // "ReloadKeyLayout"
QT_MOC_LITERAL(8, 95, 8), // "ResetKey"
QT_MOC_LITERAL(9, 104, 8) // "ClearKey"

    },
    "OBSHotkeyEdit\0KeyChanged\0\0"
    "obs_key_combination_t\0SearchKey\0"
    "HandleNewKey\0new_key\0ReloadKeyLayout\0"
    "ResetKey\0ClearKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSHotkeyEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   50,    2, 0x0a /* Public */,
       7,    0,   53,    2, 0x0a /* Public */,
       8,    0,   54,    2, 0x0a /* Public */,
       9,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OBSHotkeyEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSHotkeyEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->KeyChanged((*reinterpret_cast< obs_key_combination_t(*)>(_a[1]))); break;
        case 1: _t->SearchKey((*reinterpret_cast< obs_key_combination_t(*)>(_a[1]))); break;
        case 2: _t->HandleNewKey((*reinterpret_cast< obs_key_combination_t(*)>(_a[1]))); break;
        case 3: _t->ReloadKeyLayout(); break;
        case 4: _t->ResetKey(); break;
        case 5: _t->ClearKey(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OBSHotkeyEdit::*)(obs_key_combination_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OBSHotkeyEdit::KeyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OBSHotkeyEdit::*)(obs_key_combination_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OBSHotkeyEdit::SearchKey)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OBSHotkeyEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_OBSHotkeyEdit.data,
    qt_meta_data_OBSHotkeyEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OBSHotkeyEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSHotkeyEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OBSHotkeyEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int OBSHotkeyEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OBSHotkeyEdit::KeyChanged(obs_key_combination_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OBSHotkeyEdit::SearchKey(obs_key_combination_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OBSHotkeyWidget_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSHotkeyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSHotkeyWidget_t qt_meta_stringdata_OBSHotkeyWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OBSHotkeyWidget"
QT_MOC_LITERAL(1, 16, 10), // "KeyChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "SearchKey"
QT_MOC_LITERAL(4, 38, 21), // "obs_key_combination_t"
QT_MOC_LITERAL(5, 60, 21), // "HandleChangedBindings"
QT_MOC_LITERAL(6, 82, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(7, 96, 3) // "id_"

    },
    "OBSHotkeyWidget\0KeyChanged\0\0SearchKey\0"
    "obs_key_combination_t\0HandleChangedBindings\0"
    "obs_hotkey_id\0id_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSHotkeyWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void OBSHotkeyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSHotkeyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->KeyChanged(); break;
        case 1: _t->SearchKey((*reinterpret_cast< obs_key_combination_t(*)>(_a[1]))); break;
        case 2: _t->HandleChangedBindings((*reinterpret_cast< obs_hotkey_id(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OBSHotkeyWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OBSHotkeyWidget::KeyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OBSHotkeyWidget::*)(obs_key_combination_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OBSHotkeyWidget::SearchKey)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OBSHotkeyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OBSHotkeyWidget.data,
    qt_meta_data_OBSHotkeyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OBSHotkeyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSHotkeyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OBSHotkeyWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OBSHotkeyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OBSHotkeyWidget::KeyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OBSHotkeyWidget::SearchKey(obs_key_combination_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
