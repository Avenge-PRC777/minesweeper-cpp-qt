/****************************************************************************
** Meta object code from reading C++ file 'box.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "box.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'box.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Box[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    5,    4,    4, 0x0a,
      26,    4,   21,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Box[] = {
    "Box\0\0b\0setBomb(bool)\0bool\0boxClicked()\0"
};

void Box::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Box *_t = static_cast<Box *>(_o);
        switch (_id) {
        case 0: _t->setBomb((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->boxClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Box::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Box::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_Box,
      qt_meta_data_Box, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Box::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Box::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Box::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Box))
        return static_cast<void*>(const_cast< Box*>(this));
    return QPushButton::qt_metacast(_clname);
}

int Box::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE