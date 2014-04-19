/****************************************************************************
** Meta object code from reading C++ file 'grbldialog.h'
**
** Created: Fri 18. Apr 16:14:09 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "grbldialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grbldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GrblDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   11,   11,   11, 0x0a,
      59,   11,   11,   11, 0x0a,
      76,   68,   11,   11, 0x0a,
     108,   98,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GrblDialog[] = {
    "GrblDialog\0\0id,cmd\0"
    "sendGcodeAndGetResult(int,QString)\0"
    "Ok()\0Cancel()\0row,col\0changeValues(int,int)\0"
    "id,result\0gcodeResult(int,QString)\0"
};

const QMetaObject GrblDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GrblDialog,
      qt_meta_data_GrblDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GrblDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GrblDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GrblDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GrblDialog))
        return static_cast<void*>(const_cast< GrblDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GrblDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendGcodeAndGetResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: Ok(); break;
        case 2: Cancel(); break;
        case 3: changeValues((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: gcodeResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GrblDialog::sendGcodeAndGetResult(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
