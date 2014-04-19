/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu 17. Apr 20:13:28 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   12,   11,   11, 0x05,
      59,   52,   11,   11, 0x05,
      75,   11,   11,   11, 0x05,
     122,   86,   11,   11, 0x05,
     176,  150,   11,   11, 0x25,
     205,  200,   11,   11, 0x25,
     229,  224,   11,   11, 0x05,
     247,  200,   11,   11, 0x05,
     314,  265,   11,   11, 0x05,
     362,  348,   11,   11, 0x05,
     401,  393,   11,   11, 0x05,
     426,  418,   11,   11, 0x05,
     446,   11,   11,   11, 0x05,
     460,   11,   11,   11, 0x05,
     476,   11,   11,   11, 0x05,
     493,   11,   11,   11, 0x05,
     504,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     529,   11,   11,   11, 0x08,
     540,   11,   11,   11, 0x08,
     550,   11,   11,   11, 0x08,
     557,   11,   11,   11, 0x08,
     564,   11,   11,   11, 0x08,
     571,   11,   11,   11, 0x08,
     578,   11,   11,   11, 0x08,
     585,   11,   11,   11, 0x08,
     592,   11,   11,   11, 0x08,
     599,   11,   11,   11, 0x08,
     606,   11,   11,   11, 0x08,
     616,   11,   11,   11, 0x08,
     627,   11,   11,   11, 0x08,
     635,   11,   11,   11, 0x08,
     646,   11,   11,   11, 0x08,
     653,   11,   11,   11, 0x08,
     676,  667,   11,   11, 0x08,
     693,   52,   11,   11, 0x08,
     712,   11,   11,   11, 0x08,
     727,   11,   11,   11, 0x08,
     743,   11,   11,   11, 0x08,
     767,   11,   11,   11, 0x08,
     785,  781,   11,   11, 0x08,
     811,  806,   11,   11, 0x08,
     840,  781,   11,   11, 0x08,
     864,  781,   11,   11, 0x08,
     884,   11,   11,   11, 0x08,
     897,   11,   11,   11, 0x08,
     909,   11,   11,   11, 0x08,
     934,   11,   11,   11, 0x08,
     946,   11,   11,   11, 0x08,
     982,  959,   11,   11, 0x08,
    1017,   11,   11,   11, 0x08,
    1034, 1030,   11,   11, 0x08,
    1057,   11,   11,   11, 0x08,
    1077,   11,   11,   11, 0x08,
    1098,   11,   11,   11, 0x08,
    1109,   11,   11,   11, 0x08,
    1131,   11,   11,   11, 0x08,
    1175, 1154,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0port,baudRate\0"
    "openPort(QString,QString)\0reopen\0"
    "closePort(bool)\0shutdown()\0"
    "line,recordResponseOnFail,waitCount\0"
    "sendGcode(QString,bool,int)\0"
    "line,recordResponseOnFail\0"
    "sendGcode(QString,bool)\0line\0"
    "sendGcode(QString)\0path\0sendFile(QString)\0"
    "gotoXYZC(QString)\0"
    "axis,coord,inv,absoluteAfterAxisAdj,sliderZCount\0"
    "axisAdj(char,float,bool,bool,int)\0"
    "controlParams\0setResponseWait(ControlParams)\0"
    "percent\0setProgress(int)\0runtime\0"
    "setRuntime(QString)\0sendSetHome()\0"
    "sendGrblReset()\0sendGrblUnlock()\0"
    "goToHome()\0setItems(QList<PosItem>)\0"
    "openPort()\0setGRBL()\0decX()\0decY()\0"
    "decZ()\0decC()\0incC()\0incX()\0incY()\0"
    "incZ()\0setHome()\0gotoXYZC()\0begin()\0"
    "openFile()\0stop()\0stopSending()\0"
    "sendCode\0portIsOpen(bool)\0portIsClosed(bool)\0"
    "adjustedAxis()\0toggleSpindle()\0"
    "toggleRestoreAbsolute()\0setSettings()\0"
    "msg\0receiveList(QString)\0list\0"
    "receiveListFull(QStringList)\0"
    "receiveListOut(QString)\0receiveMsg(QString)\0"
    "getOptions()\0showAbout()\0"
    "enableGrblDialogButton()\0grblReset()\0"
    "grblUnlock()\0machineCoord,workCoord\0"
    "updateCoordinates(Coord3D,Coord3D)\0"
    "goHomeSafe()\0pos\0zJogSliderDisplay(int)\0"
    "zJogSliderPressed()\0zJogSliderReleased()\0"
    "doScroll()\0statusSliderPressed()\0"
    "statusSliderReleased()\0commandCount,running\0"
    "setQueuedCommands(int,bool)\0"
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
        case 0: openPort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: closePort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: shutdown(); break;
        case 3: sendGcode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: sendGcode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: sendGcode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: sendFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: gotoXYZC((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: axisAdj((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 9: setResponseWait((*reinterpret_cast< ControlParams(*)>(_a[1]))); break;
        case 10: setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: setRuntime((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: sendSetHome(); break;
        case 13: sendGrblReset(); break;
        case 14: sendGrblUnlock(); break;
        case 15: goToHome(); break;
        case 16: setItems((*reinterpret_cast< QList<PosItem>(*)>(_a[1]))); break;
        case 17: openPort(); break;
        case 18: setGRBL(); break;
        case 19: decX(); break;
        case 20: decY(); break;
        case 21: decZ(); break;
        case 22: decC(); break;
        case 23: incC(); break;
        case 24: incX(); break;
        case 25: incY(); break;
        case 26: incZ(); break;
        case 27: setHome(); break;
        case 28: gotoXYZC(); break;
        case 29: begin(); break;
        case 30: openFile(); break;
        case 31: stop(); break;
        case 32: stopSending(); break;
        case 33: portIsOpen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: portIsClosed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: adjustedAxis(); break;
        case 36: toggleSpindle(); break;
        case 37: toggleRestoreAbsolute(); break;
        case 38: setSettings(); break;
        case 39: receiveList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: receiveListFull((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 41: receiveListOut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 42: receiveMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 43: getOptions(); break;
        case 44: showAbout(); break;
        case 45: enableGrblDialogButton(); break;
        case 46: grblReset(); break;
        case 47: grblUnlock(); break;
        case 48: updateCoordinates((*reinterpret_cast< Coord3D(*)>(_a[1])),(*reinterpret_cast< Coord3D(*)>(_a[2]))); break;
        case 49: goHomeSafe(); break;
        case 50: zJogSliderDisplay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: zJogSliderPressed(); break;
        case 52: zJogSliderReleased(); break;
        case 53: doScroll(); break;
        case 54: statusSliderPressed(); break;
        case 55: statusSliderReleased(); break;
        case 56: setQueuedCommands((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 57;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::openPort(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::closePort(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::shutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MainWindow::sendGcode(QString _t1, bool _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 6
void MainWindow::sendFile(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::gotoXYZC(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::axisAdj(char _t1, float _t2, bool _t3, bool _t4, int _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::setResponseWait(ControlParams _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::setProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::setRuntime(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::sendSetHome()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void MainWindow::sendGrblReset()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void MainWindow::sendGrblUnlock()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void MainWindow::goToHome()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void MainWindow::setItems(QList<PosItem> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_END_MOC_NAMESPACE
