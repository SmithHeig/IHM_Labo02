/****************************************************************************
** Meta object code from reading C++ file 'ffmpeg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ffmpeg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ffmpeg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FFMPEG_t {
    QByteArrayData data[15];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FFMPEG_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FFMPEG_t qt_meta_stringdata_FFMPEG = {
    {
QT_MOC_LITERAL(0, 0, 6), // "FFMPEG"
QT_MOC_LITERAL(1, 7, 21), // "on_openButton_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 23), // "on_browseButton_clicked"
QT_MOC_LITERAL(4, 54, 8), // "lock_all"
QT_MOC_LITERAL(5, 63, 10), // "unlock_all"
QT_MOC_LITERAL(6, 74, 29), // "on_timeEdit_start_timeChanged"
QT_MOC_LITERAL(7, 104, 4), // "time"
QT_MOC_LITERAL(8, 109, 27), // "on_timeEdit_end_timeChanged"
QT_MOC_LITERAL(9, 137, 12), // "set_dif_time"
QT_MOC_LITERAL(10, 150, 25), // "on_browseButton_2_clicked"
QT_MOC_LITERAL(11, 176, 38), // "on_lineEdit_outputFile_editin..."
QT_MOC_LITERAL(12, 215, 10), // "check_file"
QT_MOC_LITERAL(13, 226, 1), // "s"
QT_MOC_LITERAL(14, 228, 37) // "on_pushButton_genreate_output..."

    },
    "FFMPEG\0on_openButton_clicked\0\0"
    "on_browseButton_clicked\0lock_all\0"
    "unlock_all\0on_timeEdit_start_timeChanged\0"
    "time\0on_timeEdit_end_timeChanged\0"
    "set_dif_time\0on_browseButton_2_clicked\0"
    "on_lineEdit_outputFile_editingFinished\0"
    "check_file\0s\0on_pushButton_genreate_output_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FFMPEG[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    1,   82,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,    7,
    QMetaType::Void, QMetaType::QTime,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   13,
    QMetaType::Void,

       0        // eod
};

void FFMPEG::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FFMPEG *_t = static_cast<FFMPEG *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openButton_clicked(); break;
        case 1: _t->on_browseButton_clicked(); break;
        case 2: _t->lock_all(); break;
        case 3: _t->unlock_all(); break;
        case 4: _t->on_timeEdit_start_timeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 5: _t->on_timeEdit_end_timeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 6: _t->set_dif_time(); break;
        case 7: _t->on_browseButton_2_clicked(); break;
        case 8: _t->on_lineEdit_outputFile_editingFinished(); break;
        case 9: { bool _r = _t->check_file((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->on_pushButton_genreate_output_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject FFMPEG::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FFMPEG.data,
      qt_meta_data_FFMPEG,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FFMPEG::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FFMPEG::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FFMPEG.stringdata0))
        return static_cast<void*>(const_cast< FFMPEG*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FFMPEG::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
