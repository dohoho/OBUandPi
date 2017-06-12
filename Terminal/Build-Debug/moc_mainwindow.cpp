/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu Nov 3 12:01:06 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,   11,   11,   11, 0x08,
      55,   11,   11,   11, 0x08,
      72,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     117,   11,   11,   11, 0x08,
     139,   11,   11,   11, 0x08,
     156,   11,   11,   11, 0x08,
     179,   11,   11,   11, 0x08,
     203,   11,   11,   11, 0x08,
     231,  229,   11,   11, 0x08,
     252,   11,   11,   11, 0x08,
     279,   11,   11,   11, 0x08,
     298,   11,   11,   11, 0x08,
     312,   11,   11,   11, 0x08,
     329,  229,   11,   11, 0x08,
     353,   11,   11,   11, 0x08,
     378,   11,   11,   11, 0x08,
     397,   11,   11,   11, 0x08,
     416,   11,   11,   11, 0x08,
     427,   11,   11,   11, 0x08,
     447,   11,   11,   11, 0x08,
     470,   11,   11,   11, 0x08,
     487,   11,   11,   11, 0x08,
     518,   11,   11,   11, 0x08,
     551,   11,   11,   11, 0x08,
     577,   11,   11,   11, 0x08,
     599,   11,   11,   11, 0x08,
     617,   11,   11,   11, 0x08,
     633,   11,   11,   11, 0x08,
     645,   11,   11,   11, 0x08,
     657,   11,   11,   11, 0x08,
     669,   11,   11,   11, 0x08,
     684,   11,   11,   11, 0x08,
     702,   11,   11,   11, 0x08,
     726,   11,   11,   11, 0x08,
     744,   11,   11,   11, 0x08,
     762,   11,   11,   11, 0x08,
     777,   11,   11,   11, 0x08,
     798,   11,   11,   11, 0x08,
     819,   11,   11,   11, 0x08,
     831,   11,   11,   11, 0x08,
     848,   11,   11,   11, 0x08,
     861,   11,   11,   11, 0x08,
     877,   11,   11,   11, 0x08,

 // methods: signature, parameters, type, tag, flags
     888,  229,   11,   11, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0readySend()\0"
    "on_btngetNearestNode_clicked()\0"
    "onOptimizeMove()\0on_btnPrint_clicked()\0"
    "on_btnUpdate_clicked()\0on_btnClear_clicked()\0"
    "Send_Broadcast()\0autoTakePhoto(QString)\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0,\0"
    "sendCommand(int,int)\0onOpenCloseButtonClicked()\0"
    "onGpsData(QString)\0initMap(bool)\0"
    "initListSensor()\0onNodeJoin(int,QString)\0"
    "onImageReceived(QString)\0addMarker(QString)\0"
    "removeAllMarkers()\0ClearMap()\0"
    "ShowAllSensor(bool)\0ShowJoinedSensor(bool)\0"
    "zoomMap(QString)\0gotoPlaceByCoordinate(QString)\0"
    "populateJavaScriptWindowObject()\0"
    "onTranceiverData(QString)\0"
    "onTempAndHum(QString)\0onGpsStatus(bool)\0"
    "startLinphone()\0ShowAbout()\0RetaskOne()\0"
    "RetaskAll()\0AddNewSensor()\0EditSensorPlace()\0"
    "ShowSensorInformation()\0StartupLocation()\0"
    "SetupSerialPort()\0SendToServer()\0"
    "on_btnExit_clicked()\0on_btnView_clicked()\0"
    "sendtoWeb()\0sendImageToWeb()\0GetDataWeb()\0"
    "sendBroadcast()\0makePlot()\0"
    "mySendCommand(int,int)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readySend(); break;
        case 1: on_btngetNearestNode_clicked(); break;
        case 2: onOptimizeMove(); break;
        case 3: on_btnPrint_clicked(); break;
        case 4: on_btnUpdate_clicked(); break;
        case 5: on_btnClear_clicked(); break;
        case 6: Send_Broadcast(); break;
        case 7: autoTakePhoto((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: on_pushButton_clicked(); break;
        case 9: on_pushButton_2_clicked(); break;
        case 10: sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: onOpenCloseButtonClicked(); break;
        case 12: onGpsData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: initMap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: initListSensor(); break;
        case 15: onNodeJoin((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: onImageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: addMarker((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: removeAllMarkers(); break;
        case 19: ClearMap(); break;
        case 20: ShowAllSensor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: ShowJoinedSensor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: zoomMap((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: gotoPlaceByCoordinate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: populateJavaScriptWindowObject(); break;
        case 25: onTranceiverData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: onTempAndHum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: onGpsStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: startLinphone(); break;
        case 29: ShowAbout(); break;
        case 30: RetaskOne(); break;
        case 31: RetaskAll(); break;
        case 32: AddNewSensor(); break;
        case 33: EditSensorPlace(); break;
        case 34: ShowSensorInformation(); break;
        case 35: StartupLocation(); break;
        case 36: SetupSerialPort(); break;
        case 37: SendToServer(); break;
        case 38: on_btnExit_clicked(); break;
        case 39: on_btnView_clicked(); break;
        case 40: sendtoWeb(); break;
        case 41: sendImageToWeb(); break;
        case 42: GetDataWeb(); break;
        case 43: sendBroadcast(); break;
        case 44: makePlot(); break;
        case 45: mySendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 46;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::readySend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
