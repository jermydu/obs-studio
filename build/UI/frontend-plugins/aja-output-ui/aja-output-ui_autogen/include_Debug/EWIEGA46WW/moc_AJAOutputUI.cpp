/****************************************************************************
** Meta object code from reading C++ file 'AJAOutputUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../UI/frontend-plugins/aja-output-ui/AJAOutputUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AJAOutputUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AJAOutputUI_t {
    QByteArrayData data[9];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AJAOutputUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AJAOutputUI_t qt_meta_stringdata_AJAOutputUI = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AJAOutputUI"
QT_MOC_LITERAL(1, 12, 23), // "on_outputButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "PropertiesChanged"
QT_MOC_LITERAL(4, 55, 18), // "OutputStateChanged"
QT_MOC_LITERAL(5, 74, 30), // "on_previewOutputButton_clicked"
QT_MOC_LITERAL(6, 105, 24), // "PreviewPropertiesChanged"
QT_MOC_LITERAL(7, 130, 25), // "PreviewOutputStateChanged"
QT_MOC_LITERAL(8, 156, 21) // "MiscPropertiesChanged"

    },
    "AJAOutputUI\0on_outputButton_clicked\0"
    "\0PropertiesChanged\0OutputStateChanged\0"
    "on_previewOutputButton_clicked\0"
    "PreviewPropertiesChanged\0"
    "PreviewOutputStateChanged\0"
    "MiscPropertiesChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AJAOutputUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x0a /* Public */,
       5,    0,   54,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       8,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void AJAOutputUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AJAOutputUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_outputButton_clicked(); break;
        case 1: _t->PropertiesChanged(); break;
        case 2: _t->OutputStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_previewOutputButton_clicked(); break;
        case 4: _t->PreviewPropertiesChanged(); break;
        case 5: _t->PreviewOutputStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->MiscPropertiesChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AJAOutputUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AJAOutputUI.data,
    qt_meta_data_AJAOutputUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AJAOutputUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AJAOutputUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AJAOutputUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AJAOutputUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
