/****************************************************************************
** Meta object code from reading C++ file 'tranceiver.h'
**
** Created: Thu Nov 3 12:01:13 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tranceiver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tranceiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tranceiver[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      34,   11,   11,   11, 0x05,
      50,   11,   11,   11, 0x05,
      75,   73,   11,   11, 0x05,
      97,   11,   11,   11, 0x05,
     117,   11,   11,   11, 0x05,
     137,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     161,   11,   11,   11, 0x0a,
     172,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tranceiver[] = {
    "Tranceiver\0\0receivedData(QString)\0"
    "workRequested()\0ImageReceived(QString)\0"
    ",\0nodeJoin(int,QString)\0tempAndHum(QString)\0"
    "receiveCompletely()\0motionDetected(QString)\0"
    "readData()\0doWork()\0"
};

const QMetaObject Tranceiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tranceiver,
      qt_meta_data_Tranceiver, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tranceiver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tranceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tranceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tranceiver))
        return static_cast<void*>(const_cast< Tranceiver*>(this));
    return QObject::qt_metacast(_clname);
}

int Tranceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: receivedData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: workRequested(); break;
        case 2: ImageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: nodeJoin((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: tempAndHum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: receiveCompletely(); break;
        case 6: motionDetected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: readData(); break;
        case 8: doWork(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Tranceiver::receivedData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tranceiver::workRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Tranceiver::ImageReceived(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tranceiver::nodeJoin(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tranceiver::tempAndHum(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Tranceiver::receiveCompletely()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Tranceiver::motionDetected(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
