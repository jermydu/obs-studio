/****************************************************************************
** Meta object code from reading C++ file 'window-basic-settings.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../UI/window-basic-settings.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-settings.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SilentUpdateCheckBox_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SilentUpdateCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SilentUpdateCheckBox_t qt_meta_stringdata_SilentUpdateCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SilentUpdateCheckBox"
QT_MOC_LITERAL(1, 21, 18), // "setCheckedSilently"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7) // "checked"

    },
    "SilentUpdateCheckBox\0setCheckedSilently\0"
    "\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SilentUpdateCheckBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void SilentUpdateCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SilentUpdateCheckBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCheckedSilently((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SilentUpdateCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_meta_stringdata_SilentUpdateCheckBox.data,
    qt_meta_data_SilentUpdateCheckBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SilentUpdateCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SilentUpdateCheckBox.stringdata0))
        return static_cast<void*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int SilentUpdateCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_SilentUpdateSpinBox_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SilentUpdateSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SilentUpdateSpinBox_t qt_meta_stringdata_SilentUpdateSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SilentUpdateSpinBox"
QT_MOC_LITERAL(1, 20, 16), // "setValueSilently"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3) // "val"

    },
    "SilentUpdateSpinBox\0setValueSilently\0"
    "\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SilentUpdateSpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void SilentUpdateSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SilentUpdateSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValueSilently((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SilentUpdateSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_SilentUpdateSpinBox.data,
    qt_meta_data_SilentUpdateSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SilentUpdateSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SilentUpdateSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int SilentUpdateSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OBSBasicSettings_t {
    QByteArrayData data[112];
    char stringdata0[2353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasicSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasicSettings_t qt_meta_stringdata_OBSBasicSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OBSBasicSettings"
QT_MOC_LITERAL(1, 17, 16), // "UpdateServerList"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "UpdateKeyLink"
QT_MOC_LITERAL(4, 49, 21), // "UpdateVodTrackSetting"
QT_MOC_LITERAL(5, 71, 28), // "UpdateServiceRecommendations"
QT_MOC_LITERAL(6, 100, 30), // "RecreateOutputResolutionWidget"
QT_MOC_LITERAL(7, 131, 18), // "UpdateResFPSLimits"
QT_MOC_LITERAL(8, 150, 18), // "UpdateMoreInfoLink"
QT_MOC_LITERAL(9, 169, 21), // "DisplayEnforceWarning"
QT_MOC_LITERAL(10, 191, 7), // "checked"
QT_MOC_LITERAL(11, 199, 15), // "on_show_clicked"
QT_MOC_LITERAL(12, 215, 21), // "on_authPwShow_clicked"
QT_MOC_LITERAL(13, 237, 25), // "on_connectAccount_clicked"
QT_MOC_LITERAL(14, 263, 28), // "on_disconnectAccount_clicked"
QT_MOC_LITERAL(15, 292, 23), // "on_useStreamKey_clicked"
QT_MOC_LITERAL(16, 316, 18), // "on_useAuth_toggled"
QT_MOC_LITERAL(17, 335, 28), // "on_hotkeyFilterReset_clicked"
QT_MOC_LITERAL(18, 364, 33), // "on_hotkeyFilterSearch_textCha..."
QT_MOC_LITERAL(19, 398, 4), // "text"
QT_MOC_LITERAL(20, 403, 31), // "on_hotkeyFilterInput_KeyChanged"
QT_MOC_LITERAL(21, 435, 21), // "obs_key_combination_t"
QT_MOC_LITERAL(22, 457, 5), // "combo"
QT_MOC_LITERAL(23, 463, 18), // "on_theme_activated"
QT_MOC_LITERAL(24, 482, 3), // "idx"
QT_MOC_LITERAL(25, 486, 34), // "on_listWidget_itemSelectionCh..."
QT_MOC_LITERAL(26, 521, 20), // "on_buttonBox_clicked"
QT_MOC_LITERAL(27, 542, 16), // "QAbstractButton*"
QT_MOC_LITERAL(28, 559, 6), // "button"
QT_MOC_LITERAL(29, 566, 30), // "on_service_currentIndexChanged"
QT_MOC_LITERAL(30, 597, 29), // "on_simpleOutputBrowse_clicked"
QT_MOC_LITERAL(31, 627, 30), // "on_advOutRecPathBrowse_clicked"
QT_MOC_LITERAL(32, 658, 29), // "on_advOutFFPathBrowse_clicked"
QT_MOC_LITERAL(33, 688, 36), // "on_advOutEncoder_currentIndex..."
QT_MOC_LITERAL(34, 725, 39), // "on_advOutRecEncoder_currentIn..."
QT_MOC_LITERAL(35, 765, 36), // "on_advOutFFIgnoreCompat_state..."
QT_MOC_LITERAL(36, 802, 5), // "state"
QT_MOC_LITERAL(37, 808, 37), // "on_advOutFFFormat_currentInde..."
QT_MOC_LITERAL(38, 846, 39), // "on_advOutFFAEncoder_currentIn..."
QT_MOC_LITERAL(39, 886, 39), // "on_advOutFFVEncoder_currentIn..."
QT_MOC_LITERAL(40, 926, 35), // "on_advOutFFType_currentIndexC..."
QT_MOC_LITERAL(41, 962, 34), // "on_colorFormat_currentIndexCh..."
QT_MOC_LITERAL(42, 997, 33), // "on_colorSpace_currentIndexCha..."
QT_MOC_LITERAL(43, 1031, 32), // "on_filenameFormatting_textEdited"
QT_MOC_LITERAL(44, 1064, 35), // "on_outputResolution_editTextC..."
QT_MOC_LITERAL(45, 1100, 33), // "on_baseResolution_editTextCha..."
QT_MOC_LITERAL(46, 1134, 26), // "on_disableOSXVSync_clicked"
QT_MOC_LITERAL(47, 1161, 18), // "on_choose1_clicked"
QT_MOC_LITERAL(48, 1180, 18), // "on_choose2_clicked"
QT_MOC_LITERAL(49, 1199, 18), // "on_choose3_clicked"
QT_MOC_LITERAL(50, 1218, 18), // "on_choose4_clicked"
QT_MOC_LITERAL(51, 1237, 18), // "on_choose5_clicked"
QT_MOC_LITERAL(52, 1256, 18), // "on_choose6_clicked"
QT_MOC_LITERAL(53, 1275, 18), // "on_choose7_clicked"
QT_MOC_LITERAL(54, 1294, 18), // "on_choose8_clicked"
QT_MOC_LITERAL(55, 1313, 18), // "on_choose9_clicked"
QT_MOC_LITERAL(56, 1332, 34), // "on_colorPreset_currentIndexCh..."
QT_MOC_LITERAL(57, 1367, 14), // "GeneralChanged"
QT_MOC_LITERAL(58, 1382, 20), // "HideOBSWindowWarning"
QT_MOC_LITERAL(59, 1403, 12), // "AudioChanged"
QT_MOC_LITERAL(60, 1416, 19), // "AudioChangedRestart"
QT_MOC_LITERAL(61, 1436, 18), // "ReloadAudioSources"
QT_MOC_LITERAL(62, 1455, 15), // "SurroundWarning"
QT_MOC_LITERAL(63, 1471, 20), // "SpeakerLayoutChanged"
QT_MOC_LITERAL(64, 1492, 26), // "LowLatencyBufferingChanged"
QT_MOC_LITERAL(65, 1519, 19), // "UpdateAudioWarnings"
QT_MOC_LITERAL(66, 1539, 14), // "OutputsChanged"
QT_MOC_LITERAL(67, 1554, 14), // "Stream1Changed"
QT_MOC_LITERAL(68, 1569, 12), // "VideoChanged"
QT_MOC_LITERAL(69, 1582, 22), // "VideoChangedResolution"
QT_MOC_LITERAL(70, 1605, 19), // "VideoChangedRestart"
QT_MOC_LITERAL(71, 1625, 14), // "HotkeysChanged"
QT_MOC_LITERAL(72, 1640, 20), // "ScanDuplicateHotkeys"
QT_MOC_LITERAL(73, 1661, 12), // "QFormLayout*"
QT_MOC_LITERAL(74, 1674, 6), // "layout"
QT_MOC_LITERAL(75, 1681, 13), // "ReloadHotkeys"
QT_MOC_LITERAL(76, 1695, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(77, 1709, 9), // "ignoreKey"
QT_MOC_LITERAL(78, 1719, 11), // "A11yChanged"
QT_MOC_LITERAL(79, 1731, 15), // "AdvancedChanged"
QT_MOC_LITERAL(80, 1747, 22), // "AdvancedChangedRestart"
QT_MOC_LITERAL(81, 1770, 25), // "UpdateStreamDelayEstimate"
QT_MOC_LITERAL(82, 1796, 21), // "UpdateAdvNetworkGroup"
QT_MOC_LITERAL(83, 1818, 37), // "UpdateAutomaticReplayBufferCh..."
QT_MOC_LITERAL(84, 1856, 22), // "AdvOutSplitFileChanged"
QT_MOC_LITERAL(85, 1879, 22), // "AdvOutRecCheckWarnings"
QT_MOC_LITERAL(86, 1902, 29), // "SimpleRecordingQualityChanged"
QT_MOC_LITERAL(87, 1932, 29), // "SimpleRecordingEncoderChanged"
QT_MOC_LITERAL(88, 1962, 37), // "SimpleRecordingQualityLossles..."
QT_MOC_LITERAL(89, 2000, 25), // "SimpleReplayBufferChanged"
QT_MOC_LITERAL(90, 2026, 22), // "AdvReplayBufferChanged"
QT_MOC_LITERAL(91, 2049, 29), // "SimpleStreamingEncoderChanged"
QT_MOC_LITERAL(92, 2079, 16), // "SpawnTempService"
QT_MOC_LITERAL(93, 2096, 10), // "OBSService"
QT_MOC_LITERAL(94, 2107, 14), // "SetGeneralIcon"
QT_MOC_LITERAL(95, 2122, 4), // "icon"
QT_MOC_LITERAL(96, 2127, 13), // "SetStreamIcon"
QT_MOC_LITERAL(97, 2141, 13), // "SetOutputIcon"
QT_MOC_LITERAL(98, 2155, 12), // "SetAudioIcon"
QT_MOC_LITERAL(99, 2168, 12), // "SetVideoIcon"
QT_MOC_LITERAL(100, 2181, 14), // "SetHotkeysIcon"
QT_MOC_LITERAL(101, 2196, 20), // "SetAccessibilityIcon"
QT_MOC_LITERAL(102, 2217, 15), // "SetAdvancedIcon"
QT_MOC_LITERAL(103, 2233, 22), // "UseStreamKeyAdvClicked"
QT_MOC_LITERAL(104, 2256, 11), // "generalIcon"
QT_MOC_LITERAL(105, 2268, 10), // "streamIcon"
QT_MOC_LITERAL(106, 2279, 10), // "outputIcon"
QT_MOC_LITERAL(107, 2290, 9), // "audioIcon"
QT_MOC_LITERAL(108, 2300, 9), // "videoIcon"
QT_MOC_LITERAL(109, 2310, 11), // "hotkeysIcon"
QT_MOC_LITERAL(110, 2322, 17), // "accessibilityIcon"
QT_MOC_LITERAL(111, 2340, 12) // "advancedIcon"

    },
    "OBSBasicSettings\0UpdateServerList\0\0"
    "UpdateKeyLink\0UpdateVodTrackSetting\0"
    "UpdateServiceRecommendations\0"
    "RecreateOutputResolutionWidget\0"
    "UpdateResFPSLimits\0UpdateMoreInfoLink\0"
    "DisplayEnforceWarning\0checked\0"
    "on_show_clicked\0on_authPwShow_clicked\0"
    "on_connectAccount_clicked\0"
    "on_disconnectAccount_clicked\0"
    "on_useStreamKey_clicked\0on_useAuth_toggled\0"
    "on_hotkeyFilterReset_clicked\0"
    "on_hotkeyFilterSearch_textChanged\0"
    "text\0on_hotkeyFilterInput_KeyChanged\0"
    "obs_key_combination_t\0combo\0"
    "on_theme_activated\0idx\0"
    "on_listWidget_itemSelectionChanged\0"
    "on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0on_service_currentIndexChanged\0"
    "on_simpleOutputBrowse_clicked\0"
    "on_advOutRecPathBrowse_clicked\0"
    "on_advOutFFPathBrowse_clicked\0"
    "on_advOutEncoder_currentIndexChanged\0"
    "on_advOutRecEncoder_currentIndexChanged\0"
    "on_advOutFFIgnoreCompat_stateChanged\0"
    "state\0on_advOutFFFormat_currentIndexChanged\0"
    "on_advOutFFAEncoder_currentIndexChanged\0"
    "on_advOutFFVEncoder_currentIndexChanged\0"
    "on_advOutFFType_currentIndexChanged\0"
    "on_colorFormat_currentIndexChanged\0"
    "on_colorSpace_currentIndexChanged\0"
    "on_filenameFormatting_textEdited\0"
    "on_outputResolution_editTextChanged\0"
    "on_baseResolution_editTextChanged\0"
    "on_disableOSXVSync_clicked\0"
    "on_choose1_clicked\0on_choose2_clicked\0"
    "on_choose3_clicked\0on_choose4_clicked\0"
    "on_choose5_clicked\0on_choose6_clicked\0"
    "on_choose7_clicked\0on_choose8_clicked\0"
    "on_choose9_clicked\0"
    "on_colorPreset_currentIndexChanged\0"
    "GeneralChanged\0HideOBSWindowWarning\0"
    "AudioChanged\0AudioChangedRestart\0"
    "ReloadAudioSources\0SurroundWarning\0"
    "SpeakerLayoutChanged\0LowLatencyBufferingChanged\0"
    "UpdateAudioWarnings\0OutputsChanged\0"
    "Stream1Changed\0VideoChanged\0"
    "VideoChangedResolution\0VideoChangedRestart\0"
    "HotkeysChanged\0ScanDuplicateHotkeys\0"
    "QFormLayout*\0layout\0ReloadHotkeys\0"
    "obs_hotkey_id\0ignoreKey\0A11yChanged\0"
    "AdvancedChanged\0AdvancedChangedRestart\0"
    "UpdateStreamDelayEstimate\0"
    "UpdateAdvNetworkGroup\0"
    "UpdateAutomaticReplayBufferCheckboxes\0"
    "AdvOutSplitFileChanged\0AdvOutRecCheckWarnings\0"
    "SimpleRecordingQualityChanged\0"
    "SimpleRecordingEncoderChanged\0"
    "SimpleRecordingQualityLosslessWarning\0"
    "SimpleReplayBufferChanged\0"
    "AdvReplayBufferChanged\0"
    "SimpleStreamingEncoderChanged\0"
    "SpawnTempService\0OBSService\0SetGeneralIcon\0"
    "icon\0SetStreamIcon\0SetOutputIcon\0"
    "SetAudioIcon\0SetVideoIcon\0SetHotkeysIcon\0"
    "SetAccessibilityIcon\0SetAdvancedIcon\0"
    "UseStreamKeyAdvClicked\0generalIcon\0"
    "streamIcon\0outputIcon\0audioIcon\0"
    "videoIcon\0hotkeysIcon\0accessibilityIcon\0"
    "advancedIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasicSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      89,   14, // methods
       8,  616, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  459,    2, 0x08 /* Private */,
       3,    0,  460,    2, 0x08 /* Private */,
       4,    0,  461,    2, 0x08 /* Private */,
       5,    0,  462,    2, 0x08 /* Private */,
       6,    0,  463,    2, 0x08 /* Private */,
       7,    0,  464,    2, 0x08 /* Private */,
       8,    0,  465,    2, 0x08 /* Private */,
       9,    1,  466,    2, 0x08 /* Private */,
      11,    0,  469,    2, 0x08 /* Private */,
      12,    0,  470,    2, 0x08 /* Private */,
      13,    0,  471,    2, 0x08 /* Private */,
      14,    0,  472,    2, 0x08 /* Private */,
      15,    0,  473,    2, 0x08 /* Private */,
      16,    0,  474,    2, 0x08 /* Private */,
      17,    0,  475,    2, 0x08 /* Private */,
      18,    1,  476,    2, 0x08 /* Private */,
      20,    1,  479,    2, 0x08 /* Private */,
      23,    1,  482,    2, 0x08 /* Private */,
      25,    0,  485,    2, 0x08 /* Private */,
      26,    1,  486,    2, 0x08 /* Private */,
      29,    1,  489,    2, 0x08 /* Private */,
      30,    0,  492,    2, 0x08 /* Private */,
      31,    0,  493,    2, 0x08 /* Private */,
      32,    0,  494,    2, 0x08 /* Private */,
      33,    1,  495,    2, 0x08 /* Private */,
      34,    1,  498,    2, 0x08 /* Private */,
      35,    1,  501,    2, 0x08 /* Private */,
      37,    1,  504,    2, 0x08 /* Private */,
      38,    1,  507,    2, 0x08 /* Private */,
      39,    1,  510,    2, 0x08 /* Private */,
      40,    1,  513,    2, 0x08 /* Private */,
      41,    1,  516,    2, 0x08 /* Private */,
      42,    1,  519,    2, 0x08 /* Private */,
      43,    1,  522,    2, 0x08 /* Private */,
      44,    1,  525,    2, 0x08 /* Private */,
      45,    1,  528,    2, 0x08 /* Private */,
      46,    0,  531,    2, 0x08 /* Private */,
      47,    0,  532,    2, 0x08 /* Private */,
      48,    0,  533,    2, 0x08 /* Private */,
      49,    0,  534,    2, 0x08 /* Private */,
      50,    0,  535,    2, 0x08 /* Private */,
      51,    0,  536,    2, 0x08 /* Private */,
      52,    0,  537,    2, 0x08 /* Private */,
      53,    0,  538,    2, 0x08 /* Private */,
      54,    0,  539,    2, 0x08 /* Private */,
      55,    0,  540,    2, 0x08 /* Private */,
      56,    1,  541,    2, 0x08 /* Private */,
      57,    0,  544,    2, 0x08 /* Private */,
      58,    1,  545,    2, 0x08 /* Private */,
      59,    0,  548,    2, 0x08 /* Private */,
      60,    0,  549,    2, 0x08 /* Private */,
      61,    0,  550,    2, 0x08 /* Private */,
      62,    1,  551,    2, 0x08 /* Private */,
      63,    1,  554,    2, 0x08 /* Private */,
      64,    1,  557,    2, 0x08 /* Private */,
      65,    0,  560,    2, 0x08 /* Private */,
      66,    0,  561,    2, 0x08 /* Private */,
      67,    0,  562,    2, 0x08 /* Private */,
      68,    0,  563,    2, 0x08 /* Private */,
      69,    0,  564,    2, 0x08 /* Private */,
      70,    0,  565,    2, 0x08 /* Private */,
      71,    0,  566,    2, 0x08 /* Private */,
      72,    1,  567,    2, 0x08 /* Private */,
      75,    1,  570,    2, 0x08 /* Private */,
      75,    0,  573,    2, 0x28 /* Private | MethodCloned */,
      78,    0,  574,    2, 0x08 /* Private */,
      79,    0,  575,    2, 0x08 /* Private */,
      80,    0,  576,    2, 0x08 /* Private */,
      81,    0,  577,    2, 0x08 /* Private */,
      82,    0,  578,    2, 0x08 /* Private */,
      83,    0,  579,    2, 0x08 /* Private */,
      84,    0,  580,    2, 0x08 /* Private */,
      85,    0,  581,    2, 0x08 /* Private */,
      86,    0,  582,    2, 0x08 /* Private */,
      87,    0,  583,    2, 0x08 /* Private */,
      88,    1,  584,    2, 0x08 /* Private */,
      89,    0,  587,    2, 0x08 /* Private */,
      90,    0,  588,    2, 0x08 /* Private */,
      91,    0,  589,    2, 0x08 /* Private */,
      92,    0,  590,    2, 0x08 /* Private */,
      94,    1,  591,    2, 0x08 /* Private */,
      96,    1,  594,    2, 0x08 /* Private */,
      97,    1,  597,    2, 0x08 /* Private */,
      98,    1,  600,    2, 0x08 /* Private */,
      99,    1,  603,    2, 0x08 /* Private */,
     100,    1,  606,    2, 0x08 /* Private */,
     101,    1,  609,    2, 0x08 /* Private */,
     102,    1,  612,    2, 0x08 /* Private */,
     103,    0,  615,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 73,   74,
    QMetaType::Void, 0x80000000 | 76,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 93,
    QMetaType::Void, QMetaType::QIcon,   95,
    QMetaType::Void, QMetaType::QIcon,   95,
    QMetaType::Void, QMetaType::QIcon,   95,
    QMetaType::Void, QMetaType::QIcon,   95,
    QMetaType::Void, QMetaType::QIcon,   95,
    QMetaType::Void, QMetaType::QIcon,   95,
    QMetaType::Void, QMetaType::QIcon,   95,
    QMetaType::Void, QMetaType::QIcon,   95,
    QMetaType::Void,

 // properties: name, type, flags
     104, QMetaType::QIcon, 0x00095003,
     105, QMetaType::QIcon, 0x00095003,
     106, QMetaType::QIcon, 0x00095003,
     107, QMetaType::QIcon, 0x00095003,
     108, QMetaType::QIcon, 0x00095003,
     109, QMetaType::QIcon, 0x00095003,
     110, QMetaType::QIcon, 0x00095003,
     111, QMetaType::QIcon, 0x00095003,

       0        // eod
};

void OBSBasicSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateServerList(); break;
        case 1: _t->UpdateKeyLink(); break;
        case 2: _t->UpdateVodTrackSetting(); break;
        case 3: _t->UpdateServiceRecommendations(); break;
        case 4: _t->RecreateOutputResolutionWidget(); break;
        case 5: _t->UpdateResFPSLimits(); break;
        case 6: _t->UpdateMoreInfoLink(); break;
        case 7: _t->DisplayEnforceWarning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_show_clicked(); break;
        case 9: _t->on_authPwShow_clicked(); break;
        case 10: _t->on_connectAccount_clicked(); break;
        case 11: _t->on_disconnectAccount_clicked(); break;
        case 12: _t->on_useStreamKey_clicked(); break;
        case 13: _t->on_useAuth_toggled(); break;
        case 14: _t->on_hotkeyFilterReset_clicked(); break;
        case 15: _t->on_hotkeyFilterSearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_hotkeyFilterInput_KeyChanged((*reinterpret_cast< obs_key_combination_t(*)>(_a[1]))); break;
        case 17: _t->on_theme_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_listWidget_itemSelectionChanged(); break;
        case 19: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 20: _t->on_service_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_simpleOutputBrowse_clicked(); break;
        case 22: _t->on_advOutRecPathBrowse_clicked(); break;
        case 23: _t->on_advOutFFPathBrowse_clicked(); break;
        case 24: _t->on_advOutEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_advOutRecEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_advOutFFIgnoreCompat_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_advOutFFFormat_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_advOutFFAEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->on_advOutFFVEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->on_advOutFFType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_colorFormat_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_colorSpace_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->on_filenameFormatting_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->on_outputResolution_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->on_baseResolution_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->on_disableOSXVSync_clicked(); break;
        case 37: _t->on_choose1_clicked(); break;
        case 38: _t->on_choose2_clicked(); break;
        case 39: _t->on_choose3_clicked(); break;
        case 40: _t->on_choose4_clicked(); break;
        case 41: _t->on_choose5_clicked(); break;
        case 42: _t->on_choose6_clicked(); break;
        case 43: _t->on_choose7_clicked(); break;
        case 44: _t->on_choose8_clicked(); break;
        case 45: _t->on_choose9_clicked(); break;
        case 46: _t->on_colorPreset_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->GeneralChanged(); break;
        case 48: _t->HideOBSWindowWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->AudioChanged(); break;
        case 50: _t->AudioChangedRestart(); break;
        case 51: _t->ReloadAudioSources(); break;
        case 52: _t->SurroundWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->SpeakerLayoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->LowLatencyBufferingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->UpdateAudioWarnings(); break;
        case 56: _t->OutputsChanged(); break;
        case 57: _t->Stream1Changed(); break;
        case 58: _t->VideoChanged(); break;
        case 59: _t->VideoChangedResolution(); break;
        case 60: _t->VideoChangedRestart(); break;
        case 61: _t->HotkeysChanged(); break;
        case 62: { bool _r = _t->ScanDuplicateHotkeys((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->ReloadHotkeys((*reinterpret_cast< obs_hotkey_id(*)>(_a[1]))); break;
        case 64: _t->ReloadHotkeys(); break;
        case 65: _t->A11yChanged(); break;
        case 66: _t->AdvancedChanged(); break;
        case 67: _t->AdvancedChangedRestart(); break;
        case 68: _t->UpdateStreamDelayEstimate(); break;
        case 69: _t->UpdateAdvNetworkGroup(); break;
        case 70: _t->UpdateAutomaticReplayBufferCheckboxes(); break;
        case 71: _t->AdvOutSplitFileChanged(); break;
        case 72: _t->AdvOutRecCheckWarnings(); break;
        case 73: _t->SimpleRecordingQualityChanged(); break;
        case 74: _t->SimpleRecordingEncoderChanged(); break;
        case 75: _t->SimpleRecordingQualityLosslessWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 76: _t->SimpleReplayBufferChanged(); break;
        case 77: _t->AdvReplayBufferChanged(); break;
        case 78: _t->SimpleStreamingEncoderChanged(); break;
        case 79: { OBSService _r = _t->SpawnTempService();
            if (_a[0]) *reinterpret_cast< OBSService*>(_a[0]) = std::move(_r); }  break;
        case 80: _t->SetGeneralIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 81: _t->SetStreamIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 82: _t->SetOutputIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 83: _t->SetAudioIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 84: _t->SetVideoIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 85: _t->SetHotkeysIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 86: _t->SetAccessibilityIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 87: _t->SetAdvancedIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 88: _t->UseStreamKeyAdvClicked(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->GetGeneralIcon(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->GetStreamIcon(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = _t->GetOutputIcon(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = _t->GetAudioIcon(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = _t->GetVideoIcon(); break;
        case 5: *reinterpret_cast< QIcon*>(_v) = _t->GetHotkeysIcon(); break;
        case 6: *reinterpret_cast< QIcon*>(_v) = _t->GetAccessibilityIcon(); break;
        case 7: *reinterpret_cast< QIcon*>(_v) = _t->GetAdvancedIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetGeneralIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->SetStreamIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->SetOutputIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: _t->SetAudioIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 4: _t->SetVideoIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: _t->SetHotkeysIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 6: _t->SetAccessibilityIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 7: _t->SetAdvancedIcon(*reinterpret_cast< QIcon*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OBSBasicSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OBSBasicSettings.data,
    qt_meta_data_OBSBasicSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OBSBasicSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasicSettings.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSBasicSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 89)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 89;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 89)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 89;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
