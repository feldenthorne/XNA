/****************************************************************************
** Meta object code from reading C++ file 'xnagui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/xnagui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xnagui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeOxyRiboseGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x0a,
      64,   45,   15,   15, 0x0a,
      93,   86,   15,   15, 0x0a,
     138,  118,   15,   15, 0x0a,
     186,  166,   15,   15, 0x0a,
     214,  207,   15,   15, 0x0a,
     233,   15,   15,   15, 0x08,
     252,   15,   15,   15, 0x08,
     270,   15,   15,   15, 0x08,
     292,   15,   15,   15, 0x08,
     315,   15,   15,   15, 0x08,
     340,  335,   15,   15, 0x08,
     368,   15,   15,   15, 0x28,
     389,  335,   15,   15, 0x08,
     419,   15,   15,   15, 0x28,
     442,   15,   15,   15, 0x08,
     459,   15,   15,   15, 0x08,
     481,  474,   15,   15, 0x08,
     551,  534,   15,   15, 0x08,
     592,   86,   15,   15, 0x08,
     612,   15,   15,   15, 0x08,
     627,   15,   15,   15, 0x08,
     646,   15,   15,   15, 0x08,
     665,   15,   15,   15, 0x08,
     694,  680,   15,   15, 0x08,
     722,   15,   15,   15, 0x28,
     746,   15,   15,   15, 0x08,
     761,   15,   15,   15, 0x08,
     781,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DeOxyRiboseGUI[] = {
    "DeOxyRiboseGUI\0\0count\0setNumConnections(int)\0"
    "count,nTotalBlocks\0setNumBlocks(int,int)\0"
    "status\0setEncryptionStatus(int)\0"
    "title,message,modal\0error(QString,QString,bool)\0"
    "nFeeRequired,payFee\0askFee(qint64,bool*)\0"
    "strURI\0handleURI(QString)\0gotoOverviewPage()\0"
    "gotoHistoryPage()\0gotoAddressBookPage()\0"
    "gotoReceiveCoinsPage()\0gotoSendCoinsPage()\0"
    "addr\0gotoSignMessageTab(QString)\0"
    "gotoSignMessageTab()\0gotoVerifyMessageTab(QString)\0"
    "gotoVerifyMessageTab()\0optionsClicked()\0"
    "aboutClicked()\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "parent,start,end\0"
    "incomingTransaction(QModelIndex,int,int)\0"
    "encryptWallet(bool)\0backupWallet()\0"
    "changePassphrase()\0lockWalletToggle()\0"
    "unlockWallet()\0fToggleHidden\0"
    "showNormalIfMinimized(bool)\0"
    "showNormalIfMinimized()\0toggleHidden()\0"
    "updateMintingIcon()\0updateMintingWeights()\0"
};

void DeOxyRiboseGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeOxyRiboseGUI *_t = static_cast<DeOxyRiboseGUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 5: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->gotoOverviewPage(); break;
        case 7: _t->gotoHistoryPage(); break;
        case 8: _t->gotoAddressBookPage(); break;
        case 9: _t->gotoReceiveCoinsPage(); break;
        case 10: _t->gotoSendCoinsPage(); break;
        case 11: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->gotoSignMessageTab(); break;
        case 13: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->gotoVerifyMessageTab(); break;
        case 15: _t->optionsClicked(); break;
        case 16: _t->aboutClicked(); break;
        case 17: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 18: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->backupWallet(); break;
        case 21: _t->changePassphrase(); break;
        case 22: _t->lockWalletToggle(); break;
        case 23: _t->unlockWallet(); break;
        case 24: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->showNormalIfMinimized(); break;
        case 26: _t->toggleHidden(); break;
        case 27: _t->updateMintingIcon(); break;
        case 28: _t->updateMintingWeights(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DeOxyRiboseGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeOxyRiboseGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DeOxyRiboseGUI,
      qt_meta_data_DeOxyRiboseGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeOxyRiboseGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeOxyRiboseGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeOxyRiboseGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeOxyRiboseGUI))
        return static_cast<void*>(const_cast< DeOxyRiboseGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DeOxyRiboseGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE