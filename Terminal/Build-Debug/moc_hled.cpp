/****************************************************************************
** Meta object code from reading C++ file 'hled.h'
**
** Created: Wed Sep 28 16:46:14 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hled.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hled.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HLed[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,    6,    5,    5, 0x0a,
      29,    5,    5,    5, 0x0a,
      41,   38,    5,    5, 0x0a,
      54,    5,    5,    5, 0x2a,
      67,   63,    5,    5, 0x0a,
      81,    5,    5,    5, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_HLed[] = {
    "HLed\0\0color\0setColor(QColor)\0toggle()\0"
    "on\0turnOn(bool)\0turnOn()\0off\0turnOff(bool)\0"
    "turnOff()\0"
};

const QMetaObject HLed::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HLed,
      qt_meta_data_HLed, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HLed::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HLed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HLed::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HLed))
        return static_cast<void*>(const_cast< HLed*>(this));
    return QWidget::qt_metacast(_clname);
}

int HLed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: toggle(); break;
        case 2: turnOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: turnOn(); break;
        case 4: turnOff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: turnOff(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
