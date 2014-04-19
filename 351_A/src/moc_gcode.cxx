/****************************************************************************
** Meta object code from reading C++ file 'gcode.h'
**
** Created: Fri 18. Apr 16:14:09 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gcode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gcode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GCode[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,    7,    6,    6, 0x05,
      34,   29,    6,    6, 0x05,
      59,    7,    6,    6, 0x05,
      83,   79,    6,    6, 0x05,
     100,    6,    6,    6, 0x05,
     121,  114,    6,    6, 0x05,
     149,  140,    6,    6, 0x05,
     172,  166,    6,    6, 0x05,
     196,    6,    6,    6, 0x05,
     221,  211,    6,    6, 0x05,
     246,    6,    6,    6, 0x05,
     265,  263,    6,    6, 0x05,
     300,  293,    6,    6, 0x05,
     317,    6,    6,    6, 0x05,
     365,  342,    6,    6, 0x05,
     406,  400,    6,    6, 0x05,
     428,  166,    6,    6, 0x05,
     450,  166,    6,    6, 0x05,
     484,  475,    6,    6, 0x05,
     526,  517,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
     567,  546,    6,    6, 0x0a,
     593,  114,    6,    6, 0x0a,
     609,    7,    6,    6, 0x0a,
     636,  628,    6,    6, 0x0a,
     676,  671,    6,    6, 0x0a,
     694,    7,    6,    6, 0x0a,
     761,  712,    6,    6, 0x0a,
     809,  795,    6,    6, 0x0a,
     840,    6,    6,    6, 0x0a,
     854,    6,    6,    6, 0x0a,
     870,    6,    6,    6, 0x0a,
     887,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GCode[] = {
    "GCode\0\0line\0addList(QString)\0list\0"
    "addListFull(QStringList)\0addListOut(QString)\0"
    "msg\0sendMsg(QString)\0stopSending()\0"
    "reopen\0portIsClosed(bool)\0sendCode\0"
    "portIsOpen(bool)\0value\0setCommandText(QString)\0"
    "adjustedAxis()\0id,result\0"
    "gcodeResult(int,QString)\0setProgress(int)\0"
    ",\0setQueuedCommands(int,bool)\0timeIt\0"
    "resetTimer(bool)\0enableGrblDialogButton()\0"
    "machineCoord,workCoord\0"
    "updateCoordinates(Coord3D,Coord3D)\0"
    "state\0setLastState(QString)\0"
    "setUnitsWork(QString)\0setUnitsMachine(QString)\0"
    "x,y,isMM\0setLivePoint(double,double,bool)\0"
    "currLine\0setVisCurrLine(int)\0"
    "commPortStr,baudRate\0openPort(QString,QString)\0"
    "closePort(bool)\0sendGcode(QString)\0"
    "id,line\0sendGcodeAndGetResult(int,QString)\0"
    "path\0sendFile(QString)\0gotoXYZA(QString)\0"
    "axis,coord,inv,absoluteAfterAxisAdj,sliderZCount\0"
    "axisAdj(char,float,bool,bool,int)\0"
    "controlParams\0setResponseWait(ControlParams)\0"
    "grblSetHome()\0sendGrblReset()\0"
    "sendGrblUnlock()\0goToHome()\0"
};

const QMetaObject GCode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GCode,
      qt_meta_data_GCode, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GCode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GCode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GCode))
        return static_cast<void*>(const_cast< GCode*>(this));
    return QObject::qt_metacast(_clname);
}

int GCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: addListFull((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: addListOut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: sendMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: stopSending(); break;
        case 5: portIsClosed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: portIsOpen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: setCommandText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: adjustedAxis(); break;
        case 9: gcodeResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: setQueuedCommands((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: resetTimer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: enableGrblDialogButton(); break;
        case 14: updateCoordinates((*reinterpret_cast< Coord3D(*)>(_a[1])),(*reinterpret_cast< Coord3D(*)>(_a[2]))); break;
        case 15: setLastState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: setUnitsWork((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: setUnitsMachine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: setLivePoint((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 19: setVisCurrLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: openPort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 21: closePort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: sendGcode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: sendGcodeAndGetResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: sendFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: gotoXYZA((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: axisAdj((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 27: setResponseWait((*reinterpret_cast< ControlParams(*)>(_a[1]))); break;
        case 28: grblSetHome(); break;
        case 29: sendGrblReset(); break;
        case 30: sendGrblUnlock(); break;
        case 31: goToHome(); break;
        default: ;
        }
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void GCode::addList(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GCode::addListFull(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GCode::addListOut(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GCode::sendMsg(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GCode::stopSending()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void GCode::portIsClosed(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GCode::portIsOpen(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GCode::setCommandText(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GCode::adjustedAxis()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void GCode::gcodeResult(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GCode::setProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GCode::setQueuedCommands(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GCode::resetTimer(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GCode::enableGrblDialogButton()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void GCode::updateCoordinates(Coord3D _t1, Coord3D _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GCode::setLastState(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GCode::setUnitsWork(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GCode::setUnitsMachine(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void GCode::setLivePoint(double _t1, double _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void GCode::setVisCurrLine(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_END_MOC_NAMESPACE
