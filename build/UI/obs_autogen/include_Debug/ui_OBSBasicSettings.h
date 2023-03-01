/********************************************************************************
** Form generated from reading UI file 'OBSBasicSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICSETTINGS_H
#define UI_OBSBASICSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "hotkey-edit.hpp"
#include "url-push-button.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasicSettings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *settingsPages;
    QWidget *generalPage;
    QVBoxLayout *verticalLayout_18;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_19;
    QFrame *widget_2;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *groupBox_15;
    QFormLayout *formLayout_32;
    QLabel *label;
    QComboBox *language;
    QLabel *label_42;
    QComboBox *theme;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *enableAutoUpdates;
    QCheckBox *openStatsOnStartup;
    QCheckBox *hideOBSFromCapture;
    QGroupBox *groupBox_16;
    QFormLayout *formLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *warnBeforeStreamStart;
    QCheckBox *warnBeforeStreamStop;
    QCheckBox *warnBeforeRecordStop;
    QCheckBox *recordWhenStreaming;
    QCheckBox *keepRecordStreamStops;
    QCheckBox *replayWhileStreaming;
    QCheckBox *keepReplayStreamStops;
    QGroupBox *groupBox_10;
    QFormLayout *formLayout_21;
    QCheckBox *snappingEnabled;
    QCheckBox *screenSnapping;
    QCheckBox *centerSnapping;
    QCheckBox *sourceSnapping;
    QDoubleSpinBox *snapDistance;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_14;
    QFormLayout *formLayout_28;
    QCheckBox *hideProjectorCursor;
    QCheckBox *projectorAlwaysOnTop;
    QCheckBox *saveProjectors;
    QCheckBox *closeProjectors;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_13;
    QFormLayout *formLayout_29;
    QCheckBox *systemTrayEnabled;
    QCheckBox *systemTrayWhenStarted;
    QCheckBox *systemTrayAlways;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_18;
    QFormLayout *formLayout_35;
    QCheckBox *overflowAlwaysVisible;
    QSpacerItem *horizontalSpacer_25;
    QCheckBox *overflowSelectionHide;
    QCheckBox *previewSafeAreas;
    QCheckBox *previewSpacingHelpers;
    QCheckBox *overflowHide;
    QGroupBox *groupBox_19;
    QFormLayout *formLayout_36;
    QSpacerItem *horizontalSpacer_26;
    QCheckBox *automaticSearch;
    QGroupBox *groupBox_11;
    QFormLayout *formLayout_31;
    QCheckBox *doubleClickSwitch;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *studioPortraitLayout;
    QCheckBox *prevProgLabelToggle;
    QGroupBox *groupBoxMultiview;
    QFormLayout *formLayoutMultiview;
    QSpacerItem *horizontalSpacerMultiview;
    QCheckBox *multiviewMouseSwitch;
    QCheckBox *multiviewDrawNames;
    QCheckBox *multiviewDrawAreas;
    QComboBox *multiviewLayout;
    QLabel *label_64;
    QWidget *streamPage;
    QVBoxLayout *verticalLayout_5;
    QFrame *widget_5;
    QFormLayout *topStreamLayout;
    QLabel *serviceLabel;
    QFrame *serviceWidget;
    QHBoxLayout *serviceWidgetLayout;
    QComboBox *service;
    UrlPushButton *moreInfoButton;
    QSpacerItem *horizontalSpacer_17;
    QStackedWidget *streamStackWidget;
    QWidget *loginPage;
    QFormLayout *loginPageLayout;
    QSpacerItem *horizontalSpacer_20;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *connectAccount;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *useStreamKey;
    QSpacerItem *horizontalSpacer_23;
    QWidget *streamKeyPage;
    QFormLayout *streamkeyPageLayout;
    QLabel *serverLabel;
    QStackedWidget *serverStackedWidget;
    QWidget *servicePage;
    QHBoxLayout *horizontalLayout_21;
    QComboBox *server;
    QWidget *customPage;
    QHBoxLayout *horizontalLayout_22;
    QLineEdit *customServer;
    QLabel *streamKeyLabel;
    QFrame *streamKeyWidget;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *key;
    QPushButton *show;
    UrlPushButton *getStreamKeyButton;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_23;
    QLabel *connectedAccountText;
    QPushButton *disconnectAccount;
    QSpacerItem *horizontalSpacer_24;
    QCheckBox *bandwidthTestEnable;
    QCheckBox *useAuth;
    QLabel *authUsernameLabel;
    QLineEdit *authUsername;
    QLabel *authPwLabel;
    QFrame *authPwWidget;
    QHBoxLayout *horizontalLayout_25;
    QLineEdit *authPw;
    QPushButton *authPwShow;
    QComboBox *twitchAddonDropdown;
    QLabel *twitchAddonLabel;
    QCheckBox *ignoreRecommended;
    QLabel *enforceSettingsLabel;
    QHBoxLayout *horizontalLayout_28;
    QPushButton *useStreamKeyAdv;
    QSpacerItem *horizontalSpacer_28;
    QLabel *connectedAccountLabel;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *connectAccount2;
    QSpacerItem *horizontalSpacer_19;
    QWidget *outputPage;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_6;
    QFrame *widget;
    QFormLayout *formLayout_5;
    QLabel *outputModeLabel;
    QComboBox *outputMode;
    QStackedWidget *outputModePages;
    QWidget *easyOutputsPage;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *simpleOutScroll;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_52;
    QGroupBox *simpleStreamingGroupBox;
    QFormLayout *simpleStreamingLayout;
    QLabel *label_19;
    QSpinBox *simpleOutputVBitrate;
    QLabel *label_20;
    QComboBox *simpleOutputABitrate;
    QLabel *simpleOutStrEncoderLabel;
    QComboBox *simpleOutStrEncoder;
    QLabel *simpleOutPresetLabel;
    QComboBox *simpleOutPreset;
    QCheckBox *simpleOutAdvanced;
    QLabel *label_23;
    QLineEdit *simpleOutCustom;
    QGroupBox *simpleRecordingGroupBox;
    QFormLayout *formLayout_6;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *simpleOutputPath;
    QPushButton *simpleOutputBrowse;
    QCheckBox *simpleNoSpace;
    QLabel *label_26;
    QComboBox *simpleOutRecQuality;
    QLabel *simpleOutRecFormatLabel;
    QComboBox *simpleOutRecFormat;
    QLabel *simpleOutRecEncoderLabel;
    QComboBox *simpleOutRecEncoder;
    QLabel *label_420;
    QLineEdit *simpleOutMuxCustom;
    QCheckBox *simpleReplayBuf;
    QGroupBox *replayBufferGroupBox;
    QFormLayout *formLayout_24;
    QLabel *label_35;
    QSpinBox *simpleRBSecMax;
    QLabel *simpleRBMegsMaxLabel;
    QSpinBox *simpleRBMegsMax;
    QLabel *simpleRBEstimate;
    QVBoxLayout *simpleOutInfoLayout;
    QFrame *simpleOutputContainer;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QWidget *advOutputsPage;
    QVBoxLayout *verticalLayout_8;
    QTabWidget *advOutTabs;
    QWidget *advOutputStreamTab;
    QVBoxLayout *verticalLayout_12;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *advOutTopContainer;
    QFormLayout *advOutTopLayout;
    QLabel *label_28;
    QFrame *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *advOutTrack1;
    QRadioButton *advOutTrack2;
    QRadioButton *advOutTrack3;
    QRadioButton *advOutTrack4;
    QRadioButton *advOutTrack5;
    QRadioButton *advOutTrack6;
    QLabel *advOutEncLabel;
    QComboBox *advOutEncoder;
    QCheckBox *advOutUseRescale;
    QComboBox *advOutRescale;
    QGroupBox *advOutEncoderProps;
    QVBoxLayout *advOutEncoderLayout;
    QSpacerItem *verticalSpacer_0;
    QWidget *advOutputRecordTab;
    QVBoxLayout *verticalLayout_11;
    QFrame *advOutRecTypeContainer;
    QFormLayout *formLayout_9;
    QLabel *label_31;
    QComboBox *advOutRecType;
    QStackedWidget *stackedWidget;
    QWidget *advOutRecStandard;
    QVBoxLayout *verticalLayout_13;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_21;
    QGroupBox *advOutRecTopContainer;
    QFormLayout *formLayout_16;
    QLabel *label_32;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *advOutRecPath;
    QPushButton *advOutRecPathBrowse;
    QSpacerItem *horizontalSpacer_27;
    QCheckBox *advOutNoSpace;
    QLabel *label_43;
    QComboBox *advOutRecFormat;
    QLabel *label_29;
    QStackedWidget *advRecTrackWidget;
    QWidget *recTracks;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *advOutRecTrack1;
    QCheckBox *advOutRecTrack2;
    QCheckBox *advOutRecTrack3;
    QCheckBox *advOutRecTrack4;
    QCheckBox *advOutRecTrack5;
    QCheckBox *advOutRecTrack6;
    QWidget *flvTracks;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *flvTrack1;
    QRadioButton *flvTrack2;
    QRadioButton *flvTrack3;
    QRadioButton *flvTrack4;
    QRadioButton *flvTrack5;
    QRadioButton *flvTrack6;
    QLabel *advOutRecEncLabel;
    QComboBox *advOutRecEncoder;
    QCheckBox *advOutRecUseRescale;
    QFrame *advOutRecRescaleContainer;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *advOutRecRescale;
    QLabel *label_9001;
    QLineEdit *advOutMuxCustom;
    QCheckBox *advOutSplitFile;
    QComboBox *advOutSplitFileType;
    QLabel *advOutSplitFileTimeLabel;
    QSpinBox *advOutSplitFileTime;
    QLabel *advOutSplitFileSizeLabel;
    QSpinBox *advOutSplitFileSize;
    QCheckBox *advOutSplitFileRstTS;
    QGroupBox *advOutRecEncoderProps;
    QVBoxLayout *verticalLayout_15;
    QSpacerItem *verticalSpacer_3;
    QWidget *advOutRecFFmpegPage;
    QVBoxLayout *verticalLayout_26;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_27;
    QGroupBox *advOutRecFFmpeg;
    QFormLayout *formLayout_7;
    QLabel *label_48;
    QComboBox *advOutFFType;
    QLabel *label_36;
    QStackedWidget *stackedWidget_2;
    QWidget *page_7;
    QHBoxLayout *horizontalLayout_27;
    QLineEdit *advOutFFRecPath;
    QPushButton *advOutFFPathBrowse;
    QWidget *page_8;
    QHBoxLayout *horizontalLayout_30;
    QLineEdit *advOutFFURL;
    QCheckBox *advOutFFNoSpace;
    QLabel *label_16;
    QComboBox *advOutFFFormat;
    QLabel *label_44;
    QLabel *advOutFFFormatDesc;
    QLabel *label_1337;
    QLineEdit *advOutFFMCfg;
    QLabel *label_40;
    QSpinBox *advOutFFVBitrate;
    QLabel *label_63;
    QSpinBox *advOutFFVGOPSize;
    QCheckBox *advOutFFUseRescale;
    QComboBox *advOutFFRescale;
    QCheckBox *advOutFFIgnoreCompat;
    QLabel *label_37;
    QComboBox *advOutFFVEncoder;
    QLabel *label_38;
    QLineEdit *advOutFFVCfg;
    QLabel *label_41;
    QSpinBox *advOutFFABitrate;
    QLabel *label_47;
    QFrame *widget_10;
    QHBoxLayout *horizontalLayout_26;
    QCheckBox *advOutFFTrack1;
    QCheckBox *advOutFFTrack2;
    QCheckBox *advOutFFTrack3;
    QCheckBox *advOutFFTrack4;
    QCheckBox *advOutFFTrack5;
    QCheckBox *advOutFFTrack6;
    QLabel *label_39;
    QComboBox *advOutFFAEncoder;
    QLabel *label_46;
    QLineEdit *advOutFFACfg;
    QSpacerItem *verticalSpacer_6;
    QWidget *advOutputAudioTracksTab;
    QVBoxLayout *verticalLayout_9;
    QFrame *widget_3;
    QVBoxLayout *verticalLayout_10;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_28;
    QGroupBox *groupBox;
    QFormLayout *formLayout_10;
    QComboBox *advOutTrack1Bitrate;
    QLabel *label_55;
    QLineEdit *advOutTrack1Name;
    QLabel *label_25;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_11;
    QLabel *label_49;
    QComboBox *advOutTrack2Bitrate;
    QLabel *label_50;
    QLineEdit *advOutTrack2Name;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_12;
    QLabel *label_51;
    QComboBox *advOutTrack3Bitrate;
    QLabel *label_52;
    QLineEdit *advOutTrack3Name;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_13;
    QLabel *label_53;
    QComboBox *advOutTrack4Bitrate;
    QLabel *label_54;
    QLineEdit *advOutTrack4Name;
    QGroupBox *groupBox_9;
    QFormLayout *formLayout_25;
    QLabel *label_59;
    QComboBox *advOutTrack5Bitrate;
    QLabel *label_60;
    QLineEdit *advOutTrack5Name;
    QGroupBox *groupBox_12;
    QFormLayout *formLayout_26;
    QLabel *label_61;
    QComboBox *advOutTrack6Bitrate;
    QLabel *label_62;
    QLineEdit *advOutTrack6Name;
    QSpacerItem *verticalSpacer_5;
    QWidget *advOutputReplayTab;
    QVBoxLayout *verticalLayout_22;
    QFrame *advOutputReplayFrame;
    QVBoxLayout *verticalLayout_29;
    QCheckBox *advReplayBuf;
    QFrame *advReplayBufferFrame;
    QFormLayout *formLayout_30;
    QLabel *advRBSecMaxLabel;
    QSpinBox *advRBSecMax;
    QSpinBox *advRBMegsMax;
    QLabel *advRBMegsMaxLabel;
    QLabel *advRBEstimate;
    QSpacerItem *verticalSpacer;
    QWidget *audioPage;
    QVBoxLayout *formLayout;
    QScrollArea *scrollArea_50;
    QWidget *scrollAreaWidgetContents_50;
    QVBoxLayout *verticalLayout_50;
    QFrame *widget_50;
    QVBoxLayout *verticalLayout_51;
    QGroupBox *audioGeneralGroupBox;
    QFormLayout *formLayout_52;
    QLabel *label_14;
    QComboBox *sampleRate;
    QLabel *label_15;
    QComboBox *channelSetup;
    QGroupBox *audioDevicesGroupBox;
    QFormLayout *formLayout_53;
    QLabel *label_2;
    QComboBox *desktopAudioDevice1;
    QLabel *label_3;
    QComboBox *desktopAudioDevice2;
    QLabel *label_4;
    QComboBox *auxAudioDevice1;
    QLabel *label_5;
    QComboBox *auxAudioDevice2;
    QLabel *label_6;
    QComboBox *auxAudioDevice3;
    QComboBox *auxAudioDevice4;
    QLabel *label_67;
    QGroupBox *audioMetersGroupBox;
    QFormLayout *formLayout_54;
    QLabel *label_65;
    QComboBox *meterDecayRate;
    QLabel *label_66;
    QComboBox *peakMeterType;
    QGroupBox *audioAdvGroupBox;
    QFormLayout *formLayout_56;
    QLabel *monitoringDeviceLabel;
    QComboBox *monitoringDevice;
    QCheckBox *disableAudioDucking;
    QSpacerItem *horizontalSpacer_11;
    QCheckBox *lowLatencyBuffering;
    QGroupBox *audioHotkeysGroupBox;
    QFormLayout *audioSourceLayout;
    QSpacerItem *verticalSpacer_4;
    QLabel *audioMsg;
    QLabel *audioMsg_2;
    QWidget *videoPage;
    QFormLayout *formLayout_3;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_29;
    QComboBox *baseResolution;
    QLabel *baseAspect;
    QLabel *outputResLabel;
    QLabel *label_11;
    QComboBox *downscaleFilter;
    QComboBox *fpsType;
    QStackedWidget *fpsTypes;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *fpsCommon;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *fpsInteger;
    QWidget *page_2;
    QFormLayout *formLayout_4;
    QSpinBox *fpsNumerator;
    QSpinBox *fpsDenominator;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *videoMsg;
    QHBoxLayout *outputResLayout;
    QComboBox *outputResolution;
    QLabel *scaledAspect;
    QWidget *hotkeyPage;
    QVBoxLayout *verticalLayout_25;
    QGridLayout *hotkeySearchLayout;
    QLabel *hotkeySearchLabel;
    QLineEdit *hotkeyFilterSearch;
    QLabel *hotkeyFilterLabel;
    OBSHotkeyEdit *hotkeyFilterInput;
    QPushButton *hotkeyFilterReset;
    QScrollArea *hotkeyScrollArea;
    QWidget *hotkeyScrollContents;
    QFormLayout *hotkeyFormLayout;
    QWidget *accessPage;
    QVBoxLayout *formLayout_41;
    QScrollArea *scrollArea_7;
    QWidget *accessPageContents;
    QVBoxLayout *verticalLayout_42;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *colorsGroupBox;
    QFormLayout *formLayout_8;
    QLabel *colorPresetLabel;
    QComboBox *colorPreset;
    QLabel *colorSelectLabel_1;
    QHBoxLayout *colorSelectLayout_1;
    QLabel *color1;
    QPushButton *choose1;
    QSpacerItem *colorSpacer_1;
    QLabel *colorSelectLabel_2;
    QHBoxLayout *colorSelectLayout_2;
    QLabel *color2;
    QPushButton *choose2;
    QSpacerItem *colorSpacer_2;
    QLabel *colorSelectLabel_3;
    QHBoxLayout *colorSelectLayout_3;
    QLabel *color3;
    QPushButton *choose3;
    QSpacerItem *colorSpacer_3;
    QLabel *colorSelectLabel_4;
    QHBoxLayout *colorSelectLayout_4;
    QLabel *color4;
    QPushButton *choose4;
    QSpacerItem *colorSpacer_4;
    QLabel *colorSelectLabel_5;
    QHBoxLayout *colorSelectLayout_5;
    QLabel *color5;
    QPushButton *choose5;
    QSpacerItem *colorSpacer_5;
    QLabel *colorSelectLabel_6;
    QHBoxLayout *colorSelectLayout_6;
    QLabel *color6;
    QPushButton *choose6;
    QSpacerItem *colorSpacer_6;
    QLabel *colorSelectLabel_7;
    QHBoxLayout *colorSelectLayout_7;
    QLabel *color7;
    QPushButton *choose7;
    QSpacerItem *colorSpacer_7;
    QLabel *colorSelectLabel_8;
    QHBoxLayout *colorSelectLayout_8;
    QLabel *color8;
    QPushButton *choose8;
    QSpacerItem *colorSpacer_8;
    QLabel *colorSelectLabel_9;
    QHBoxLayout *colorSelectLayout_9;
    QLabel *color9;
    QPushButton *choose9;
    QSpacerItem *colorSpacer_9;
    QSpacerItem *verticalSpacer_7;
    QWidget *advancedPage;
    QVBoxLayout *verticalLayout_16;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_23;
    QFrame *widget_11;
    QVBoxLayout *verticalLayout_24;
    QGroupBox *advancedGeneralGroupBox;
    QFormLayout *formLayout_22;
    QLabel *processPriorityLabel;
    QComboBox *processPriority;
    QSpacerItem *horizontalSpacer_13;
    QCheckBox *confirmOnExit;
    QGroupBox *advancedVideoContainer;
    QFormLayout *formLayout_14;
    QLabel *rendererLabel;
    QComboBox *renderer;
    QLabel *adapterLabel;
    QComboBox *adapter;
    QLabel *label_30;
    QComboBox *colorFormat;
    QLabel *label_33;
    QHBoxLayout *horizontalLayout_20;
    QComboBox *colorSpace;
    QLabel *label_34;
    QComboBox *colorRange;
    QLabel *label_sdrWhiteLevel;
    QHBoxLayout *horizontalLayout_sdrPaperWhite;
    QSpinBox *sdrWhiteLevel;
    QLabel *label_hdrNominalPeakLevel;
    QSpinBox *hdrNominalPeakLevel;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *disableOSXVSync;
    QCheckBox *resetOSXVSync;
    QSpacerItem *horizontalSpacer_12;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_17;
    QLabel *label_7;
    QLineEdit *filenameFormatting;
    QCheckBox *overwriteIfExists;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *simpleRBPrefix;
    QLabel *label_58;
    QLineEdit *simpleRBSuffix;
    QLabel *label_57;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *autoRemux;
    QSpacerItem *horizontalSpacer_16;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_18;
    QLabel *label_56;
    QFrame *widget_12;
    QHBoxLayout *horizontalLayout_13;
    QSpinBox *streamDelaySec;
    QLabel *streamDelayInfo;
    QCheckBox *streamDelayPreserve;
    QCheckBox *streamDelayEnable;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox_7;
    QFormLayout *formLayout_19;
    QCheckBox *reconnectEnable;
    QHBoxLayout *horizontalLayout_19;
    QSpinBox *reconnectRetryDelay;
    QLabel *label_22;
    QSpinBox *reconnectMaxRetries;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *advNetworkGroupBox;
    QFormLayout *formLayout_23;
    QLabel *advNetworkDisabled;
    QLabel *bindToIPLabel;
    QComboBox *bindToIP;
    QCheckBox *enableNewSocketLoop;
    QCheckBox *enableLowLatencyMode;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *dynBitrate;
    QGroupBox *sourcesGroup;
    QFormLayout *formLayout_34;
    QSpacerItem *horizontalSpacer_15;
    QCheckBox *browserHWAccel;
    QGroupBox *groupBox_17;
    QFormLayout *formLayout_33;
    QLabel *label_21;
    QComboBox *hotkeyFocusType;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_17;
    QLabel *advancedMsg;
    QLabel *advancedMsg2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicSettings)
    {
        if (OBSBasicSettings->objectName().isEmpty())
            OBSBasicSettings->setObjectName(QString::fromUtf8("OBSBasicSettings"));
        OBSBasicSettings->resize(981, 730);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OBSBasicSettings->sizePolicy().hasHeightForWidth());
        OBSBasicSettings->setSizePolicy(sizePolicy);
        OBSBasicSettings->setMinimumSize(QSize(700, 512));
        verticalLayout = new QVBoxLayout(OBSBasicSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(OBSBasicSettings);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/settings/images/settings/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/settings/images/settings/stream.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/settings/images/settings/output.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/settings/images/settings/audio.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/settings/images/settings/video.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/settings/images/settings/hotkeys.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/settings/images/settings/accessibility.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/settings/images/settings/advanced.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget);
        __qlistwidgetitem7->setIcon(icon7);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMaximumSize(QSize(180, 16777215));
        listWidget->setIconSize(QSize(16, 16));
        listWidget->setSpacing(1);

        horizontalLayout->addWidget(listWidget);

        settingsPages = new QStackedWidget(OBSBasicSettings);
        settingsPages->setObjectName(QString::fromUtf8("settingsPages"));
        generalPage = new QWidget();
        generalPage->setObjectName(QString::fromUtf8("generalPage"));
        verticalLayout_18 = new QVBoxLayout(generalPage);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(generalPage);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setFrameShadow(QFrame::Plain);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 806, 1344));
        verticalLayout_19 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 9);
        widget_2 = new QFrame(scrollAreaWidgetContents_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_20 = new QVBoxLayout(widget_2);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        groupBox_15 = new QGroupBox(widget_2);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        formLayout_32 = new QFormLayout(groupBox_15);
        formLayout_32->setObjectName(QString::fromUtf8("formLayout_32"));
        formLayout_32->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_32->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_32->setContentsMargins(-1, 2, -1, -1);
        label = new QLabel(groupBox_15);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_32->setWidget(0, QFormLayout::LabelRole, label);

        language = new QComboBox(groupBox_15);
        language->setObjectName(QString::fromUtf8("language"));

        formLayout_32->setWidget(0, QFormLayout::FieldRole, language);

        label_42 = new QLabel(groupBox_15);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        formLayout_32->setWidget(1, QFormLayout::LabelRole, label_42);

        theme = new QComboBox(groupBox_15);
        theme->setObjectName(QString::fromUtf8("theme"));

        formLayout_32->setWidget(1, QFormLayout::FieldRole, theme);

        horizontalSpacer_3 = new QSpacerItem(170, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout_32->setItem(2, QFormLayout::LabelRole, horizontalSpacer_3);

        enableAutoUpdates = new QCheckBox(groupBox_15);
        enableAutoUpdates->setObjectName(QString::fromUtf8("enableAutoUpdates"));
        enableAutoUpdates->setChecked(true);

        formLayout_32->setWidget(2, QFormLayout::FieldRole, enableAutoUpdates);

        openStatsOnStartup = new QCheckBox(groupBox_15);
        openStatsOnStartup->setObjectName(QString::fromUtf8("openStatsOnStartup"));

        formLayout_32->setWidget(3, QFormLayout::FieldRole, openStatsOnStartup);

        hideOBSFromCapture = new QCheckBox(groupBox_15);
        hideOBSFromCapture->setObjectName(QString::fromUtf8("hideOBSFromCapture"));

        formLayout_32->setWidget(4, QFormLayout::FieldRole, hideOBSFromCapture);


        verticalLayout_20->addWidget(groupBox_15);

        groupBox_16 = new QGroupBox(widget_2);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        formLayout_2 = new QFormLayout(groupBox_16);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(170, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout_2->setItem(0, QFormLayout::LabelRole, horizontalSpacer_5);

        warnBeforeStreamStart = new QCheckBox(groupBox_16);
        warnBeforeStreamStart->setObjectName(QString::fromUtf8("warnBeforeStreamStart"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, warnBeforeStreamStart);

        warnBeforeStreamStop = new QCheckBox(groupBox_16);
        warnBeforeStreamStop->setObjectName(QString::fromUtf8("warnBeforeStreamStop"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, warnBeforeStreamStop);

        warnBeforeRecordStop = new QCheckBox(groupBox_16);
        warnBeforeRecordStop->setObjectName(QString::fromUtf8("warnBeforeRecordStop"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, warnBeforeRecordStop);

        recordWhenStreaming = new QCheckBox(groupBox_16);
        recordWhenStreaming->setObjectName(QString::fromUtf8("recordWhenStreaming"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, recordWhenStreaming);

        keepRecordStreamStops = new QCheckBox(groupBox_16);
        keepRecordStreamStops->setObjectName(QString::fromUtf8("keepRecordStreamStops"));
        keepRecordStreamStops->setEnabled(false);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, keepRecordStreamStops);

        replayWhileStreaming = new QCheckBox(groupBox_16);
        replayWhileStreaming->setObjectName(QString::fromUtf8("replayWhileStreaming"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, replayWhileStreaming);

        keepReplayStreamStops = new QCheckBox(groupBox_16);
        keepReplayStreamStops->setObjectName(QString::fromUtf8("keepReplayStreamStops"));
        keepReplayStreamStops->setEnabled(false);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, keepReplayStreamStops);


        verticalLayout_20->addWidget(groupBox_16);

        groupBox_10 = new QGroupBox(widget_2);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy2);
        groupBox_10->setFlat(false);
        formLayout_21 = new QFormLayout(groupBox_10);
        formLayout_21->setObjectName(QString::fromUtf8("formLayout_21"));
        formLayout_21->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_21->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_21->setContentsMargins(-1, 2, -1, -1);
        snappingEnabled = new QCheckBox(groupBox_10);
        snappingEnabled->setObjectName(QString::fromUtf8("snappingEnabled"));
        snappingEnabled->setChecked(true);

        formLayout_21->setWidget(0, QFormLayout::FieldRole, snappingEnabled);

        screenSnapping = new QCheckBox(groupBox_10);
        screenSnapping->setObjectName(QString::fromUtf8("screenSnapping"));
        screenSnapping->setChecked(true);

        formLayout_21->setWidget(2, QFormLayout::FieldRole, screenSnapping);

        centerSnapping = new QCheckBox(groupBox_10);
        centerSnapping->setObjectName(QString::fromUtf8("centerSnapping"));
        centerSnapping->setChecked(true);

        formLayout_21->setWidget(4, QFormLayout::FieldRole, centerSnapping);

        sourceSnapping = new QCheckBox(groupBox_10);
        sourceSnapping->setObjectName(QString::fromUtf8("sourceSnapping"));
        sourceSnapping->setChecked(true);

        formLayout_21->setWidget(3, QFormLayout::FieldRole, sourceSnapping);

        snapDistance = new QDoubleSpinBox(groupBox_10);
        snapDistance->setObjectName(QString::fromUtf8("snapDistance"));
        snapDistance->setDecimals(1);
        snapDistance->setSingleStep(0.500000000000000);
        snapDistance->setValue(10.000000000000000);

        formLayout_21->setWidget(1, QFormLayout::FieldRole, snapDistance);

        label_9 = new QLabel(groupBox_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_21->setWidget(1, QFormLayout::LabelRole, label_9);

        horizontalSpacer_4 = new QSpacerItem(170, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout_21->setItem(3, QFormLayout::LabelRole, horizontalSpacer_4);


        verticalLayout_20->addWidget(groupBox_10);

        groupBox_14 = new QGroupBox(widget_2);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        formLayout_28 = new QFormLayout(groupBox_14);
        formLayout_28->setObjectName(QString::fromUtf8("formLayout_28"));
        formLayout_28->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_28->setContentsMargins(-1, 2, -1, -1);
        hideProjectorCursor = new QCheckBox(groupBox_14);
        hideProjectorCursor->setObjectName(QString::fromUtf8("hideProjectorCursor"));

        formLayout_28->setWidget(0, QFormLayout::FieldRole, hideProjectorCursor);

        projectorAlwaysOnTop = new QCheckBox(groupBox_14);
        projectorAlwaysOnTop->setObjectName(QString::fromUtf8("projectorAlwaysOnTop"));

        formLayout_28->setWidget(1, QFormLayout::FieldRole, projectorAlwaysOnTop);

        saveProjectors = new QCheckBox(groupBox_14);
        saveProjectors->setObjectName(QString::fromUtf8("saveProjectors"));

        formLayout_28->setWidget(2, QFormLayout::FieldRole, saveProjectors);

        closeProjectors = new QCheckBox(groupBox_14);
        closeProjectors->setObjectName(QString::fromUtf8("closeProjectors"));

        formLayout_28->setWidget(3, QFormLayout::FieldRole, closeProjectors);

        horizontalSpacer = new QSpacerItem(170, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout_28->setItem(1, QFormLayout::LabelRole, horizontalSpacer);


        verticalLayout_20->addWidget(groupBox_14);

        groupBox_13 = new QGroupBox(widget_2);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        formLayout_29 = new QFormLayout(groupBox_13);
        formLayout_29->setObjectName(QString::fromUtf8("formLayout_29"));
        formLayout_29->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_29->setContentsMargins(-1, 2, -1, -1);
        systemTrayEnabled = new QCheckBox(groupBox_13);
        systemTrayEnabled->setObjectName(QString::fromUtf8("systemTrayEnabled"));

        formLayout_29->setWidget(0, QFormLayout::FieldRole, systemTrayEnabled);

        systemTrayWhenStarted = new QCheckBox(groupBox_13);
        systemTrayWhenStarted->setObjectName(QString::fromUtf8("systemTrayWhenStarted"));
        systemTrayWhenStarted->setEnabled(false);

        formLayout_29->setWidget(1, QFormLayout::FieldRole, systemTrayWhenStarted);

        systemTrayAlways = new QCheckBox(groupBox_13);
        systemTrayAlways->setObjectName(QString::fromUtf8("systemTrayAlways"));
        systemTrayAlways->setEnabled(false);

        formLayout_29->setWidget(2, QFormLayout::FieldRole, systemTrayAlways);

        horizontalSpacer_2 = new QSpacerItem(170, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout_29->setItem(1, QFormLayout::LabelRole, horizontalSpacer_2);


        verticalLayout_20->addWidget(groupBox_13);

        groupBox_18 = new QGroupBox(widget_2);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        formLayout_35 = new QFormLayout(groupBox_18);
        formLayout_35->setObjectName(QString::fromUtf8("formLayout_35"));
        formLayout_35->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_35->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_35->setContentsMargins(-1, 2, -1, -1);
        overflowAlwaysVisible = new QCheckBox(groupBox_18);
        overflowAlwaysVisible->setObjectName(QString::fromUtf8("overflowAlwaysVisible"));

        formLayout_35->setWidget(1, QFormLayout::FieldRole, overflowAlwaysVisible);

        horizontalSpacer_25 = new QSpacerItem(170, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_35->setItem(0, QFormLayout::LabelRole, horizontalSpacer_25);

        overflowSelectionHide = new QCheckBox(groupBox_18);
        overflowSelectionHide->setObjectName(QString::fromUtf8("overflowSelectionHide"));

        formLayout_35->setWidget(2, QFormLayout::FieldRole, overflowSelectionHide);

        previewSafeAreas = new QCheckBox(groupBox_18);
        previewSafeAreas->setObjectName(QString::fromUtf8("previewSafeAreas"));

        formLayout_35->setWidget(3, QFormLayout::FieldRole, previewSafeAreas);

        previewSpacingHelpers = new QCheckBox(groupBox_18);
        previewSpacingHelpers->setObjectName(QString::fromUtf8("previewSpacingHelpers"));

        formLayout_35->setWidget(4, QFormLayout::FieldRole, previewSpacingHelpers);

        overflowHide = new QCheckBox(groupBox_18);
        overflowHide->setObjectName(QString::fromUtf8("overflowHide"));

        formLayout_35->setWidget(0, QFormLayout::FieldRole, overflowHide);


        verticalLayout_20->addWidget(groupBox_18);

        groupBox_19 = new QGroupBox(widget_2);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        formLayout_36 = new QFormLayout(groupBox_19);
        formLayout_36->setObjectName(QString::fromUtf8("formLayout_36"));
        formLayout_36->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_36->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_36->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacer_26 = new QSpacerItem(170, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_36->setItem(0, QFormLayout::LabelRole, horizontalSpacer_26);

        automaticSearch = new QCheckBox(groupBox_19);
        automaticSearch->setObjectName(QString::fromUtf8("automaticSearch"));

        formLayout_36->setWidget(0, QFormLayout::FieldRole, automaticSearch);


        verticalLayout_20->addWidget(groupBox_19);

        groupBox_11 = new QGroupBox(widget_2);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        formLayout_31 = new QFormLayout(groupBox_11);
        formLayout_31->setObjectName(QString::fromUtf8("formLayout_31"));
        formLayout_31->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_31->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_31->setContentsMargins(-1, 2, -1, -1);
        doubleClickSwitch = new QCheckBox(groupBox_11);
        doubleClickSwitch->setObjectName(QString::fromUtf8("doubleClickSwitch"));

        formLayout_31->setWidget(0, QFormLayout::FieldRole, doubleClickSwitch);

        horizontalSpacer_6 = new QSpacerItem(170, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_31->setItem(0, QFormLayout::LabelRole, horizontalSpacer_6);

        studioPortraitLayout = new QCheckBox(groupBox_11);
        studioPortraitLayout->setObjectName(QString::fromUtf8("studioPortraitLayout"));

        formLayout_31->setWidget(1, QFormLayout::FieldRole, studioPortraitLayout);

        prevProgLabelToggle = new QCheckBox(groupBox_11);
        prevProgLabelToggle->setObjectName(QString::fromUtf8("prevProgLabelToggle"));
        prevProgLabelToggle->setChecked(true);

        formLayout_31->setWidget(2, QFormLayout::FieldRole, prevProgLabelToggle);


        verticalLayout_20->addWidget(groupBox_11);

        groupBoxMultiview = new QGroupBox(widget_2);
        groupBoxMultiview->setObjectName(QString::fromUtf8("groupBoxMultiview"));
        formLayoutMultiview = new QFormLayout(groupBoxMultiview);
        formLayoutMultiview->setObjectName(QString::fromUtf8("formLayoutMultiview"));
        formLayoutMultiview->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayoutMultiview->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayoutMultiview->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacerMultiview = new QSpacerItem(170, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayoutMultiview->setItem(0, QFormLayout::LabelRole, horizontalSpacerMultiview);

        multiviewMouseSwitch = new QCheckBox(groupBoxMultiview);
        multiviewMouseSwitch->setObjectName(QString::fromUtf8("multiviewMouseSwitch"));
        multiviewMouseSwitch->setChecked(true);

        formLayoutMultiview->setWidget(0, QFormLayout::FieldRole, multiviewMouseSwitch);

        multiviewDrawNames = new QCheckBox(groupBoxMultiview);
        multiviewDrawNames->setObjectName(QString::fromUtf8("multiviewDrawNames"));
        multiviewDrawNames->setChecked(true);

        formLayoutMultiview->setWidget(1, QFormLayout::FieldRole, multiviewDrawNames);

        multiviewDrawAreas = new QCheckBox(groupBoxMultiview);
        multiviewDrawAreas->setObjectName(QString::fromUtf8("multiviewDrawAreas"));
        multiviewDrawAreas->setChecked(true);

        formLayoutMultiview->setWidget(2, QFormLayout::FieldRole, multiviewDrawAreas);

        multiviewLayout = new QComboBox(groupBoxMultiview);
        multiviewLayout->setObjectName(QString::fromUtf8("multiviewLayout"));

        formLayoutMultiview->setWidget(3, QFormLayout::FieldRole, multiviewLayout);

        label_64 = new QLabel(groupBoxMultiview);
        label_64->setObjectName(QString::fromUtf8("label_64"));

        formLayoutMultiview->setWidget(3, QFormLayout::LabelRole, label_64);


        verticalLayout_20->addWidget(groupBoxMultiview);


        verticalLayout_19->addWidget(widget_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_18->addWidget(scrollArea_2);

        settingsPages->addWidget(generalPage);
        streamPage = new QWidget();
        streamPage->setObjectName(QString::fromUtf8("streamPage"));
        verticalLayout_5 = new QVBoxLayout(streamPage);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QFrame(streamPage);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        sizePolicy2.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy2);
        topStreamLayout = new QFormLayout(widget_5);
        topStreamLayout->setObjectName(QString::fromUtf8("topStreamLayout"));
        topStreamLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        topStreamLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serviceLabel = new QLabel(widget_5);
        serviceLabel->setObjectName(QString::fromUtf8("serviceLabel"));

        topStreamLayout->setWidget(3, QFormLayout::LabelRole, serviceLabel);

        serviceWidget = new QFrame(widget_5);
        serviceWidget->setObjectName(QString::fromUtf8("serviceWidget"));
        serviceWidgetLayout = new QHBoxLayout(serviceWidget);
        serviceWidgetLayout->setObjectName(QString::fromUtf8("serviceWidgetLayout"));
        serviceWidgetLayout->setContentsMargins(0, 0, 0, 0);
        service = new QComboBox(serviceWidget);
        service->setObjectName(QString::fromUtf8("service"));
        service->setMaxVisibleItems(20);

        serviceWidgetLayout->addWidget(service);

        moreInfoButton = new UrlPushButton(serviceWidget);
        moreInfoButton->setObjectName(QString::fromUtf8("moreInfoButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(moreInfoButton->sizePolicy().hasHeightForWidth());
        moreInfoButton->setSizePolicy(sizePolicy3);

        serviceWidgetLayout->addWidget(moreInfoButton);


        topStreamLayout->setWidget(3, QFormLayout::FieldRole, serviceWidget);

        horizontalSpacer_17 = new QSpacerItem(170, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        topStreamLayout->setItem(1, QFormLayout::LabelRole, horizontalSpacer_17);


        verticalLayout_5->addWidget(widget_5);

        streamStackWidget = new QStackedWidget(streamPage);
        streamStackWidget->setObjectName(QString::fromUtf8("streamStackWidget"));
        sizePolicy.setHeightForWidth(streamStackWidget->sizePolicy().hasHeightForWidth());
        streamStackWidget->setSizePolicy(sizePolicy);
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        loginPageLayout = new QFormLayout(loginPage);
        loginPageLayout->setObjectName(QString::fromUtf8("loginPageLayout"));
        horizontalSpacer_20 = new QSpacerItem(170, 19, QSizePolicy::Fixed, QSizePolicy::Minimum);

        loginPageLayout->setItem(0, QFormLayout::LabelRole, horizontalSpacer_20);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        connectAccount = new QPushButton(loginPage);
        connectAccount->setObjectName(QString::fromUtf8("connectAccount"));

        horizontalLayout_16->addWidget(connectAccount);

        horizontalSpacer_21 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_21);


        loginPageLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_16);

        horizontalSpacer_22 = new QSpacerItem(170, 19, QSizePolicy::Fixed, QSizePolicy::Minimum);

        loginPageLayout->setItem(1, QFormLayout::LabelRole, horizontalSpacer_22);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        useStreamKey = new QPushButton(loginPage);
        useStreamKey->setObjectName(QString::fromUtf8("useStreamKey"));

        horizontalLayout_17->addWidget(useStreamKey);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_23);


        loginPageLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_17);

        streamStackWidget->addWidget(loginPage);
        streamKeyPage = new QWidget();
        streamKeyPage->setObjectName(QString::fromUtf8("streamKeyPage"));
        streamkeyPageLayout = new QFormLayout(streamKeyPage);
        streamkeyPageLayout->setObjectName(QString::fromUtf8("streamkeyPageLayout"));
        streamkeyPageLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        streamkeyPageLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serverLabel = new QLabel(streamKeyPage);
        serverLabel->setObjectName(QString::fromUtf8("serverLabel"));

        streamkeyPageLayout->setWidget(0, QFormLayout::LabelRole, serverLabel);

        serverStackedWidget = new QStackedWidget(streamKeyPage);
        serverStackedWidget->setObjectName(QString::fromUtf8("serverStackedWidget"));
        sizePolicy2.setHeightForWidth(serverStackedWidget->sizePolicy().hasHeightForWidth());
        serverStackedWidget->setSizePolicy(sizePolicy2);
        servicePage = new QWidget();
        servicePage->setObjectName(QString::fromUtf8("servicePage"));
        horizontalLayout_21 = new QHBoxLayout(servicePage);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        server = new QComboBox(servicePage);
        server->setObjectName(QString::fromUtf8("server"));

        horizontalLayout_21->addWidget(server);

        serverStackedWidget->addWidget(servicePage);
        customPage = new QWidget();
        customPage->setObjectName(QString::fromUtf8("customPage"));
        horizontalLayout_22 = new QHBoxLayout(customPage);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        customServer = new QLineEdit(customPage);
        customServer->setObjectName(QString::fromUtf8("customServer"));

        horizontalLayout_22->addWidget(customServer);

        serverStackedWidget->addWidget(customPage);

        streamkeyPageLayout->setWidget(0, QFormLayout::FieldRole, serverStackedWidget);

        streamKeyLabel = new QLabel(streamKeyPage);
        streamKeyLabel->setObjectName(QString::fromUtf8("streamKeyLabel"));
        streamKeyLabel->setOpenExternalLinks(true);

        streamkeyPageLayout->setWidget(1, QFormLayout::LabelRole, streamKeyLabel);

        streamKeyWidget = new QFrame(streamKeyPage);
        streamKeyWidget->setObjectName(QString::fromUtf8("streamKeyWidget"));
        horizontalLayout_11 = new QHBoxLayout(streamKeyWidget);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        key = new QLineEdit(streamKeyWidget);
        key->setObjectName(QString::fromUtf8("key"));
        key->setInputMask(QString::fromUtf8(""));
        key->setText(QString::fromUtf8(""));
        key->setEchoMode(QLineEdit::Password);

        horizontalLayout_11->addWidget(key);

        show = new QPushButton(streamKeyWidget);
        show->setObjectName(QString::fromUtf8("show"));

        horizontalLayout_11->addWidget(show);

        getStreamKeyButton = new UrlPushButton(streamKeyWidget);
        getStreamKeyButton->setObjectName(QString::fromUtf8("getStreamKeyButton"));
        getStreamKeyButton->setToolTipDuration(-4);

        horizontalLayout_11->addWidget(getStreamKeyButton);


        streamkeyPageLayout->setWidget(1, QFormLayout::FieldRole, streamKeyWidget);

        horizontalSpacer_18 = new QSpacerItem(170, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        streamkeyPageLayout->setItem(3, QFormLayout::LabelRole, horizontalSpacer_18);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(8);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(7, -1, 7, -1);
        connectedAccountText = new QLabel(streamKeyPage);
        connectedAccountText->setObjectName(QString::fromUtf8("connectedAccountText"));
        connectedAccountText->setStyleSheet(QString::fromUtf8("font-weight: bold"));

        horizontalLayout_23->addWidget(connectedAccountText);

        disconnectAccount = new QPushButton(streamKeyPage);
        disconnectAccount->setObjectName(QString::fromUtf8("disconnectAccount"));

        horizontalLayout_23->addWidget(disconnectAccount);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_24);


        streamkeyPageLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_23);

        bandwidthTestEnable = new QCheckBox(streamKeyPage);
        bandwidthTestEnable->setObjectName(QString::fromUtf8("bandwidthTestEnable"));

        streamkeyPageLayout->setWidget(6, QFormLayout::FieldRole, bandwidthTestEnable);

        useAuth = new QCheckBox(streamKeyPage);
        useAuth->setObjectName(QString::fromUtf8("useAuth"));

        streamkeyPageLayout->setWidget(7, QFormLayout::FieldRole, useAuth);

        authUsernameLabel = new QLabel(streamKeyPage);
        authUsernameLabel->setObjectName(QString::fromUtf8("authUsernameLabel"));

        streamkeyPageLayout->setWidget(9, QFormLayout::LabelRole, authUsernameLabel);

        authUsername = new QLineEdit(streamKeyPage);
        authUsername->setObjectName(QString::fromUtf8("authUsername"));

        streamkeyPageLayout->setWidget(9, QFormLayout::FieldRole, authUsername);

        authPwLabel = new QLabel(streamKeyPage);
        authPwLabel->setObjectName(QString::fromUtf8("authPwLabel"));

        streamkeyPageLayout->setWidget(10, QFormLayout::LabelRole, authPwLabel);

        authPwWidget = new QFrame(streamKeyPage);
        authPwWidget->setObjectName(QString::fromUtf8("authPwWidget"));
        horizontalLayout_25 = new QHBoxLayout(authPwWidget);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        authPw = new QLineEdit(authPwWidget);
        authPw->setObjectName(QString::fromUtf8("authPw"));
        authPw->setEchoMode(QLineEdit::Password);

        horizontalLayout_25->addWidget(authPw);

        authPwShow = new QPushButton(authPwWidget);
        authPwShow->setObjectName(QString::fromUtf8("authPwShow"));

        horizontalLayout_25->addWidget(authPwShow);


        streamkeyPageLayout->setWidget(10, QFormLayout::FieldRole, authPwWidget);

        twitchAddonDropdown = new QComboBox(streamKeyPage);
        twitchAddonDropdown->setObjectName(QString::fromUtf8("twitchAddonDropdown"));

        streamkeyPageLayout->setWidget(8, QFormLayout::FieldRole, twitchAddonDropdown);

        twitchAddonLabel = new QLabel(streamKeyPage);
        twitchAddonLabel->setObjectName(QString::fromUtf8("twitchAddonLabel"));

        streamkeyPageLayout->setWidget(8, QFormLayout::LabelRole, twitchAddonLabel);

        ignoreRecommended = new QCheckBox(streamKeyPage);
        ignoreRecommended->setObjectName(QString::fromUtf8("ignoreRecommended"));

        streamkeyPageLayout->setWidget(11, QFormLayout::FieldRole, ignoreRecommended);

        enforceSettingsLabel = new QLabel(streamKeyPage);
        enforceSettingsLabel->setObjectName(QString::fromUtf8("enforceSettingsLabel"));
        enforceSettingsLabel->setText(QString::fromUtf8(""));
        enforceSettingsLabel->setTextFormat(Qt::RichText);
        enforceSettingsLabel->setOpenExternalLinks(true);

        streamkeyPageLayout->setWidget(12, QFormLayout::FieldRole, enforceSettingsLabel);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        useStreamKeyAdv = new QPushButton(streamKeyPage);
        useStreamKeyAdv->setObjectName(QString::fromUtf8("useStreamKeyAdv"));

        horizontalLayout_28->addWidget(useStreamKeyAdv);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_28);


        streamkeyPageLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_28);

        connectedAccountLabel = new QLabel(streamKeyPage);
        connectedAccountLabel->setObjectName(QString::fromUtf8("connectedAccountLabel"));

        streamkeyPageLayout->setWidget(4, QFormLayout::LabelRole, connectedAccountLabel);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        connectAccount2 = new QPushButton(streamKeyPage);
        connectAccount2->setObjectName(QString::fromUtf8("connectAccount2"));
        connectAccount2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_15->addWidget(connectAccount2);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_19);


        streamkeyPageLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_15);

        streamStackWidget->addWidget(streamKeyPage);

        verticalLayout_5->addWidget(streamStackWidget);

        settingsPages->addWidget(streamPage);
        outputPage = new QWidget();
        outputPage->setObjectName(QString::fromUtf8("outputPage"));
        verticalLayout_2 = new QVBoxLayout(outputPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(outputPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        verticalLayout_6 = new QVBoxLayout(frame);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget = new QFrame(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);
        formLayout_5 = new QFormLayout(widget);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_5->setContentsMargins(8, 8, 16, 8);
        outputModeLabel = new QLabel(widget);
        outputModeLabel->setObjectName(QString::fromUtf8("outputModeLabel"));
        outputModeLabel->setMinimumSize(QSize(170, 0));
        outputModeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, outputModeLabel);

        outputMode = new QComboBox(widget);
        outputMode->addItem(QString());
        outputMode->addItem(QString());
        outputMode->setObjectName(QString::fromUtf8("outputMode"));
        outputMode->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(outputMode->sizePolicy().hasHeightForWidth());
        outputMode->setSizePolicy(sizePolicy5);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, outputMode);


        verticalLayout_6->addWidget(widget);

        outputModePages = new QStackedWidget(frame);
        outputModePages->setObjectName(QString::fromUtf8("outputModePages"));
        easyOutputsPage = new QWidget();
        easyOutputsPage->setObjectName(QString::fromUtf8("easyOutputsPage"));
        verticalLayout_3 = new QVBoxLayout(easyOutputsPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 8, 0);
        simpleOutScroll = new QScrollArea(easyOutputsPage);
        simpleOutScroll->setObjectName(QString::fromUtf8("simpleOutScroll"));
        simpleOutScroll->setFrameShape(QFrame::NoFrame);
        simpleOutScroll->setFrameShadow(QFrame::Plain);
        simpleOutScroll->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 780, 642));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(scrollAreaWidgetContents_3->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_3->setSizePolicy(sizePolicy6);
        verticalLayout_52 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_52->setObjectName(QString::fromUtf8("verticalLayout_52"));
        verticalLayout_52->setContentsMargins(8, 8, 8, 8);
        simpleStreamingGroupBox = new QGroupBox(scrollAreaWidgetContents_3);
        simpleStreamingGroupBox->setObjectName(QString::fromUtf8("simpleStreamingGroupBox"));
        sizePolicy2.setHeightForWidth(simpleStreamingGroupBox->sizePolicy().hasHeightForWidth());
        simpleStreamingGroupBox->setSizePolicy(sizePolicy2);
        simpleStreamingLayout = new QFormLayout(simpleStreamingGroupBox);
        simpleStreamingLayout->setObjectName(QString::fromUtf8("simpleStreamingLayout"));
        simpleStreamingLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        simpleStreamingLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        simpleStreamingLayout->setContentsMargins(8, 8, 8, 8);
        label_19 = new QLabel(simpleStreamingGroupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(170, 0));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        simpleStreamingLayout->setWidget(0, QFormLayout::LabelRole, label_19);

        simpleOutputVBitrate = new QSpinBox(simpleStreamingGroupBox);
        simpleOutputVBitrate->setObjectName(QString::fromUtf8("simpleOutputVBitrate"));
        simpleOutputVBitrate->setMinimum(200);
        simpleOutputVBitrate->setMaximum(1000000);
        simpleOutputVBitrate->setValue(2000);

        simpleStreamingLayout->setWidget(0, QFormLayout::FieldRole, simpleOutputVBitrate);

        label_20 = new QLabel(simpleStreamingGroupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        simpleStreamingLayout->setWidget(1, QFormLayout::LabelRole, label_20);

        simpleOutputABitrate = new QComboBox(simpleStreamingGroupBox);
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->setObjectName(QString::fromUtf8("simpleOutputABitrate"));

        simpleStreamingLayout->setWidget(1, QFormLayout::FieldRole, simpleOutputABitrate);

        simpleOutStrEncoderLabel = new QLabel(simpleStreamingGroupBox);
        simpleOutStrEncoderLabel->setObjectName(QString::fromUtf8("simpleOutStrEncoderLabel"));

        simpleStreamingLayout->setWidget(2, QFormLayout::LabelRole, simpleOutStrEncoderLabel);

        simpleOutStrEncoder = new QComboBox(simpleStreamingGroupBox);
        simpleOutStrEncoder->setObjectName(QString::fromUtf8("simpleOutStrEncoder"));

        simpleStreamingLayout->setWidget(2, QFormLayout::FieldRole, simpleOutStrEncoder);

        simpleOutPresetLabel = new QLabel(simpleStreamingGroupBox);
        simpleOutPresetLabel->setObjectName(QString::fromUtf8("simpleOutPresetLabel"));
        simpleOutPresetLabel->setEnabled(true);

        simpleStreamingLayout->setWidget(3, QFormLayout::LabelRole, simpleOutPresetLabel);

        simpleOutPreset = new QComboBox(simpleStreamingGroupBox);
        simpleOutPreset->setObjectName(QString::fromUtf8("simpleOutPreset"));

        simpleStreamingLayout->setWidget(3, QFormLayout::FieldRole, simpleOutPreset);

        simpleOutAdvanced = new QCheckBox(simpleStreamingGroupBox);
        simpleOutAdvanced->setObjectName(QString::fromUtf8("simpleOutAdvanced"));
        simpleOutAdvanced->setChecked(true);

        simpleStreamingLayout->setWidget(4, QFormLayout::FieldRole, simpleOutAdvanced);

        label_23 = new QLabel(simpleStreamingGroupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        simpleStreamingLayout->setWidget(5, QFormLayout::LabelRole, label_23);

        simpleOutCustom = new QLineEdit(simpleStreamingGroupBox);
        simpleOutCustom->setObjectName(QString::fromUtf8("simpleOutCustom"));

        simpleStreamingLayout->setWidget(5, QFormLayout::FieldRole, simpleOutCustom);


        verticalLayout_52->addWidget(simpleStreamingGroupBox);

        simpleRecordingGroupBox = new QGroupBox(scrollAreaWidgetContents_3);
        simpleRecordingGroupBox->setObjectName(QString::fromUtf8("simpleRecordingGroupBox"));
        sizePolicy2.setHeightForWidth(simpleRecordingGroupBox->sizePolicy().hasHeightForWidth());
        simpleRecordingGroupBox->setSizePolicy(sizePolicy2);
        formLayout_6 = new QFormLayout(simpleRecordingGroupBox);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_6->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_6->setContentsMargins(8, 8, 8, 8);
        label_18 = new QLabel(simpleRecordingGroupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(170, 0));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_18);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        simpleOutputPath = new QLineEdit(simpleRecordingGroupBox);
        simpleOutputPath->setObjectName(QString::fromUtf8("simpleOutputPath"));
        simpleOutputPath->setEnabled(true);

        horizontalLayout_5->addWidget(simpleOutputPath);

        simpleOutputBrowse = new QPushButton(simpleRecordingGroupBox);
        simpleOutputBrowse->setObjectName(QString::fromUtf8("simpleOutputBrowse"));
        simpleOutputBrowse->setEnabled(true);

        horizontalLayout_5->addWidget(simpleOutputBrowse);


        formLayout_6->setLayout(0, QFormLayout::FieldRole, horizontalLayout_5);

        simpleNoSpace = new QCheckBox(simpleRecordingGroupBox);
        simpleNoSpace->setObjectName(QString::fromUtf8("simpleNoSpace"));
        simpleNoSpace->setChecked(true);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, simpleNoSpace);

        label_26 = new QLabel(simpleRecordingGroupBox);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_26);

        simpleOutRecQuality = new QComboBox(simpleRecordingGroupBox);
        simpleOutRecQuality->setObjectName(QString::fromUtf8("simpleOutRecQuality"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, simpleOutRecQuality);

        simpleOutRecFormatLabel = new QLabel(simpleRecordingGroupBox);
        simpleOutRecFormatLabel->setObjectName(QString::fromUtf8("simpleOutRecFormatLabel"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, simpleOutRecFormatLabel);

        simpleOutRecFormat = new QComboBox(simpleRecordingGroupBox);
        simpleOutRecFormat->addItem(QString::fromUtf8("flv"));
        simpleOutRecFormat->addItem(QString::fromUtf8("mp4"));
        simpleOutRecFormat->addItem(QString::fromUtf8("mov"));
        simpleOutRecFormat->addItem(QString::fromUtf8("mkv"));
        simpleOutRecFormat->addItem(QString::fromUtf8("ts"));
        simpleOutRecFormat->addItem(QString::fromUtf8("m3u8"));
        simpleOutRecFormat->setObjectName(QString::fromUtf8("simpleOutRecFormat"));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, simpleOutRecFormat);

        simpleOutRecEncoderLabel = new QLabel(simpleRecordingGroupBox);
        simpleOutRecEncoderLabel->setObjectName(QString::fromUtf8("simpleOutRecEncoderLabel"));

        formLayout_6->setWidget(4, QFormLayout::LabelRole, simpleOutRecEncoderLabel);

        simpleOutRecEncoder = new QComboBox(simpleRecordingGroupBox);
        simpleOutRecEncoder->setObjectName(QString::fromUtf8("simpleOutRecEncoder"));

        formLayout_6->setWidget(4, QFormLayout::FieldRole, simpleOutRecEncoder);

        label_420 = new QLabel(simpleRecordingGroupBox);
        label_420->setObjectName(QString::fromUtf8("label_420"));

        formLayout_6->setWidget(5, QFormLayout::LabelRole, label_420);

        simpleOutMuxCustom = new QLineEdit(simpleRecordingGroupBox);
        simpleOutMuxCustom->setObjectName(QString::fromUtf8("simpleOutMuxCustom"));

        formLayout_6->setWidget(5, QFormLayout::FieldRole, simpleOutMuxCustom);

        simpleReplayBuf = new QCheckBox(simpleRecordingGroupBox);
        simpleReplayBuf->setObjectName(QString::fromUtf8("simpleReplayBuf"));
        simpleReplayBuf->setChecked(true);

        formLayout_6->setWidget(6, QFormLayout::FieldRole, simpleReplayBuf);


        verticalLayout_52->addWidget(simpleRecordingGroupBox);

        replayBufferGroupBox = new QGroupBox(scrollAreaWidgetContents_3);
        replayBufferGroupBox->setObjectName(QString::fromUtf8("replayBufferGroupBox"));
        formLayout_24 = new QFormLayout(replayBufferGroupBox);
        formLayout_24->setObjectName(QString::fromUtf8("formLayout_24"));
        formLayout_24->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_24->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_24->setContentsMargins(8, 8, 8, 8);
        label_35 = new QLabel(replayBufferGroupBox);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        formLayout_24->setWidget(0, QFormLayout::LabelRole, label_35);

        simpleRBSecMax = new QSpinBox(replayBufferGroupBox);
        simpleRBSecMax->setObjectName(QString::fromUtf8("simpleRBSecMax"));
        simpleRBSecMax->setSuffix(QString::fromUtf8(" sec"));
        simpleRBSecMax->setMinimum(5);
        simpleRBSecMax->setMaximum(21600);
        simpleRBSecMax->setValue(15);

        formLayout_24->setWidget(0, QFormLayout::FieldRole, simpleRBSecMax);

        simpleRBMegsMaxLabel = new QLabel(replayBufferGroupBox);
        simpleRBMegsMaxLabel->setObjectName(QString::fromUtf8("simpleRBMegsMaxLabel"));

        formLayout_24->setWidget(1, QFormLayout::LabelRole, simpleRBMegsMaxLabel);

        simpleRBMegsMax = new QSpinBox(replayBufferGroupBox);
        simpleRBMegsMax->setObjectName(QString::fromUtf8("simpleRBMegsMax"));
        simpleRBMegsMax->setSuffix(QString::fromUtf8(" MB"));
        simpleRBMegsMax->setMinimum(20);
        simpleRBMegsMax->setMaximum(8192);
        simpleRBMegsMax->setValue(512);

        formLayout_24->setWidget(1, QFormLayout::FieldRole, simpleRBMegsMax);

        simpleRBEstimate = new QLabel(replayBufferGroupBox);
        simpleRBEstimate->setObjectName(QString::fromUtf8("simpleRBEstimate"));
        simpleRBEstimate->setText(QString::fromUtf8(""));

        formLayout_24->setWidget(2, QFormLayout::FieldRole, simpleRBEstimate);


        verticalLayout_52->addWidget(replayBufferGroupBox);

        simpleOutInfoLayout = new QVBoxLayout();
        simpleOutInfoLayout->setObjectName(QString::fromUtf8("simpleOutInfoLayout"));
        simpleOutInfoLayout->setContentsMargins(10, 10, 10, 10);

        verticalLayout_52->addLayout(simpleOutInfoLayout);

        simpleOutputContainer = new QFrame(scrollAreaWidgetContents_3);
        simpleOutputContainer->setObjectName(QString::fromUtf8("simpleOutputContainer"));
        simpleOutputContainer->setMinimumSize(QSize(0, 20));
        verticalLayout_4 = new QVBoxLayout(simpleOutputContainer);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_52->addWidget(simpleOutputContainer);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_52->addItem(verticalSpacer_2);

        simpleOutScroll->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(simpleOutScroll);

        outputModePages->addWidget(easyOutputsPage);
        advOutputsPage = new QWidget();
        advOutputsPage->setObjectName(QString::fromUtf8("advOutputsPage"));
        verticalLayout_8 = new QVBoxLayout(advOutputsPage);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        advOutTabs = new QTabWidget(advOutputsPage);
        advOutTabs->setObjectName(QString::fromUtf8("advOutTabs"));
        advOutTabs->setUsesScrollButtons(true);
        advOutputStreamTab = new QWidget();
        advOutputStreamTab->setObjectName(QString::fromUtf8("advOutputStreamTab"));
        verticalLayout_12 = new QVBoxLayout(advOutputStreamTab);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 8, 8, 0);
        scrollArea_3 = new QScrollArea(advOutputStreamTab);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setFrameShadow(QFrame::Plain);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 493, 165));
        verticalLayout_14 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 6, 0);
        advOutTopContainer = new QGroupBox(scrollAreaWidgetContents_5);
        advOutTopContainer->setObjectName(QString::fromUtf8("advOutTopContainer"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(advOutTopContainer->sizePolicy().hasHeightForWidth());
        advOutTopContainer->setSizePolicy(sizePolicy7);
        advOutTopLayout = new QFormLayout(advOutTopContainer);
        advOutTopLayout->setObjectName(QString::fromUtf8("advOutTopLayout"));
        advOutTopLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        advOutTopLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        advOutTopLayout->setContentsMargins(8, 2, 8, 8);
        label_28 = new QLabel(advOutTopContainer);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(170, 0));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        advOutTopLayout->setWidget(1, QFormLayout::LabelRole, label_28);

        widget_8 = new QFrame(advOutTopContainer);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy8);
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        advOutTrack1 = new QRadioButton(widget_8);
        advOutTrack1->setObjectName(QString::fromUtf8("advOutTrack1"));
        advOutTrack1->setText(QString::fromUtf8("1"));
        advOutTrack1->setChecked(true);

        horizontalLayout_7->addWidget(advOutTrack1);

        advOutTrack2 = new QRadioButton(widget_8);
        advOutTrack2->setObjectName(QString::fromUtf8("advOutTrack2"));
        advOutTrack2->setText(QString::fromUtf8("2"));

        horizontalLayout_7->addWidget(advOutTrack2);

        advOutTrack3 = new QRadioButton(widget_8);
        advOutTrack3->setObjectName(QString::fromUtf8("advOutTrack3"));
        advOutTrack3->setText(QString::fromUtf8("3"));

        horizontalLayout_7->addWidget(advOutTrack3);

        advOutTrack4 = new QRadioButton(widget_8);
        advOutTrack4->setObjectName(QString::fromUtf8("advOutTrack4"));
        advOutTrack4->setText(QString::fromUtf8("4"));

        horizontalLayout_7->addWidget(advOutTrack4);

        advOutTrack5 = new QRadioButton(widget_8);
        advOutTrack5->setObjectName(QString::fromUtf8("advOutTrack5"));
        advOutTrack5->setText(QString::fromUtf8("5"));

        horizontalLayout_7->addWidget(advOutTrack5);

        advOutTrack6 = new QRadioButton(widget_8);
        advOutTrack6->setObjectName(QString::fromUtf8("advOutTrack6"));
        advOutTrack6->setText(QString::fromUtf8("6"));

        horizontalLayout_7->addWidget(advOutTrack6);


        advOutTopLayout->setWidget(1, QFormLayout::FieldRole, widget_8);

        advOutEncLabel = new QLabel(advOutTopContainer);
        advOutEncLabel->setObjectName(QString::fromUtf8("advOutEncLabel"));

        advOutTopLayout->setWidget(2, QFormLayout::LabelRole, advOutEncLabel);

        advOutEncoder = new QComboBox(advOutTopContainer);
        advOutEncoder->setObjectName(QString::fromUtf8("advOutEncoder"));

        advOutTopLayout->setWidget(2, QFormLayout::FieldRole, advOutEncoder);

        advOutUseRescale = new QCheckBox(advOutTopContainer);
        advOutUseRescale->setObjectName(QString::fromUtf8("advOutUseRescale"));
        sizePolicy1.setHeightForWidth(advOutUseRescale->sizePolicy().hasHeightForWidth());
        advOutUseRescale->setSizePolicy(sizePolicy1);
        advOutUseRescale->setLayoutDirection(Qt::RightToLeft);

        advOutTopLayout->setWidget(3, QFormLayout::LabelRole, advOutUseRescale);

        advOutRescale = new QComboBox(advOutTopContainer);
        advOutRescale->setObjectName(QString::fromUtf8("advOutRescale"));
        advOutRescale->setEnabled(false);
        advOutRescale->setEditable(true);

        advOutTopLayout->setWidget(3, QFormLayout::FieldRole, advOutRescale);


        verticalLayout_14->addWidget(advOutTopContainer);

        advOutEncoderProps = new QGroupBox(scrollAreaWidgetContents_5);
        advOutEncoderProps->setObjectName(QString::fromUtf8("advOutEncoderProps"));
        sizePolicy7.setHeightForWidth(advOutEncoderProps->sizePolicy().hasHeightForWidth());
        advOutEncoderProps->setSizePolicy(sizePolicy7);
        advOutEncoderLayout = new QVBoxLayout(advOutEncoderProps);
        advOutEncoderLayout->setObjectName(QString::fromUtf8("advOutEncoderLayout"));
        advOutEncoderLayout->setContentsMargins(8, 2, 8, 8);

        verticalLayout_14->addWidget(advOutEncoderProps);

        verticalSpacer_0 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_0);

        scrollArea_3->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_12->addWidget(scrollArea_3);

        advOutTabs->addTab(advOutputStreamTab, QString());
        advOutputRecordTab = new QWidget();
        advOutputRecordTab->setObjectName(QString::fromUtf8("advOutputRecordTab"));
        verticalLayout_11 = new QVBoxLayout(advOutputRecordTab);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        advOutRecTypeContainer = new QFrame(advOutputRecordTab);
        advOutRecTypeContainer->setObjectName(QString::fromUtf8("advOutRecTypeContainer"));
        formLayout_9 = new QFormLayout(advOutRecTypeContainer);
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        formLayout_9->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_9->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_9->setContentsMargins(8, 8, 16, 8);
        label_31 = new QLabel(advOutRecTypeContainer);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMinimumSize(QSize(170, 0));
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_31);

        advOutRecType = new QComboBox(advOutRecTypeContainer);
        advOutRecType->addItem(QString());
        advOutRecType->addItem(QString());
        advOutRecType->setObjectName(QString::fromUtf8("advOutRecType"));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, advOutRecType);


        verticalLayout_11->addWidget(advOutRecTypeContainer);

        stackedWidget = new QStackedWidget(advOutputRecordTab);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        advOutRecStandard = new QWidget();
        advOutRecStandard->setObjectName(QString::fromUtf8("advOutRecStandard"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(advOutRecStandard->sizePolicy().hasHeightForWidth());
        advOutRecStandard->setSizePolicy(sizePolicy9);
        verticalLayout_13 = new QVBoxLayout(advOutRecStandard);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 8, 0);
        scrollArea_4 = new QScrollArea(advOutRecStandard);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        sizePolicy.setHeightForWidth(scrollArea_4->sizePolicy().hasHeightForWidth());
        scrollArea_4->setSizePolicy(sizePolicy);
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setFrameShadow(QFrame::Plain);
        scrollArea_4->setLineWidth(0);
        scrollArea_4->setWidgetResizable(true);
        scrollArea_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 620, 391));
        sizePolicy6.setHeightForWidth(scrollAreaWidgetContents_4->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_4->setSizePolicy(sizePolicy6);
        verticalLayout_21 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 6, 0);
        advOutRecTopContainer = new QGroupBox(scrollAreaWidgetContents_4);
        advOutRecTopContainer->setObjectName(QString::fromUtf8("advOutRecTopContainer"));
        sizePolicy7.setHeightForWidth(advOutRecTopContainer->sizePolicy().hasHeightForWidth());
        advOutRecTopContainer->setSizePolicy(sizePolicy7);
        formLayout_16 = new QFormLayout(advOutRecTopContainer);
        formLayout_16->setObjectName(QString::fromUtf8("formLayout_16"));
        formLayout_16->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_16->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_16->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_16->setContentsMargins(8, 2, 10, 8);
        label_32 = new QLabel(advOutRecTopContainer);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy6.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy6);
        label_32->setMinimumSize(QSize(170, 0));
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_16->setWidget(0, QFormLayout::LabelRole, label_32);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        advOutRecPath = new QLineEdit(advOutRecTopContainer);
        advOutRecPath->setObjectName(QString::fromUtf8("advOutRecPath"));
        advOutRecPath->setEnabled(true);
        sizePolicy4.setHeightForWidth(advOutRecPath->sizePolicy().hasHeightForWidth());
        advOutRecPath->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(advOutRecPath);

        advOutRecPathBrowse = new QPushButton(advOutRecTopContainer);
        advOutRecPathBrowse->setObjectName(QString::fromUtf8("advOutRecPathBrowse"));
        advOutRecPathBrowse->setEnabled(true);
        QSizePolicy sizePolicy10(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(advOutRecPathBrowse->sizePolicy().hasHeightForWidth());
        advOutRecPathBrowse->setSizePolicy(sizePolicy10);

        horizontalLayout_6->addWidget(advOutRecPathBrowse);


        formLayout_16->setLayout(0, QFormLayout::FieldRole, horizontalLayout_6);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_16->setItem(1, QFormLayout::LabelRole, horizontalSpacer_27);

        advOutNoSpace = new QCheckBox(advOutRecTopContainer);
        advOutNoSpace->setObjectName(QString::fromUtf8("advOutNoSpace"));
        sizePolicy10.setHeightForWidth(advOutNoSpace->sizePolicy().hasHeightForWidth());
        advOutNoSpace->setSizePolicy(sizePolicy10);
        advOutNoSpace->setChecked(true);

        formLayout_16->setWidget(1, QFormLayout::FieldRole, advOutNoSpace);

        label_43 = new QLabel(advOutRecTopContainer);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        formLayout_16->setWidget(2, QFormLayout::LabelRole, label_43);

        advOutRecFormat = new QComboBox(advOutRecTopContainer);
        advOutRecFormat->addItem(QString::fromUtf8("flv"));
        advOutRecFormat->addItem(QString::fromUtf8("mp4"));
        advOutRecFormat->addItem(QString::fromUtf8("mov"));
        advOutRecFormat->addItem(QString::fromUtf8("mkv"));
        advOutRecFormat->addItem(QString::fromUtf8("ts"));
        advOutRecFormat->addItem(QString::fromUtf8("m3u8"));
        advOutRecFormat->setObjectName(QString::fromUtf8("advOutRecFormat"));
        sizePolicy6.setHeightForWidth(advOutRecFormat->sizePolicy().hasHeightForWidth());
        advOutRecFormat->setSizePolicy(sizePolicy6);

        formLayout_16->setWidget(2, QFormLayout::FieldRole, advOutRecFormat);

        label_29 = new QLabel(advOutRecTopContainer);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        formLayout_16->setWidget(3, QFormLayout::LabelRole, label_29);

        advRecTrackWidget = new QStackedWidget(advOutRecTopContainer);
        advRecTrackWidget->setObjectName(QString::fromUtf8("advRecTrackWidget"));
        sizePolicy8.setHeightForWidth(advRecTrackWidget->sizePolicy().hasHeightForWidth());
        advRecTrackWidget->setSizePolicy(sizePolicy8);
        recTracks = new QWidget();
        recTracks->setObjectName(QString::fromUtf8("recTracks"));
        horizontalLayout_9 = new QHBoxLayout(recTracks);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        advOutRecTrack1 = new QCheckBox(recTracks);
        advOutRecTrack1->setObjectName(QString::fromUtf8("advOutRecTrack1"));
        sizePolicy10.setHeightForWidth(advOutRecTrack1->sizePolicy().hasHeightForWidth());
        advOutRecTrack1->setSizePolicy(sizePolicy10);
        advOutRecTrack1->setText(QString::fromUtf8("1"));

        horizontalLayout_9->addWidget(advOutRecTrack1);

        advOutRecTrack2 = new QCheckBox(recTracks);
        advOutRecTrack2->setObjectName(QString::fromUtf8("advOutRecTrack2"));
        sizePolicy10.setHeightForWidth(advOutRecTrack2->sizePolicy().hasHeightForWidth());
        advOutRecTrack2->setSizePolicy(sizePolicy10);
        advOutRecTrack2->setText(QString::fromUtf8("2"));

        horizontalLayout_9->addWidget(advOutRecTrack2);

        advOutRecTrack3 = new QCheckBox(recTracks);
        advOutRecTrack3->setObjectName(QString::fromUtf8("advOutRecTrack3"));
        sizePolicy10.setHeightForWidth(advOutRecTrack3->sizePolicy().hasHeightForWidth());
        advOutRecTrack3->setSizePolicy(sizePolicy10);
        advOutRecTrack3->setText(QString::fromUtf8("3"));

        horizontalLayout_9->addWidget(advOutRecTrack3);

        advOutRecTrack4 = new QCheckBox(recTracks);
        advOutRecTrack4->setObjectName(QString::fromUtf8("advOutRecTrack4"));
        sizePolicy10.setHeightForWidth(advOutRecTrack4->sizePolicy().hasHeightForWidth());
        advOutRecTrack4->setSizePolicy(sizePolicy10);
        advOutRecTrack4->setText(QString::fromUtf8("4"));

        horizontalLayout_9->addWidget(advOutRecTrack4);

        advOutRecTrack5 = new QCheckBox(recTracks);
        advOutRecTrack5->setObjectName(QString::fromUtf8("advOutRecTrack5"));
        sizePolicy10.setHeightForWidth(advOutRecTrack5->sizePolicy().hasHeightForWidth());
        advOutRecTrack5->setSizePolicy(sizePolicy10);
        advOutRecTrack5->setText(QString::fromUtf8("5"));

        horizontalLayout_9->addWidget(advOutRecTrack5);

        advOutRecTrack6 = new QCheckBox(recTracks);
        advOutRecTrack6->setObjectName(QString::fromUtf8("advOutRecTrack6"));
        sizePolicy10.setHeightForWidth(advOutRecTrack6->sizePolicy().hasHeightForWidth());
        advOutRecTrack6->setSizePolicy(sizePolicy10);
        advOutRecTrack6->setText(QString::fromUtf8("6"));

        horizontalLayout_9->addWidget(advOutRecTrack6);

        advRecTrackWidget->addWidget(recTracks);
        flvTracks = new QWidget();
        flvTracks->setObjectName(QString::fromUtf8("flvTracks"));
        horizontalLayout_8 = new QHBoxLayout(flvTracks);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        flvTrack1 = new QRadioButton(flvTracks);
        flvTrack1->setObjectName(QString::fromUtf8("flvTrack1"));
        sizePolicy10.setHeightForWidth(flvTrack1->sizePolicy().hasHeightForWidth());
        flvTrack1->setSizePolicy(sizePolicy10);

        horizontalLayout_8->addWidget(flvTrack1);

        flvTrack2 = new QRadioButton(flvTracks);
        flvTrack2->setObjectName(QString::fromUtf8("flvTrack2"));
        sizePolicy10.setHeightForWidth(flvTrack2->sizePolicy().hasHeightForWidth());
        flvTrack2->setSizePolicy(sizePolicy10);

        horizontalLayout_8->addWidget(flvTrack2);

        flvTrack3 = new QRadioButton(flvTracks);
        flvTrack3->setObjectName(QString::fromUtf8("flvTrack3"));
        sizePolicy10.setHeightForWidth(flvTrack3->sizePolicy().hasHeightForWidth());
        flvTrack3->setSizePolicy(sizePolicy10);

        horizontalLayout_8->addWidget(flvTrack3);

        flvTrack4 = new QRadioButton(flvTracks);
        flvTrack4->setObjectName(QString::fromUtf8("flvTrack4"));
        sizePolicy10.setHeightForWidth(flvTrack4->sizePolicy().hasHeightForWidth());
        flvTrack4->setSizePolicy(sizePolicy10);

        horizontalLayout_8->addWidget(flvTrack4);

        flvTrack5 = new QRadioButton(flvTracks);
        flvTrack5->setObjectName(QString::fromUtf8("flvTrack5"));
        sizePolicy10.setHeightForWidth(flvTrack5->sizePolicy().hasHeightForWidth());
        flvTrack5->setSizePolicy(sizePolicy10);

        horizontalLayout_8->addWidget(flvTrack5);

        flvTrack6 = new QRadioButton(flvTracks);
        flvTrack6->setObjectName(QString::fromUtf8("flvTrack6"));
        sizePolicy10.setHeightForWidth(flvTrack6->sizePolicy().hasHeightForWidth());
        flvTrack6->setSizePolicy(sizePolicy10);

        horizontalLayout_8->addWidget(flvTrack6);

        advRecTrackWidget->addWidget(flvTracks);

        formLayout_16->setWidget(3, QFormLayout::FieldRole, advRecTrackWidget);

        advOutRecEncLabel = new QLabel(advOutRecTopContainer);
        advOutRecEncLabel->setObjectName(QString::fromUtf8("advOutRecEncLabel"));

        formLayout_16->setWidget(4, QFormLayout::LabelRole, advOutRecEncLabel);

        advOutRecEncoder = new QComboBox(advOutRecTopContainer);
        advOutRecEncoder->setObjectName(QString::fromUtf8("advOutRecEncoder"));
        sizePolicy6.setHeightForWidth(advOutRecEncoder->sizePolicy().hasHeightForWidth());
        advOutRecEncoder->setSizePolicy(sizePolicy6);

        formLayout_16->setWidget(4, QFormLayout::FieldRole, advOutRecEncoder);

        advOutRecUseRescale = new QCheckBox(advOutRecTopContainer);
        advOutRecUseRescale->setObjectName(QString::fromUtf8("advOutRecUseRescale"));
        sizePolicy10.setHeightForWidth(advOutRecUseRescale->sizePolicy().hasHeightForWidth());
        advOutRecUseRescale->setSizePolicy(sizePolicy10);
        advOutRecUseRescale->setLayoutDirection(Qt::RightToLeft);

        formLayout_16->setWidget(5, QFormLayout::LabelRole, advOutRecUseRescale);

        advOutRecRescaleContainer = new QFrame(advOutRecTopContainer);
        advOutRecRescaleContainer->setObjectName(QString::fromUtf8("advOutRecRescaleContainer"));
        horizontalLayout_4 = new QHBoxLayout(advOutRecRescaleContainer);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        advOutRecRescale = new QComboBox(advOutRecRescaleContainer);
        advOutRecRescale->setObjectName(QString::fromUtf8("advOutRecRescale"));
        advOutRecRescale->setEnabled(false);
        sizePolicy6.setHeightForWidth(advOutRecRescale->sizePolicy().hasHeightForWidth());
        advOutRecRescale->setSizePolicy(sizePolicy6);
        advOutRecRescale->setEditable(true);

        horizontalLayout_4->addWidget(advOutRecRescale);


        formLayout_16->setWidget(5, QFormLayout::FieldRole, advOutRecRescaleContainer);

        label_9001 = new QLabel(advOutRecTopContainer);
        label_9001->setObjectName(QString::fromUtf8("label_9001"));

        formLayout_16->setWidget(6, QFormLayout::LabelRole, label_9001);

        advOutMuxCustom = new QLineEdit(advOutRecTopContainer);
        advOutMuxCustom->setObjectName(QString::fromUtf8("advOutMuxCustom"));
        sizePolicy4.setHeightForWidth(advOutMuxCustom->sizePolicy().hasHeightForWidth());
        advOutMuxCustom->setSizePolicy(sizePolicy4);

        formLayout_16->setWidget(6, QFormLayout::FieldRole, advOutMuxCustom);

        advOutSplitFile = new QCheckBox(advOutRecTopContainer);
        advOutSplitFile->setObjectName(QString::fromUtf8("advOutSplitFile"));
        sizePolicy1.setHeightForWidth(advOutSplitFile->sizePolicy().hasHeightForWidth());
        advOutSplitFile->setSizePolicy(sizePolicy1);
        advOutSplitFile->setLayoutDirection(Qt::RightToLeft);

        formLayout_16->setWidget(7, QFormLayout::LabelRole, advOutSplitFile);

        advOutSplitFileType = new QComboBox(advOutRecTopContainer);
        advOutSplitFileType->addItem(QString());
        advOutSplitFileType->addItem(QString());
        advOutSplitFileType->addItem(QString());
        advOutSplitFileType->setObjectName(QString::fromUtf8("advOutSplitFileType"));
        advOutSplitFileType->setEnabled(false);

        formLayout_16->setWidget(7, QFormLayout::FieldRole, advOutSplitFileType);

        advOutSplitFileTimeLabel = new QLabel(advOutRecTopContainer);
        advOutSplitFileTimeLabel->setObjectName(QString::fromUtf8("advOutSplitFileTimeLabel"));

        formLayout_16->setWidget(8, QFormLayout::LabelRole, advOutSplitFileTimeLabel);

        advOutSplitFileTime = new QSpinBox(advOutRecTopContainer);
        advOutSplitFileTime->setObjectName(QString::fromUtf8("advOutSplitFileTime"));
        advOutSplitFileTime->setMinimum(1);
        advOutSplitFileTime->setMaximum(525600);
        advOutSplitFileTime->setValue(15);

        formLayout_16->setWidget(8, QFormLayout::FieldRole, advOutSplitFileTime);

        advOutSplitFileSizeLabel = new QLabel(advOutRecTopContainer);
        advOutSplitFileSizeLabel->setObjectName(QString::fromUtf8("advOutSplitFileSizeLabel"));

        formLayout_16->setWidget(9, QFormLayout::LabelRole, advOutSplitFileSizeLabel);

        advOutSplitFileSize = new QSpinBox(advOutRecTopContainer);
        advOutSplitFileSize->setObjectName(QString::fromUtf8("advOutSplitFileSize"));
        advOutSplitFileSize->setMinimum(20);
        advOutSplitFileSize->setMaximum(1073741824);
        advOutSplitFileSize->setValue(2048);

        formLayout_16->setWidget(9, QFormLayout::FieldRole, advOutSplitFileSize);

        advOutSplitFileRstTS = new QCheckBox(advOutRecTopContainer);
        advOutSplitFileRstTS->setObjectName(QString::fromUtf8("advOutSplitFileRstTS"));
        advOutSplitFileRstTS->setChecked(true);

        formLayout_16->setWidget(10, QFormLayout::FieldRole, advOutSplitFileRstTS);


        verticalLayout_21->addWidget(advOutRecTopContainer);

        advOutRecEncoderProps = new QGroupBox(scrollAreaWidgetContents_4);
        advOutRecEncoderProps->setObjectName(QString::fromUtf8("advOutRecEncoderProps"));
        sizePolicy7.setHeightForWidth(advOutRecEncoderProps->sizePolicy().hasHeightForWidth());
        advOutRecEncoderProps->setSizePolicy(sizePolicy7);
        verticalLayout_15 = new QVBoxLayout(advOutRecEncoderProps);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(8, 2, 10, 8);

        verticalLayout_21->addWidget(advOutRecEncoderProps);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_3);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_13->addWidget(scrollArea_4);

        stackedWidget->addWidget(advOutRecStandard);
        advOutRecFFmpegPage = new QWidget();
        advOutRecFFmpegPage->setObjectName(QString::fromUtf8("advOutRecFFmpegPage"));
        sizePolicy9.setHeightForWidth(advOutRecFFmpegPage->sizePolicy().hasHeightForWidth());
        advOutRecFFmpegPage->setSizePolicy(sizePolicy9);
        verticalLayout_26 = new QVBoxLayout(advOutRecFFmpegPage);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(0, 0, 8, 0);
        scrollArea_5 = new QScrollArea(advOutRecFFmpegPage);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setFrameShadow(QFrame::Plain);
        scrollArea_5->setLineWidth(0);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 713, 493));
        verticalLayout_27 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 6, 0);
        advOutRecFFmpeg = new QGroupBox(scrollAreaWidgetContents_8);
        advOutRecFFmpeg->setObjectName(QString::fromUtf8("advOutRecFFmpeg"));
        formLayout_7 = new QFormLayout(advOutRecFFmpeg);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_7->setContentsMargins(8, 8, 10, 8);
        label_48 = new QLabel(advOutRecFFmpeg);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        sizePolicy9.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy9);
        label_48->setMinimumSize(QSize(170, 0));
        label_48->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_48);

        advOutFFType = new QComboBox(advOutRecFFmpeg);
        advOutFFType->addItem(QString());
        advOutFFType->addItem(QString());
        advOutFFType->setObjectName(QString::fromUtf8("advOutFFType"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, advOutFFType);

        label_36 = new QLabel(advOutRecFFmpeg);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        sizePolicy9.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy9);
        label_36->setMinimumSize(QSize(170, 0));
        label_36->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_36);

        stackedWidget_2 = new QStackedWidget(advOutRecFFmpeg);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        sizePolicy2.setHeightForWidth(stackedWidget_2->sizePolicy().hasHeightForWidth());
        stackedWidget_2->setSizePolicy(sizePolicy2);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        sizePolicy2.setHeightForWidth(page_7->sizePolicy().hasHeightForWidth());
        page_7->setSizePolicy(sizePolicy2);
        horizontalLayout_27 = new QHBoxLayout(page_7);
        horizontalLayout_27->setSpacing(3);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        advOutFFRecPath = new QLineEdit(page_7);
        advOutFFRecPath->setObjectName(QString::fromUtf8("advOutFFRecPath"));
        advOutFFRecPath->setReadOnly(true);

        horizontalLayout_27->addWidget(advOutFFRecPath);

        advOutFFPathBrowse = new QPushButton(page_7);
        advOutFFPathBrowse->setObjectName(QString::fromUtf8("advOutFFPathBrowse"));

        horizontalLayout_27->addWidget(advOutFFPathBrowse);

        stackedWidget_2->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        sizePolicy2.setHeightForWidth(page_8->sizePolicy().hasHeightForWidth());
        page_8->setSizePolicy(sizePolicy2);
        horizontalLayout_30 = new QHBoxLayout(page_8);
        horizontalLayout_30->setSpacing(0);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(0, 0, 0, 0);
        advOutFFURL = new QLineEdit(page_8);
        advOutFFURL->setObjectName(QString::fromUtf8("advOutFFURL"));
        advOutFFURL->setEnabled(true);

        horizontalLayout_30->addWidget(advOutFFURL);

        stackedWidget_2->addWidget(page_8);

        formLayout_7->setWidget(1, QFormLayout::FieldRole, stackedWidget_2);

        advOutFFNoSpace = new QCheckBox(advOutRecFFmpeg);
        advOutFFNoSpace->setObjectName(QString::fromUtf8("advOutFFNoSpace"));
        advOutFFNoSpace->setChecked(true);

        formLayout_7->setWidget(2, QFormLayout::FieldRole, advOutFFNoSpace);

        label_16 = new QLabel(advOutRecFFmpeg);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_7->setWidget(3, QFormLayout::LabelRole, label_16);

        advOutFFFormat = new QComboBox(advOutRecFFmpeg);
        advOutFFFormat->setObjectName(QString::fromUtf8("advOutFFFormat"));

        formLayout_7->setWidget(3, QFormLayout::FieldRole, advOutFFFormat);

        label_44 = new QLabel(advOutRecFFmpeg);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        formLayout_7->setWidget(4, QFormLayout::LabelRole, label_44);

        advOutFFFormatDesc = new QLabel(advOutRecFFmpeg);
        advOutFFFormatDesc->setObjectName(QString::fromUtf8("advOutFFFormatDesc"));

        formLayout_7->setWidget(4, QFormLayout::FieldRole, advOutFFFormatDesc);

        label_1337 = new QLabel(advOutRecFFmpeg);
        label_1337->setObjectName(QString::fromUtf8("label_1337"));

        formLayout_7->setWidget(5, QFormLayout::LabelRole, label_1337);

        advOutFFMCfg = new QLineEdit(advOutRecFFmpeg);
        advOutFFMCfg->setObjectName(QString::fromUtf8("advOutFFMCfg"));

        formLayout_7->setWidget(5, QFormLayout::FieldRole, advOutFFMCfg);

        label_40 = new QLabel(advOutRecFFmpeg);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        formLayout_7->setWidget(6, QFormLayout::LabelRole, label_40);

        advOutFFVBitrate = new QSpinBox(advOutRecFFmpeg);
        advOutFFVBitrate->setObjectName(QString::fromUtf8("advOutFFVBitrate"));
        advOutFFVBitrate->setMinimum(0);
        advOutFFVBitrate->setMaximum(1000000000);
        advOutFFVBitrate->setValue(2500);

        formLayout_7->setWidget(6, QFormLayout::FieldRole, advOutFFVBitrate);

        label_63 = new QLabel(advOutRecFFmpeg);
        label_63->setObjectName(QString::fromUtf8("label_63"));

        formLayout_7->setWidget(7, QFormLayout::LabelRole, label_63);

        advOutFFVGOPSize = new QSpinBox(advOutRecFFmpeg);
        advOutFFVGOPSize->setObjectName(QString::fromUtf8("advOutFFVGOPSize"));
        advOutFFVGOPSize->setMaximum(1000000000);
        advOutFFVGOPSize->setValue(250);

        formLayout_7->setWidget(7, QFormLayout::FieldRole, advOutFFVGOPSize);

        advOutFFUseRescale = new QCheckBox(advOutRecFFmpeg);
        advOutFFUseRescale->setObjectName(QString::fromUtf8("advOutFFUseRescale"));
        sizePolicy1.setHeightForWidth(advOutFFUseRescale->sizePolicy().hasHeightForWidth());
        advOutFFUseRescale->setSizePolicy(sizePolicy1);
        advOutFFUseRescale->setLayoutDirection(Qt::RightToLeft);

        formLayout_7->setWidget(8, QFormLayout::LabelRole, advOutFFUseRescale);

        advOutFFRescale = new QComboBox(advOutRecFFmpeg);
        advOutFFRescale->setObjectName(QString::fromUtf8("advOutFFRescale"));
        advOutFFRescale->setEnabled(false);
        advOutFFRescale->setEditable(true);

        formLayout_7->setWidget(8, QFormLayout::FieldRole, advOutFFRescale);

        advOutFFIgnoreCompat = new QCheckBox(advOutRecFFmpeg);
        advOutFFIgnoreCompat->setObjectName(QString::fromUtf8("advOutFFIgnoreCompat"));

        formLayout_7->setWidget(9, QFormLayout::FieldRole, advOutFFIgnoreCompat);

        label_37 = new QLabel(advOutRecFFmpeg);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        formLayout_7->setWidget(10, QFormLayout::LabelRole, label_37);

        advOutFFVEncoder = new QComboBox(advOutRecFFmpeg);
        advOutFFVEncoder->setObjectName(QString::fromUtf8("advOutFFVEncoder"));

        formLayout_7->setWidget(10, QFormLayout::FieldRole, advOutFFVEncoder);

        label_38 = new QLabel(advOutRecFFmpeg);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        formLayout_7->setWidget(11, QFormLayout::LabelRole, label_38);

        advOutFFVCfg = new QLineEdit(advOutRecFFmpeg);
        advOutFFVCfg->setObjectName(QString::fromUtf8("advOutFFVCfg"));

        formLayout_7->setWidget(11, QFormLayout::FieldRole, advOutFFVCfg);

        label_41 = new QLabel(advOutRecFFmpeg);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        formLayout_7->setWidget(12, QFormLayout::LabelRole, label_41);

        advOutFFABitrate = new QSpinBox(advOutRecFFmpeg);
        advOutFFABitrate->setObjectName(QString::fromUtf8("advOutFFABitrate"));
        advOutFFABitrate->setMinimum(32);
        advOutFFABitrate->setMaximum(4096);
        advOutFFABitrate->setSingleStep(16);
        advOutFFABitrate->setValue(128);

        formLayout_7->setWidget(12, QFormLayout::FieldRole, advOutFFABitrate);

        label_47 = new QLabel(advOutRecFFmpeg);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        formLayout_7->setWidget(13, QFormLayout::LabelRole, label_47);

        widget_10 = new QFrame(advOutRecFFmpeg);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        sizePolicy8.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy8);
        horizontalLayout_26 = new QHBoxLayout(widget_10);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        advOutFFTrack1 = new QCheckBox(widget_10);
        advOutFFTrack1->setObjectName(QString::fromUtf8("advOutFFTrack1"));
        advOutFFTrack1->setText(QString::fromUtf8("1"));
        advOutFFTrack1->setChecked(true);

        horizontalLayout_26->addWidget(advOutFFTrack1);

        advOutFFTrack2 = new QCheckBox(widget_10);
        advOutFFTrack2->setObjectName(QString::fromUtf8("advOutFFTrack2"));
        advOutFFTrack2->setText(QString::fromUtf8("2"));

        horizontalLayout_26->addWidget(advOutFFTrack2);

        advOutFFTrack3 = new QCheckBox(widget_10);
        advOutFFTrack3->setObjectName(QString::fromUtf8("advOutFFTrack3"));
        advOutFFTrack3->setText(QString::fromUtf8("3"));

        horizontalLayout_26->addWidget(advOutFFTrack3);

        advOutFFTrack4 = new QCheckBox(widget_10);
        advOutFFTrack4->setObjectName(QString::fromUtf8("advOutFFTrack4"));
        advOutFFTrack4->setText(QString::fromUtf8("4"));

        horizontalLayout_26->addWidget(advOutFFTrack4);

        advOutFFTrack5 = new QCheckBox(widget_10);
        advOutFFTrack5->setObjectName(QString::fromUtf8("advOutFFTrack5"));
        advOutFFTrack5->setText(QString::fromUtf8("5"));

        horizontalLayout_26->addWidget(advOutFFTrack5);

        advOutFFTrack6 = new QCheckBox(widget_10);
        advOutFFTrack6->setObjectName(QString::fromUtf8("advOutFFTrack6"));
        advOutFFTrack6->setText(QString::fromUtf8("6"));

        horizontalLayout_26->addWidget(advOutFFTrack6);


        formLayout_7->setWidget(13, QFormLayout::FieldRole, widget_10);

        label_39 = new QLabel(advOutRecFFmpeg);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        formLayout_7->setWidget(14, QFormLayout::LabelRole, label_39);

        advOutFFAEncoder = new QComboBox(advOutRecFFmpeg);
        advOutFFAEncoder->setObjectName(QString::fromUtf8("advOutFFAEncoder"));

        formLayout_7->setWidget(14, QFormLayout::FieldRole, advOutFFAEncoder);

        label_46 = new QLabel(advOutRecFFmpeg);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        formLayout_7->setWidget(15, QFormLayout::LabelRole, label_46);

        advOutFFACfg = new QLineEdit(advOutRecFFmpeg);
        advOutFFACfg->setObjectName(QString::fromUtf8("advOutFFACfg"));

        formLayout_7->setWidget(15, QFormLayout::FieldRole, advOutFFACfg);


        verticalLayout_27->addWidget(advOutRecFFmpeg);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_6);

        scrollArea_5->setWidget(scrollAreaWidgetContents_8);

        verticalLayout_26->addWidget(scrollArea_5);

        stackedWidget->addWidget(advOutRecFFmpegPage);

        verticalLayout_11->addWidget(stackedWidget);

        advOutTabs->addTab(advOutputRecordTab, QString());
        advOutputAudioTracksTab = new QWidget();
        advOutputAudioTracksTab->setObjectName(QString::fromUtf8("advOutputAudioTracksTab"));
        verticalLayout_9 = new QVBoxLayout(advOutputAudioTracksTab);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QFrame(advOutputAudioTracksTab);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy6.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy6);
        verticalLayout_10 = new QVBoxLayout(widget_3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, -1, 8, -1);
        scrollArea_6 = new QScrollArea(widget_3);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setFrameShadow(QFrame::Plain);
        scrollArea_6->setLineWidth(0);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 272, 552));
        verticalLayout_28 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 6, 0);
        groupBox = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy6.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy6);
        formLayout_10 = new QFormLayout(groupBox);
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        formLayout_10->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_10->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_10->setContentsMargins(8, 2, 8, 8);
        advOutTrack1Bitrate = new QComboBox(groupBox);
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->setObjectName(QString::fromUtf8("advOutTrack1Bitrate"));
        sizePolicy6.setHeightForWidth(advOutTrack1Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack1Bitrate->setSizePolicy(sizePolicy6);

        formLayout_10->setWidget(0, QFormLayout::FieldRole, advOutTrack1Bitrate);

        label_55 = new QLabel(groupBox);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        formLayout_10->setWidget(1, QFormLayout::LabelRole, label_55);

        advOutTrack1Name = new QLineEdit(groupBox);
        advOutTrack1Name->setObjectName(QString::fromUtf8("advOutTrack1Name"));
        sizePolicy4.setHeightForWidth(advOutTrack1Name->sizePolicy().hasHeightForWidth());
        advOutTrack1Name->setSizePolicy(sizePolicy4);

        formLayout_10->setWidget(1, QFormLayout::FieldRole, advOutTrack1Name);

        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(170, 0));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_25);


        verticalLayout_28->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy6.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy6);
        formLayout_11 = new QFormLayout(groupBox_2);
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        formLayout_11->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_11->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_11->setContentsMargins(8, 2, 8, 8);
        label_49 = new QLabel(groupBox_2);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setMinimumSize(QSize(170, 0));
        label_49->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label_49);

        advOutTrack2Bitrate = new QComboBox(groupBox_2);
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->setObjectName(QString::fromUtf8("advOutTrack2Bitrate"));
        sizePolicy6.setHeightForWidth(advOutTrack2Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack2Bitrate->setSizePolicy(sizePolicy6);

        formLayout_11->setWidget(0, QFormLayout::FieldRole, advOutTrack2Bitrate);

        label_50 = new QLabel(groupBox_2);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        formLayout_11->setWidget(1, QFormLayout::LabelRole, label_50);

        advOutTrack2Name = new QLineEdit(groupBox_2);
        advOutTrack2Name->setObjectName(QString::fromUtf8("advOutTrack2Name"));
        sizePolicy4.setHeightForWidth(advOutTrack2Name->sizePolicy().hasHeightForWidth());
        advOutTrack2Name->setSizePolicy(sizePolicy4);

        formLayout_11->setWidget(1, QFormLayout::FieldRole, advOutTrack2Name);


        verticalLayout_28->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy6.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy6);
        formLayout_12 = new QFormLayout(groupBox_3);
        formLayout_12->setObjectName(QString::fromUtf8("formLayout_12"));
        formLayout_12->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_12->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_12->setContentsMargins(8, 2, 8, 8);
        label_51 = new QLabel(groupBox_3);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setMinimumSize(QSize(170, 0));
        label_51->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_12->setWidget(0, QFormLayout::LabelRole, label_51);

        advOutTrack3Bitrate = new QComboBox(groupBox_3);
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->setObjectName(QString::fromUtf8("advOutTrack3Bitrate"));
        sizePolicy6.setHeightForWidth(advOutTrack3Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack3Bitrate->setSizePolicy(sizePolicy6);

        formLayout_12->setWidget(0, QFormLayout::FieldRole, advOutTrack3Bitrate);

        label_52 = new QLabel(groupBox_3);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        formLayout_12->setWidget(1, QFormLayout::LabelRole, label_52);

        advOutTrack3Name = new QLineEdit(groupBox_3);
        advOutTrack3Name->setObjectName(QString::fromUtf8("advOutTrack3Name"));
        sizePolicy4.setHeightForWidth(advOutTrack3Name->sizePolicy().hasHeightForWidth());
        advOutTrack3Name->setSizePolicy(sizePolicy4);

        formLayout_12->setWidget(1, QFormLayout::FieldRole, advOutTrack3Name);


        verticalLayout_28->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy6.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy6);
        formLayout_13 = new QFormLayout(groupBox_4);
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        formLayout_13->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_13->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_13->setContentsMargins(8, 2, 8, 8);
        label_53 = new QLabel(groupBox_4);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setMinimumSize(QSize(170, 0));
        label_53->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_53);

        advOutTrack4Bitrate = new QComboBox(groupBox_4);
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->setObjectName(QString::fromUtf8("advOutTrack4Bitrate"));
        sizePolicy6.setHeightForWidth(advOutTrack4Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack4Bitrate->setSizePolicy(sizePolicy6);

        formLayout_13->setWidget(0, QFormLayout::FieldRole, advOutTrack4Bitrate);

        label_54 = new QLabel(groupBox_4);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        formLayout_13->setWidget(1, QFormLayout::LabelRole, label_54);

        advOutTrack4Name = new QLineEdit(groupBox_4);
        advOutTrack4Name->setObjectName(QString::fromUtf8("advOutTrack4Name"));
        sizePolicy4.setHeightForWidth(advOutTrack4Name->sizePolicy().hasHeightForWidth());
        advOutTrack4Name->setSizePolicy(sizePolicy4);

        formLayout_13->setWidget(1, QFormLayout::FieldRole, advOutTrack4Name);


        verticalLayout_28->addWidget(groupBox_4);

        groupBox_9 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        sizePolicy6.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy6);
        formLayout_25 = new QFormLayout(groupBox_9);
        formLayout_25->setObjectName(QString::fromUtf8("formLayout_25"));
        formLayout_25->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_25->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_25->setContentsMargins(8, 2, 8, 8);
        label_59 = new QLabel(groupBox_9);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setMinimumSize(QSize(170, 0));
        label_59->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_25->setWidget(0, QFormLayout::LabelRole, label_59);

        advOutTrack5Bitrate = new QComboBox(groupBox_9);
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->setObjectName(QString::fromUtf8("advOutTrack5Bitrate"));
        sizePolicy6.setHeightForWidth(advOutTrack5Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack5Bitrate->setSizePolicy(sizePolicy6);

        formLayout_25->setWidget(0, QFormLayout::FieldRole, advOutTrack5Bitrate);

        label_60 = new QLabel(groupBox_9);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        formLayout_25->setWidget(1, QFormLayout::LabelRole, label_60);

        advOutTrack5Name = new QLineEdit(groupBox_9);
        advOutTrack5Name->setObjectName(QString::fromUtf8("advOutTrack5Name"));
        sizePolicy4.setHeightForWidth(advOutTrack5Name->sizePolicy().hasHeightForWidth());
        advOutTrack5Name->setSizePolicy(sizePolicy4);

        formLayout_25->setWidget(1, QFormLayout::FieldRole, advOutTrack5Name);


        verticalLayout_28->addWidget(groupBox_9);

        groupBox_12 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        sizePolicy6.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy6);
        formLayout_26 = new QFormLayout(groupBox_12);
        formLayout_26->setObjectName(QString::fromUtf8("formLayout_26"));
        formLayout_26->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_26->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_26->setContentsMargins(8, 2, 8, 8);
        label_61 = new QLabel(groupBox_12);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setMinimumSize(QSize(170, 0));
        label_61->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_26->setWidget(0, QFormLayout::LabelRole, label_61);

        advOutTrack6Bitrate = new QComboBox(groupBox_12);
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->setObjectName(QString::fromUtf8("advOutTrack6Bitrate"));
        sizePolicy6.setHeightForWidth(advOutTrack6Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack6Bitrate->setSizePolicy(sizePolicy6);

        formLayout_26->setWidget(0, QFormLayout::FieldRole, advOutTrack6Bitrate);

        label_62 = new QLabel(groupBox_12);
        label_62->setObjectName(QString::fromUtf8("label_62"));

        formLayout_26->setWidget(1, QFormLayout::LabelRole, label_62);

        advOutTrack6Name = new QLineEdit(groupBox_12);
        advOutTrack6Name->setObjectName(QString::fromUtf8("advOutTrack6Name"));
        sizePolicy4.setHeightForWidth(advOutTrack6Name->sizePolicy().hasHeightForWidth());
        advOutTrack6Name->setSizePolicy(sizePolicy4);

        formLayout_26->setWidget(1, QFormLayout::FieldRole, advOutTrack6Name);


        verticalLayout_28->addWidget(groupBox_12);

        verticalSpacer_5 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_5);

        scrollArea_6->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_10->addWidget(scrollArea_6);


        verticalLayout_9->addWidget(widget_3);

        advOutTabs->addTab(advOutputAudioTracksTab, QString());
        advOutputReplayTab = new QWidget();
        advOutputReplayTab->setObjectName(QString::fromUtf8("advOutputReplayTab"));
        verticalLayout_22 = new QVBoxLayout(advOutputReplayTab);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        advOutputReplayFrame = new QFrame(advOutputReplayTab);
        advOutputReplayFrame->setObjectName(QString::fromUtf8("advOutputReplayFrame"));
        advOutputReplayFrame->setLineWidth(0);
        verticalLayout_29 = new QVBoxLayout(advOutputReplayFrame);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        verticalLayout_29->setContentsMargins(8, 8, 14, 8);
        advReplayBuf = new QCheckBox(advOutputReplayFrame);
        advReplayBuf->setObjectName(QString::fromUtf8("advReplayBuf"));

        verticalLayout_29->addWidget(advReplayBuf);

        advReplayBufferFrame = new QFrame(advOutputReplayFrame);
        advReplayBufferFrame->setObjectName(QString::fromUtf8("advReplayBufferFrame"));
        sizePolicy6.setHeightForWidth(advReplayBufferFrame->sizePolicy().hasHeightForWidth());
        advReplayBufferFrame->setSizePolicy(sizePolicy6);
        formLayout_30 = new QFormLayout(advReplayBufferFrame);
        formLayout_30->setObjectName(QString::fromUtf8("formLayout_30"));
        formLayout_30->setContentsMargins(0, 0, 0, 8);
        advRBSecMaxLabel = new QLabel(advReplayBufferFrame);
        advRBSecMaxLabel->setObjectName(QString::fromUtf8("advRBSecMaxLabel"));

        formLayout_30->setWidget(0, QFormLayout::LabelRole, advRBSecMaxLabel);

        advRBSecMax = new QSpinBox(advReplayBufferFrame);
        advRBSecMax->setObjectName(QString::fromUtf8("advRBSecMax"));
        advRBSecMax->setSuffix(QString::fromUtf8(" s"));
        advRBSecMax->setMinimum(5);
        advRBSecMax->setMaximum(21600);
        advRBSecMax->setValue(15);

        formLayout_30->setWidget(0, QFormLayout::FieldRole, advRBSecMax);

        advRBMegsMax = new QSpinBox(advReplayBufferFrame);
        advRBMegsMax->setObjectName(QString::fromUtf8("advRBMegsMax"));
        advRBMegsMax->setMinimum(20);
        advRBMegsMax->setMaximum(8192);
        advRBMegsMax->setValue(512);

        formLayout_30->setWidget(1, QFormLayout::FieldRole, advRBMegsMax);

        advRBMegsMaxLabel = new QLabel(advReplayBufferFrame);
        advRBMegsMaxLabel->setObjectName(QString::fromUtf8("advRBMegsMaxLabel"));

        formLayout_30->setWidget(1, QFormLayout::LabelRole, advRBMegsMaxLabel);

        advRBEstimate = new QLabel(advReplayBufferFrame);
        advRBEstimate->setObjectName(QString::fromUtf8("advRBEstimate"));
        advRBEstimate->setText(QString::fromUtf8(""));

        formLayout_30->setWidget(2, QFormLayout::FieldRole, advRBEstimate);


        verticalLayout_29->addWidget(advReplayBufferFrame);


        verticalLayout_22->addWidget(advOutputReplayFrame);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer);

        advOutTabs->addTab(advOutputReplayTab, QString());

        verticalLayout_8->addWidget(advOutTabs);

        outputModePages->addWidget(advOutputsPage);

        verticalLayout_6->addWidget(outputModePages);


        verticalLayout_2->addWidget(frame);

        settingsPages->addWidget(outputPage);
        audioPage = new QWidget();
        audioPage->setObjectName(QString::fromUtf8("audioPage"));
        formLayout = new QVBoxLayout(audioPage);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_50 = new QScrollArea(audioPage);
        scrollArea_50->setObjectName(QString::fromUtf8("scrollArea_50"));
        scrollArea_50->setFrameShape(QFrame::NoFrame);
        scrollArea_50->setFrameShadow(QFrame::Plain);
        scrollArea_50->setWidgetResizable(true);
        scrollAreaWidgetContents_50 = new QWidget();
        scrollAreaWidgetContents_50->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_50"));
        scrollAreaWidgetContents_50->setGeometry(QRect(0, 0, 820, 640));
        verticalLayout_50 = new QVBoxLayout(scrollAreaWidgetContents_50);
        verticalLayout_50->setObjectName(QString::fromUtf8("verticalLayout_50"));
        verticalLayout_50->setContentsMargins(0, 0, 0, 9);
        widget_50 = new QFrame(scrollAreaWidgetContents_50);
        widget_50->setObjectName(QString::fromUtf8("widget_50"));
        verticalLayout_51 = new QVBoxLayout(widget_50);
        verticalLayout_51->setObjectName(QString::fromUtf8("verticalLayout_51"));
        audioGeneralGroupBox = new QGroupBox(widget_50);
        audioGeneralGroupBox->setObjectName(QString::fromUtf8("audioGeneralGroupBox"));
        formLayout_52 = new QFormLayout(audioGeneralGroupBox);
        formLayout_52->setObjectName(QString::fromUtf8("formLayout_52"));
        formLayout_52->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_52->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_52->setContentsMargins(-1, 2, -1, -1);
        label_14 = new QLabel(audioGeneralGroupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(170, 0));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_52->setWidget(0, QFormLayout::LabelRole, label_14);

        sampleRate = new QComboBox(audioGeneralGroupBox);
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->setObjectName(QString::fromUtf8("sampleRate"));
        sampleRate->setCurrentText(QString::fromUtf8("44.1 kHz"));

        formLayout_52->setWidget(0, QFormLayout::FieldRole, sampleRate);

        label_15 = new QLabel(audioGeneralGroupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_52->setWidget(1, QFormLayout::LabelRole, label_15);

        channelSetup = new QComboBox(audioGeneralGroupBox);
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->setObjectName(QString::fromUtf8("channelSetup"));

        formLayout_52->setWidget(1, QFormLayout::FieldRole, channelSetup);


        verticalLayout_51->addWidget(audioGeneralGroupBox);

        audioDevicesGroupBox = new QGroupBox(widget_50);
        audioDevicesGroupBox->setObjectName(QString::fromUtf8("audioDevicesGroupBox"));
        formLayout_53 = new QFormLayout(audioDevicesGroupBox);
        formLayout_53->setObjectName(QString::fromUtf8("formLayout_53"));
        formLayout_53->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_53->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_53->setContentsMargins(-1, 2, -1, -1);
        label_2 = new QLabel(audioDevicesGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(170, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_53->setWidget(0, QFormLayout::LabelRole, label_2);

        desktopAudioDevice1 = new QComboBox(audioDevicesGroupBox);
        desktopAudioDevice1->setObjectName(QString::fromUtf8("desktopAudioDevice1"));
        desktopAudioDevice1->setEnabled(true);

        formLayout_53->setWidget(0, QFormLayout::FieldRole, desktopAudioDevice1);

        label_3 = new QLabel(audioDevicesGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_53->setWidget(1, QFormLayout::LabelRole, label_3);

        desktopAudioDevice2 = new QComboBox(audioDevicesGroupBox);
        desktopAudioDevice2->setObjectName(QString::fromUtf8("desktopAudioDevice2"));
        desktopAudioDevice2->setEnabled(true);

        formLayout_53->setWidget(1, QFormLayout::FieldRole, desktopAudioDevice2);

        label_4 = new QLabel(audioDevicesGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_53->setWidget(2, QFormLayout::LabelRole, label_4);

        auxAudioDevice1 = new QComboBox(audioDevicesGroupBox);
        auxAudioDevice1->setObjectName(QString::fromUtf8("auxAudioDevice1"));
        auxAudioDevice1->setEnabled(true);

        formLayout_53->setWidget(2, QFormLayout::FieldRole, auxAudioDevice1);

        label_5 = new QLabel(audioDevicesGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_53->setWidget(3, QFormLayout::LabelRole, label_5);

        auxAudioDevice2 = new QComboBox(audioDevicesGroupBox);
        auxAudioDevice2->setObjectName(QString::fromUtf8("auxAudioDevice2"));
        auxAudioDevice2->setEnabled(true);

        formLayout_53->setWidget(3, QFormLayout::FieldRole, auxAudioDevice2);

        label_6 = new QLabel(audioDevicesGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_53->setWidget(4, QFormLayout::LabelRole, label_6);

        auxAudioDevice3 = new QComboBox(audioDevicesGroupBox);
        auxAudioDevice3->setObjectName(QString::fromUtf8("auxAudioDevice3"));
        auxAudioDevice3->setEnabled(true);

        formLayout_53->setWidget(4, QFormLayout::FieldRole, auxAudioDevice3);

        auxAudioDevice4 = new QComboBox(audioDevicesGroupBox);
        auxAudioDevice4->setObjectName(QString::fromUtf8("auxAudioDevice4"));
        auxAudioDevice4->setEnabled(true);

        formLayout_53->setWidget(5, QFormLayout::FieldRole, auxAudioDevice4);

        label_67 = new QLabel(audioDevicesGroupBox);
        label_67->setObjectName(QString::fromUtf8("label_67"));

        formLayout_53->setWidget(5, QFormLayout::LabelRole, label_67);


        verticalLayout_51->addWidget(audioDevicesGroupBox);

        audioMetersGroupBox = new QGroupBox(widget_50);
        audioMetersGroupBox->setObjectName(QString::fromUtf8("audioMetersGroupBox"));
        formLayout_54 = new QFormLayout(audioMetersGroupBox);
        formLayout_54->setObjectName(QString::fromUtf8("formLayout_54"));
        formLayout_54->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_54->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_54->setContentsMargins(-1, 2, -1, -1);
        label_65 = new QLabel(audioMetersGroupBox);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setMinimumSize(QSize(170, 0));
        label_65->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_54->setWidget(0, QFormLayout::LabelRole, label_65);

        meterDecayRate = new QComboBox(audioMetersGroupBox);
        meterDecayRate->addItem(QString());
        meterDecayRate->addItem(QString());
        meterDecayRate->addItem(QString());
        meterDecayRate->setObjectName(QString::fromUtf8("meterDecayRate"));

        formLayout_54->setWidget(0, QFormLayout::FieldRole, meterDecayRate);

        label_66 = new QLabel(audioMetersGroupBox);
        label_66->setObjectName(QString::fromUtf8("label_66"));

        formLayout_54->setWidget(1, QFormLayout::LabelRole, label_66);

        peakMeterType = new QComboBox(audioMetersGroupBox);
        peakMeterType->addItem(QString());
        peakMeterType->addItem(QString());
        peakMeterType->setObjectName(QString::fromUtf8("peakMeterType"));

        formLayout_54->setWidget(1, QFormLayout::FieldRole, peakMeterType);


        verticalLayout_51->addWidget(audioMetersGroupBox);

        audioAdvGroupBox = new QGroupBox(widget_50);
        audioAdvGroupBox->setObjectName(QString::fromUtf8("audioAdvGroupBox"));
        formLayout_56 = new QFormLayout(audioAdvGroupBox);
        formLayout_56->setObjectName(QString::fromUtf8("formLayout_56"));
        formLayout_56->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_56->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_56->setContentsMargins(-1, 2, -1, -1);
        monitoringDeviceLabel = new QLabel(audioAdvGroupBox);
        monitoringDeviceLabel->setObjectName(QString::fromUtf8("monitoringDeviceLabel"));

        formLayout_56->setWidget(0, QFormLayout::LabelRole, monitoringDeviceLabel);

        monitoringDevice = new QComboBox(audioAdvGroupBox);
        monitoringDevice->setObjectName(QString::fromUtf8("monitoringDevice"));

        formLayout_56->setWidget(0, QFormLayout::FieldRole, monitoringDevice);

        disableAudioDucking = new QCheckBox(audioAdvGroupBox);
        disableAudioDucking->setObjectName(QString::fromUtf8("disableAudioDucking"));

        formLayout_56->setWidget(1, QFormLayout::FieldRole, disableAudioDucking);

        horizontalSpacer_11 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_56->setItem(2, QFormLayout::LabelRole, horizontalSpacer_11);

        lowLatencyBuffering = new QCheckBox(audioAdvGroupBox);
        lowLatencyBuffering->setObjectName(QString::fromUtf8("lowLatencyBuffering"));

        formLayout_56->setWidget(2, QFormLayout::FieldRole, lowLatencyBuffering);


        verticalLayout_51->addWidget(audioAdvGroupBox);

        audioHotkeysGroupBox = new QGroupBox(widget_50);
        audioHotkeysGroupBox->setObjectName(QString::fromUtf8("audioHotkeysGroupBox"));
        audioSourceLayout = new QFormLayout(audioHotkeysGroupBox);
        audioSourceLayout->setObjectName(QString::fromUtf8("audioSourceLayout"));
        audioSourceLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        audioSourceLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        audioSourceLayout->setContentsMargins(-1, 2, -1, -1);

        verticalLayout_51->addWidget(audioHotkeysGroupBox);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_51->addItem(verticalSpacer_4);


        verticalLayout_50->addWidget(widget_50);

        scrollArea_50->setWidget(scrollAreaWidgetContents_50);

        formLayout->addWidget(scrollArea_50);

        audioMsg = new QLabel(audioPage);
        audioMsg->setObjectName(QString::fromUtf8("audioMsg"));
        audioMsg->setText(QString::fromUtf8(""));
        audioMsg->setWordWrap(true);

        formLayout->addWidget(audioMsg);

        audioMsg_2 = new QLabel(audioPage);
        audioMsg_2->setObjectName(QString::fromUtf8("audioMsg_2"));
        audioMsg_2->setText(QString::fromUtf8(""));
        audioMsg_2->setWordWrap(true);
        audioMsg_2->setProperty("themeID", QVariant(QString::fromUtf8("warning")));

        formLayout->addWidget(audioMsg_2);

        settingsPages->addWidget(audioPage);
        videoPage = new QWidget();
        videoPage->setObjectName(QString::fromUtf8("videoPage"));
        formLayout_3 = new QFormLayout(videoPage);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(videoPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(170, 0));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        baseResolution = new QComboBox(videoPage);
        baseResolution->setObjectName(QString::fromUtf8("baseResolution"));
        sizePolicy5.setHeightForWidth(baseResolution->sizePolicy().hasHeightForWidth());
        baseResolution->setSizePolicy(sizePolicy5);
        baseResolution->setEditable(true);
        baseResolution->setCurrentText(QString::fromUtf8(""));
        baseResolution->setDuplicatesEnabled(false);
        baseResolution->setFrame(true);

        horizontalLayout_29->addWidget(baseResolution);

        baseAspect = new QLabel(videoPage);
        baseAspect->setObjectName(QString::fromUtf8("baseAspect"));

        horizontalLayout_29->addWidget(baseAspect);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, horizontalLayout_29);

        outputResLabel = new QLabel(videoPage);
        outputResLabel->setObjectName(QString::fromUtf8("outputResLabel"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, outputResLabel);

        label_11 = new QLabel(videoPage);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_11);

        downscaleFilter = new QComboBox(videoPage);
        downscaleFilter->setObjectName(QString::fromUtf8("downscaleFilter"));
        downscaleFilter->setEnabled(true);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, downscaleFilter);

        fpsType = new QComboBox(videoPage);
        fpsType->addItem(QString());
        fpsType->addItem(QString());
        fpsType->addItem(QString());
        fpsType->setObjectName(QString::fromUtf8("fpsType"));
        sizePolicy5.setHeightForWidth(fpsType->sizePolicy().hasHeightForWidth());
        fpsType->setSizePolicy(sizePolicy5);
        fpsType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout_3->setWidget(6, QFormLayout::LabelRole, fpsType);

        fpsTypes = new QStackedWidget(videoPage);
        fpsTypes->setObjectName(QString::fromUtf8("fpsTypes"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_2 = new QHBoxLayout(page);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        fpsCommon = new QComboBox(page);
        fpsCommon->addItem(QString::fromUtf8("10"));
        fpsCommon->addItem(QString::fromUtf8("20"));
        fpsCommon->addItem(QString());
        fpsCommon->addItem(QString());
        fpsCommon->addItem(QString::fromUtf8("29.97"));
        fpsCommon->addItem(QString::fromUtf8("30"));
        fpsCommon->addItem(QString::fromUtf8("48"));
        fpsCommon->addItem(QString());
        fpsCommon->addItem(QString::fromUtf8("59.94"));
        fpsCommon->addItem(QString::fromUtf8("60"));
        fpsCommon->setObjectName(QString::fromUtf8("fpsCommon"));
        fpsCommon->setCurrentText(QString::fromUtf8("10"));

        horizontalLayout_2->addWidget(fpsCommon, 0, Qt::AlignTop);

        fpsTypes->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        horizontalLayout_3 = new QHBoxLayout(page_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        fpsInteger = new QSpinBox(page_3);
        fpsInteger->setObjectName(QString::fromUtf8("fpsInteger"));
        fpsInteger->setMinimum(1);
        fpsInteger->setMaximum(120);
        fpsInteger->setValue(30);

        horizontalLayout_3->addWidget(fpsInteger, 0, Qt::AlignTop);

        fpsTypes->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        formLayout_4 = new QFormLayout(page_2);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        fpsNumerator = new QSpinBox(page_2);
        fpsNumerator->setObjectName(QString::fromUtf8("fpsNumerator"));
        fpsNumerator->setMinimum(1);
        fpsNumerator->setMaximum(1000000);
        fpsNumerator->setValue(30);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, fpsNumerator);

        fpsDenominator = new QSpinBox(page_2);
        fpsDenominator->setObjectName(QString::fromUtf8("fpsDenominator"));
        fpsDenominator->setMinimum(1);
        fpsDenominator->setMaximum(1000000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, fpsDenominator);

        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(page_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_13);

        fpsTypes->addWidget(page_2);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, fpsTypes);

        videoMsg = new QLabel(videoPage);
        videoMsg->setObjectName(QString::fromUtf8("videoMsg"));
        sizePolicy9.setHeightForWidth(videoMsg->sizePolicy().hasHeightForWidth());
        videoMsg->setSizePolicy(sizePolicy9);
        videoMsg->setText(QString::fromUtf8(""));
        videoMsg->setWordWrap(true);

        formLayout_3->setWidget(7, QFormLayout::FieldRole, videoMsg);

        outputResLayout = new QHBoxLayout();
        outputResLayout->setSpacing(6);
        outputResLayout->setObjectName(QString::fromUtf8("outputResLayout"));
        outputResolution = new QComboBox(videoPage);
        outputResolution->setObjectName(QString::fromUtf8("outputResolution"));
        sizePolicy5.setHeightForWidth(outputResolution->sizePolicy().hasHeightForWidth());
        outputResolution->setSizePolicy(sizePolicy5);
        outputResolution->setEditable(true);
        outputResolution->setCurrentText(QString::fromUtf8(""));

        outputResLayout->addWidget(outputResolution);

        scaledAspect = new QLabel(videoPage);
        scaledAspect->setObjectName(QString::fromUtf8("scaledAspect"));

        outputResLayout->addWidget(scaledAspect);


        formLayout_3->setLayout(3, QFormLayout::FieldRole, outputResLayout);

        settingsPages->addWidget(videoPage);
        hotkeyPage = new QWidget();
        hotkeyPage->setObjectName(QString::fromUtf8("hotkeyPage"));
        verticalLayout_25 = new QVBoxLayout(hotkeyPage);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        hotkeySearchLayout = new QGridLayout();
        hotkeySearchLayout->setObjectName(QString::fromUtf8("hotkeySearchLayout"));
        hotkeySearchLabel = new QLabel(hotkeyPage);
        hotkeySearchLabel->setObjectName(QString::fromUtf8("hotkeySearchLabel"));

        hotkeySearchLayout->addWidget(hotkeySearchLabel, 0, 0, 1, 1);

        hotkeyFilterSearch = new QLineEdit(hotkeyPage);
        hotkeyFilterSearch->setObjectName(QString::fromUtf8("hotkeyFilterSearch"));

        hotkeySearchLayout->addWidget(hotkeyFilterSearch, 0, 1, 1, 1);

        hotkeyFilterLabel = new QLabel(hotkeyPage);
        hotkeyFilterLabel->setObjectName(QString::fromUtf8("hotkeyFilterLabel"));

        hotkeySearchLayout->addWidget(hotkeyFilterLabel, 0, 2, 1, 1);

        hotkeyFilterInput = new OBSHotkeyEdit(hotkeyPage);
        hotkeyFilterInput->setObjectName(QString::fromUtf8("hotkeyFilterInput"));

        hotkeySearchLayout->addWidget(hotkeyFilterInput, 0, 3, 1, 1);

        hotkeyFilterReset = new QPushButton(hotkeyPage);
        hotkeyFilterReset->setObjectName(QString::fromUtf8("hotkeyFilterReset"));
        QSizePolicy sizePolicy11(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(hotkeyFilterReset->sizePolicy().hasHeightForWidth());
        hotkeyFilterReset->setSizePolicy(sizePolicy11);
        hotkeyFilterReset->setMinimumSize(QSize(0, 0));
        hotkeyFilterReset->setMaximumSize(QSize(16777215, 16777215));
        hotkeyFilterReset->setBaseSize(QSize(0, 0));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/res/images/revert.svg"), QSize(), QIcon::Normal, QIcon::Off);
        hotkeyFilterReset->setIcon(icon8);
        hotkeyFilterReset->setIconSize(QSize(20, 20));
        hotkeyFilterReset->setFlat(false);
        hotkeyFilterReset->setProperty("toolButton", QVariant(true));

        hotkeySearchLayout->addWidget(hotkeyFilterReset, 0, 4, 1, 1);


        verticalLayout_25->addLayout(hotkeySearchLayout);

        hotkeyScrollArea = new QScrollArea(hotkeyPage);
        hotkeyScrollArea->setObjectName(QString::fromUtf8("hotkeyScrollArea"));
        hotkeyScrollArea->setWidgetResizable(true);
        hotkeyScrollContents = new QWidget();
        hotkeyScrollContents->setObjectName(QString::fromUtf8("hotkeyScrollContents"));
        hotkeyScrollContents->setGeometry(QRect(0, 0, 800, 626));
        hotkeyFormLayout = new QFormLayout(hotkeyScrollContents);
        hotkeyFormLayout->setObjectName(QString::fromUtf8("hotkeyFormLayout"));
        hotkeyFormLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        hotkeyFormLayout->setVerticalSpacing(0);
        hotkeyScrollArea->setWidget(hotkeyScrollContents);

        verticalLayout_25->addWidget(hotkeyScrollArea);

        settingsPages->addWidget(hotkeyPage);
        accessPage = new QWidget();
        accessPage->setObjectName(QString::fromUtf8("accessPage"));
        formLayout_41 = new QVBoxLayout(accessPage);
        formLayout_41->setObjectName(QString::fromUtf8("formLayout_41"));
        formLayout_41->setContentsMargins(0, 0, 0, 0);
        scrollArea_7 = new QScrollArea(accessPage);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setFrameShape(QFrame::NoFrame);
        scrollArea_7->setFrameShadow(QFrame::Plain);
        scrollArea_7->setWidgetResizable(true);
        accessPageContents = new QWidget();
        accessPageContents->setObjectName(QString::fromUtf8("accessPageContents"));
        accessPageContents->setGeometry(QRect(0, 0, 820, 680));
        verticalLayout_42 = new QVBoxLayout(accessPageContents);
        verticalLayout_42->setObjectName(QString::fromUtf8("verticalLayout_42"));
        verticalLayout_42->setContentsMargins(0, 0, 0, 9);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        colorsGroupBox = new QGroupBox(accessPageContents);
        colorsGroupBox->setObjectName(QString::fromUtf8("colorsGroupBox"));
        sizePolicy2.setHeightForWidth(colorsGroupBox->sizePolicy().hasHeightForWidth());
        colorsGroupBox->setSizePolicy(sizePolicy2);
        colorsGroupBox->setCheckable(true);
        colorsGroupBox->setChecked(false);
        formLayout_8 = new QFormLayout(colorsGroupBox);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        formLayout_8->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_8->setContentsMargins(-1, 2, -1, -1);
        colorPresetLabel = new QLabel(colorsGroupBox);
        colorPresetLabel->setObjectName(QString::fromUtf8("colorPresetLabel"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, colorPresetLabel);

        colorPreset = new QComboBox(colorsGroupBox);
        colorPreset->addItem(QString());
        colorPreset->addItem(QString());
        colorPreset->addItem(QString());
        colorPreset->setObjectName(QString::fromUtf8("colorPreset"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, colorPreset);

        colorSelectLabel_1 = new QLabel(colorsGroupBox);
        colorSelectLabel_1->setObjectName(QString::fromUtf8("colorSelectLabel_1"));

        formLayout_8->setWidget(1, QFormLayout::LabelRole, colorSelectLabel_1);

        colorSelectLayout_1 = new QHBoxLayout();
        colorSelectLayout_1->setObjectName(QString::fromUtf8("colorSelectLayout_1"));
        colorSelectLayout_1->setContentsMargins(0, 0, 0, 0);
        color1 = new QLabel(colorsGroupBox);
        color1->setObjectName(QString::fromUtf8("color1"));
        sizePolicy6.setHeightForWidth(color1->sizePolicy().hasHeightForWidth());
        color1->setSizePolicy(sizePolicy6);
        color1->setMinimumSize(QSize(80, 0));
        color1->setMaximumSize(QSize(16777215, 16777215));
        color1->setText(QString::fromUtf8("color here"));
        color1->setAlignment(Qt::AlignCenter);

        colorSelectLayout_1->addWidget(color1);

        choose1 = new QPushButton(colorsGroupBox);
        choose1->setObjectName(QString::fromUtf8("choose1"));
        choose1->setMinimumSize(QSize(0, 0));
        choose1->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_1->addWidget(choose1);

        colorSpacer_1 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        colorSelectLayout_1->addItem(colorSpacer_1);


        formLayout_8->setLayout(1, QFormLayout::FieldRole, colorSelectLayout_1);

        colorSelectLabel_2 = new QLabel(colorsGroupBox);
        colorSelectLabel_2->setObjectName(QString::fromUtf8("colorSelectLabel_2"));

        formLayout_8->setWidget(2, QFormLayout::LabelRole, colorSelectLabel_2);

        colorSelectLayout_2 = new QHBoxLayout();
        colorSelectLayout_2->setObjectName(QString::fromUtf8("colorSelectLayout_2"));
        colorSelectLayout_2->setContentsMargins(0, 0, 0, 0);
        color2 = new QLabel(colorsGroupBox);
        color2->setObjectName(QString::fromUtf8("color2"));
        sizePolicy6.setHeightForWidth(color2->sizePolicy().hasHeightForWidth());
        color2->setSizePolicy(sizePolicy6);
        color2->setMinimumSize(QSize(80, 0));
        color2->setMaximumSize(QSize(16777215, 16777215));
        color2->setText(QString::fromUtf8("color here"));
        color2->setAlignment(Qt::AlignCenter);

        colorSelectLayout_2->addWidget(color2);

        choose2 = new QPushButton(colorsGroupBox);
        choose2->setObjectName(QString::fromUtf8("choose2"));
        choose2->setMinimumSize(QSize(0, 0));
        choose2->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_2->addWidget(choose2);

        colorSpacer_2 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        colorSelectLayout_2->addItem(colorSpacer_2);


        formLayout_8->setLayout(2, QFormLayout::FieldRole, colorSelectLayout_2);

        colorSelectLabel_3 = new QLabel(colorsGroupBox);
        colorSelectLabel_3->setObjectName(QString::fromUtf8("colorSelectLabel_3"));

        formLayout_8->setWidget(3, QFormLayout::LabelRole, colorSelectLabel_3);

        colorSelectLayout_3 = new QHBoxLayout();
        colorSelectLayout_3->setObjectName(QString::fromUtf8("colorSelectLayout_3"));
        colorSelectLayout_3->setContentsMargins(0, 0, 0, 0);
        color3 = new QLabel(colorsGroupBox);
        color3->setObjectName(QString::fromUtf8("color3"));
        sizePolicy6.setHeightForWidth(color3->sizePolicy().hasHeightForWidth());
        color3->setSizePolicy(sizePolicy6);
        color3->setMinimumSize(QSize(80, 0));
        color3->setMaximumSize(QSize(16777215, 16777215));
        color3->setText(QString::fromUtf8("color here"));
        color3->setAlignment(Qt::AlignCenter);

        colorSelectLayout_3->addWidget(color3);

        choose3 = new QPushButton(colorsGroupBox);
        choose3->setObjectName(QString::fromUtf8("choose3"));
        choose3->setMinimumSize(QSize(0, 0));
        choose3->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_3->addWidget(choose3);

        colorSpacer_3 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        colorSelectLayout_3->addItem(colorSpacer_3);


        formLayout_8->setLayout(3, QFormLayout::FieldRole, colorSelectLayout_3);

        colorSelectLabel_4 = new QLabel(colorsGroupBox);
        colorSelectLabel_4->setObjectName(QString::fromUtf8("colorSelectLabel_4"));

        formLayout_8->setWidget(4, QFormLayout::LabelRole, colorSelectLabel_4);

        colorSelectLayout_4 = new QHBoxLayout();
        colorSelectLayout_4->setObjectName(QString::fromUtf8("colorSelectLayout_4"));
        colorSelectLayout_4->setContentsMargins(0, 0, 0, 0);
        color4 = new QLabel(colorsGroupBox);
        color4->setObjectName(QString::fromUtf8("color4"));
        sizePolicy6.setHeightForWidth(color4->sizePolicy().hasHeightForWidth());
        color4->setSizePolicy(sizePolicy6);
        color4->setMinimumSize(QSize(80, 0));
        color4->setMaximumSize(QSize(16777215, 16777215));
        color4->setText(QString::fromUtf8("color here"));
        color4->setAlignment(Qt::AlignCenter);

        colorSelectLayout_4->addWidget(color4);

        choose4 = new QPushButton(colorsGroupBox);
        choose4->setObjectName(QString::fromUtf8("choose4"));
        choose4->setMinimumSize(QSize(0, 0));
        choose4->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_4->addWidget(choose4);

        colorSpacer_4 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        colorSelectLayout_4->addItem(colorSpacer_4);


        formLayout_8->setLayout(4, QFormLayout::FieldRole, colorSelectLayout_4);

        colorSelectLabel_5 = new QLabel(colorsGroupBox);
        colorSelectLabel_5->setObjectName(QString::fromUtf8("colorSelectLabel_5"));

        formLayout_8->setWidget(5, QFormLayout::LabelRole, colorSelectLabel_5);

        colorSelectLayout_5 = new QHBoxLayout();
        colorSelectLayout_5->setObjectName(QString::fromUtf8("colorSelectLayout_5"));
        colorSelectLayout_5->setContentsMargins(0, 0, 0, 0);
        color5 = new QLabel(colorsGroupBox);
        color5->setObjectName(QString::fromUtf8("color5"));
        sizePolicy6.setHeightForWidth(color5->sizePolicy().hasHeightForWidth());
        color5->setSizePolicy(sizePolicy6);
        color5->setMinimumSize(QSize(80, 0));
        color5->setMaximumSize(QSize(16777215, 16777215));
        color5->setText(QString::fromUtf8("color here"));
        color5->setAlignment(Qt::AlignCenter);

        colorSelectLayout_5->addWidget(color5);

        choose5 = new QPushButton(colorsGroupBox);
        choose5->setObjectName(QString::fromUtf8("choose5"));
        choose5->setMinimumSize(QSize(0, 0));
        choose5->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_5->addWidget(choose5);

        colorSpacer_5 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        colorSelectLayout_5->addItem(colorSpacer_5);


        formLayout_8->setLayout(5, QFormLayout::FieldRole, colorSelectLayout_5);

        colorSelectLabel_6 = new QLabel(colorsGroupBox);
        colorSelectLabel_6->setObjectName(QString::fromUtf8("colorSelectLabel_6"));

        formLayout_8->setWidget(6, QFormLayout::LabelRole, colorSelectLabel_6);

        colorSelectLayout_6 = new QHBoxLayout();
        colorSelectLayout_6->setObjectName(QString::fromUtf8("colorSelectLayout_6"));
        colorSelectLayout_6->setContentsMargins(0, 0, 0, 0);
        color6 = new QLabel(colorsGroupBox);
        color6->setObjectName(QString::fromUtf8("color6"));
        sizePolicy6.setHeightForWidth(color6->sizePolicy().hasHeightForWidth());
        color6->setSizePolicy(sizePolicy6);
        color6->setMinimumSize(QSize(80, 0));
        color6->setMaximumSize(QSize(16777215, 16777215));
        color6->setText(QString::fromUtf8("color here"));
        color6->setAlignment(Qt::AlignCenter);

        colorSelectLayout_6->addWidget(color6);

        choose6 = new QPushButton(colorsGroupBox);
        choose6->setObjectName(QString::fromUtf8("choose6"));
        choose6->setMinimumSize(QSize(0, 0));
        choose6->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_6->addWidget(choose6);

        colorSpacer_6 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        colorSelectLayout_6->addItem(colorSpacer_6);


        formLayout_8->setLayout(6, QFormLayout::FieldRole, colorSelectLayout_6);

        colorSelectLabel_7 = new QLabel(colorsGroupBox);
        colorSelectLabel_7->setObjectName(QString::fromUtf8("colorSelectLabel_7"));

        formLayout_8->setWidget(7, QFormLayout::LabelRole, colorSelectLabel_7);

        colorSelectLayout_7 = new QHBoxLayout();
        colorSelectLayout_7->setObjectName(QString::fromUtf8("colorSelectLayout_7"));
        colorSelectLayout_7->setContentsMargins(0, 0, 0, 0);
        color7 = new QLabel(colorsGroupBox);
        color7->setObjectName(QString::fromUtf8("color7"));
        sizePolicy6.setHeightForWidth(color7->sizePolicy().hasHeightForWidth());
        color7->setSizePolicy(sizePolicy6);
        color7->setMinimumSize(QSize(80, 0));
        color7->setMaximumSize(QSize(16777215, 16777215));
        color7->setText(QString::fromUtf8("color here"));
        color7->setAlignment(Qt::AlignCenter);

        colorSelectLayout_7->addWidget(color7);

        choose7 = new QPushButton(colorsGroupBox);
        choose7->setObjectName(QString::fromUtf8("choose7"));
        choose7->setMinimumSize(QSize(0, 0));
        choose7->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_7->addWidget(choose7);

        colorSpacer_7 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        colorSelectLayout_7->addItem(colorSpacer_7);


        formLayout_8->setLayout(7, QFormLayout::FieldRole, colorSelectLayout_7);

        colorSelectLabel_8 = new QLabel(colorsGroupBox);
        colorSelectLabel_8->setObjectName(QString::fromUtf8("colorSelectLabel_8"));

        formLayout_8->setWidget(8, QFormLayout::LabelRole, colorSelectLabel_8);

        colorSelectLayout_8 = new QHBoxLayout();
        colorSelectLayout_8->setObjectName(QString::fromUtf8("colorSelectLayout_8"));
        colorSelectLayout_8->setContentsMargins(0, 0, 0, 0);
        color8 = new QLabel(colorsGroupBox);
        color8->setObjectName(QString::fromUtf8("color8"));
        sizePolicy6.setHeightForWidth(color8->sizePolicy().hasHeightForWidth());
        color8->setSizePolicy(sizePolicy6);
        color8->setMinimumSize(QSize(80, 0));
        color8->setMaximumSize(QSize(16777215, 16777215));
        color8->setText(QString::fromUtf8("color here"));
        color8->setAlignment(Qt::AlignCenter);

        colorSelectLayout_8->addWidget(color8);

        choose8 = new QPushButton(colorsGroupBox);
        choose8->setObjectName(QString::fromUtf8("choose8"));
        choose8->setMinimumSize(QSize(0, 0));
        choose8->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_8->addWidget(choose8);

        colorSpacer_8 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        colorSelectLayout_8->addItem(colorSpacer_8);


        formLayout_8->setLayout(8, QFormLayout::FieldRole, colorSelectLayout_8);

        colorSelectLabel_9 = new QLabel(colorsGroupBox);
        colorSelectLabel_9->setObjectName(QString::fromUtf8("colorSelectLabel_9"));

        formLayout_8->setWidget(9, QFormLayout::LabelRole, colorSelectLabel_9);

        colorSelectLayout_9 = new QHBoxLayout();
        colorSelectLayout_9->setObjectName(QString::fromUtf8("colorSelectLayout_9"));
        colorSelectLayout_9->setContentsMargins(0, 0, 0, 0);
        color9 = new QLabel(colorsGroupBox);
        color9->setObjectName(QString::fromUtf8("color9"));
        sizePolicy6.setHeightForWidth(color9->sizePolicy().hasHeightForWidth());
        color9->setSizePolicy(sizePolicy6);
        color9->setMinimumSize(QSize(80, 0));
        color9->setMaximumSize(QSize(16777215, 16777215));
        color9->setText(QString::fromUtf8("color here"));
        color9->setAlignment(Qt::AlignCenter);

        colorSelectLayout_9->addWidget(color9);

        choose9 = new QPushButton(colorsGroupBox);
        choose9->setObjectName(QString::fromUtf8("choose9"));
        choose9->setMinimumSize(QSize(0, 0));
        choose9->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_9->addWidget(choose9);

        colorSpacer_9 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        colorSelectLayout_9->addItem(colorSpacer_9);


        formLayout_8->setLayout(9, QFormLayout::FieldRole, colorSelectLayout_9);


        verticalLayout_7->addWidget(colorsGroupBox);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_7);


        verticalLayout_42->addLayout(verticalLayout_7);

        scrollArea_7->setWidget(accessPageContents);

        formLayout_41->addWidget(scrollArea_7);

        settingsPages->addWidget(accessPage);
        advancedPage = new QWidget();
        advancedPage->setObjectName(QString::fromUtf8("advancedPage"));
        verticalLayout_16 = new QVBoxLayout(advancedPage);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(advancedPage);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 826, 1018));
        verticalLayout_23 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 9);
        widget_11 = new QFrame(scrollAreaWidgetContents);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        verticalLayout_24 = new QVBoxLayout(widget_11);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        advancedGeneralGroupBox = new QGroupBox(widget_11);
        advancedGeneralGroupBox->setObjectName(QString::fromUtf8("advancedGeneralGroupBox"));
        formLayout_22 = new QFormLayout(advancedGeneralGroupBox);
        formLayout_22->setObjectName(QString::fromUtf8("formLayout_22"));
        formLayout_22->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_22->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_22->setContentsMargins(-1, 2, -1, -1);
        processPriorityLabel = new QLabel(advancedGeneralGroupBox);
        processPriorityLabel->setObjectName(QString::fromUtf8("processPriorityLabel"));

        formLayout_22->setWidget(0, QFormLayout::LabelRole, processPriorityLabel);

        processPriority = new QComboBox(advancedGeneralGroupBox);
        processPriority->setObjectName(QString::fromUtf8("processPriority"));

        formLayout_22->setWidget(0, QFormLayout::FieldRole, processPriority);

        horizontalSpacer_13 = new QSpacerItem(170, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_22->setItem(1, QFormLayout::LabelRole, horizontalSpacer_13);

        confirmOnExit = new QCheckBox(advancedGeneralGroupBox);
        confirmOnExit->setObjectName(QString::fromUtf8("confirmOnExit"));

        formLayout_22->setWidget(2, QFormLayout::FieldRole, confirmOnExit);


        verticalLayout_24->addWidget(advancedGeneralGroupBox);

        advancedVideoContainer = new QGroupBox(widget_11);
        advancedVideoContainer->setObjectName(QString::fromUtf8("advancedVideoContainer"));
        formLayout_14 = new QFormLayout(advancedVideoContainer);
        formLayout_14->setObjectName(QString::fromUtf8("formLayout_14"));
        formLayout_14->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_14->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_14->setContentsMargins(-1, 2, -1, -1);
        rendererLabel = new QLabel(advancedVideoContainer);
        rendererLabel->setObjectName(QString::fromUtf8("rendererLabel"));

        formLayout_14->setWidget(0, QFormLayout::LabelRole, rendererLabel);

        renderer = new QComboBox(advancedVideoContainer);
        renderer->setObjectName(QString::fromUtf8("renderer"));
        renderer->setCurrentText(QString::fromUtf8(""));

        formLayout_14->setWidget(0, QFormLayout::FieldRole, renderer);

        adapterLabel = new QLabel(advancedVideoContainer);
        adapterLabel->setObjectName(QString::fromUtf8("adapterLabel"));
        adapterLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_14->setWidget(1, QFormLayout::LabelRole, adapterLabel);

        adapter = new QComboBox(advancedVideoContainer);
        adapter->setObjectName(QString::fromUtf8("adapter"));
        adapter->setEnabled(false);
        adapter->setCurrentText(QString::fromUtf8(""));

        formLayout_14->setWidget(1, QFormLayout::FieldRole, adapter);

        label_30 = new QLabel(advancedVideoContainer);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMinimumSize(QSize(0, 0));
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_14->setWidget(2, QFormLayout::LabelRole, label_30);

        colorFormat = new QComboBox(advancedVideoContainer);
        colorFormat->setObjectName(QString::fromUtf8("colorFormat"));

        formLayout_14->setWidget(2, QFormLayout::FieldRole, colorFormat);

        label_33 = new QLabel(advancedVideoContainer);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        formLayout_14->setWidget(3, QFormLayout::LabelRole, label_33);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        colorSpace = new QComboBox(advancedVideoContainer);
        colorSpace->setObjectName(QString::fromUtf8("colorSpace"));

        horizontalLayout_20->addWidget(colorSpace);

        label_34 = new QLabel(advancedVideoContainer);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy8.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy8);

        horizontalLayout_20->addWidget(label_34);

        colorRange = new QComboBox(advancedVideoContainer);
        colorRange->setObjectName(QString::fromUtf8("colorRange"));

        horizontalLayout_20->addWidget(colorRange);


        formLayout_14->setLayout(3, QFormLayout::FieldRole, horizontalLayout_20);

        label_sdrWhiteLevel = new QLabel(advancedVideoContainer);
        label_sdrWhiteLevel->setObjectName(QString::fromUtf8("label_sdrWhiteLevel"));

        formLayout_14->setWidget(4, QFormLayout::LabelRole, label_sdrWhiteLevel);

        horizontalLayout_sdrPaperWhite = new QHBoxLayout();
        horizontalLayout_sdrPaperWhite->setObjectName(QString::fromUtf8("horizontalLayout_sdrPaperWhite"));
        horizontalLayout_sdrPaperWhite->setContentsMargins(0, 0, 0, 0);
        sdrWhiteLevel = new QSpinBox(advancedVideoContainer);
        sdrWhiteLevel->setObjectName(QString::fromUtf8("sdrWhiteLevel"));
        sdrWhiteLevel->setSuffix(QString::fromUtf8(" nits"));
        sdrWhiteLevel->setMinimum(80);
        sdrWhiteLevel->setMaximum(480);

        horizontalLayout_sdrPaperWhite->addWidget(sdrWhiteLevel);

        label_hdrNominalPeakLevel = new QLabel(advancedVideoContainer);
        label_hdrNominalPeakLevel->setObjectName(QString::fromUtf8("label_hdrNominalPeakLevel"));
        sizePolicy8.setHeightForWidth(label_hdrNominalPeakLevel->sizePolicy().hasHeightForWidth());
        label_hdrNominalPeakLevel->setSizePolicy(sizePolicy8);

        horizontalLayout_sdrPaperWhite->addWidget(label_hdrNominalPeakLevel);

        hdrNominalPeakLevel = new QSpinBox(advancedVideoContainer);
        hdrNominalPeakLevel->setObjectName(QString::fromUtf8("hdrNominalPeakLevel"));
        hdrNominalPeakLevel->setSuffix(QString::fromUtf8(" nits"));
        hdrNominalPeakLevel->setMinimum(400);
        hdrNominalPeakLevel->setMaximum(10000);

        horizontalLayout_sdrPaperWhite->addWidget(hdrNominalPeakLevel);


        formLayout_14->setLayout(4, QFormLayout::FieldRole, horizontalLayout_sdrPaperWhite);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        disableOSXVSync = new QCheckBox(advancedVideoContainer);
        disableOSXVSync->setObjectName(QString::fromUtf8("disableOSXVSync"));

        horizontalLayout_18->addWidget(disableOSXVSync);

        resetOSXVSync = new QCheckBox(advancedVideoContainer);
        resetOSXVSync->setObjectName(QString::fromUtf8("resetOSXVSync"));

        horizontalLayout_18->addWidget(resetOSXVSync);


        formLayout_14->setLayout(5, QFormLayout::FieldRole, horizontalLayout_18);

        horizontalSpacer_12 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_14->setItem(6, QFormLayout::LabelRole, horizontalSpacer_12);


        verticalLayout_24->addWidget(advancedVideoContainer);

        groupBox_6 = new QGroupBox(widget_11);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        formLayout_17 = new QFormLayout(groupBox_6);
        formLayout_17->setObjectName(QString::fromUtf8("formLayout_17"));
        formLayout_17->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_17->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_17->setContentsMargins(-1, 2, -1, -1);
        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_17->setWidget(0, QFormLayout::LabelRole, label_7);

        filenameFormatting = new QLineEdit(groupBox_6);
        filenameFormatting->setObjectName(QString::fromUtf8("filenameFormatting"));

        formLayout_17->setWidget(0, QFormLayout::FieldRole, filenameFormatting);

        overwriteIfExists = new QCheckBox(groupBox_6);
        overwriteIfExists->setObjectName(QString::fromUtf8("overwriteIfExists"));

        formLayout_17->setWidget(1, QFormLayout::FieldRole, overwriteIfExists);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        simpleRBPrefix = new QLineEdit(groupBox_6);
        simpleRBPrefix->setObjectName(QString::fromUtf8("simpleRBPrefix"));

        horizontalLayout_14->addWidget(simpleRBPrefix);

        label_58 = new QLabel(groupBox_6);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        horizontalLayout_14->addWidget(label_58);

        simpleRBSuffix = new QLineEdit(groupBox_6);
        simpleRBSuffix->setObjectName(QString::fromUtf8("simpleRBSuffix"));

        horizontalLayout_14->addWidget(simpleRBSuffix);


        formLayout_17->setLayout(3, QFormLayout::FieldRole, horizontalLayout_14);

        label_57 = new QLabel(groupBox_6);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        formLayout_17->setWidget(3, QFormLayout::LabelRole, label_57);

        horizontalSpacer_10 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_17->setItem(1, QFormLayout::LabelRole, horizontalSpacer_10);

        autoRemux = new QCheckBox(groupBox_6);
        autoRemux->setObjectName(QString::fromUtf8("autoRemux"));

        formLayout_17->setWidget(2, QFormLayout::FieldRole, autoRemux);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_17->setItem(2, QFormLayout::LabelRole, horizontalSpacer_16);


        verticalLayout_24->addWidget(groupBox_6);

        groupBox_5 = new QGroupBox(widget_11);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        formLayout_18 = new QFormLayout(groupBox_5);
        formLayout_18->setObjectName(QString::fromUtf8("formLayout_18"));
        formLayout_18->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_18->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_18->setContentsMargins(-1, 2, -1, -1);
        label_56 = new QLabel(groupBox_5);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        formLayout_18->setWidget(1, QFormLayout::LabelRole, label_56);

        widget_12 = new QFrame(groupBox_5);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setEnabled(true);
        horizontalLayout_13 = new QHBoxLayout(widget_12);
        horizontalLayout_13->setSpacing(5);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        streamDelaySec = new QSpinBox(widget_12);
        streamDelaySec->setObjectName(QString::fromUtf8("streamDelaySec"));
        streamDelaySec->setEnabled(true);
        sizePolicy3.setHeightForWidth(streamDelaySec->sizePolicy().hasHeightForWidth());
        streamDelaySec->setSizePolicy(sizePolicy3);
        streamDelaySec->setMinimumSize(QSize(80, 0));
        streamDelaySec->setSuffix(QString::fromUtf8(" s"));
        streamDelaySec->setMinimum(1);
        streamDelaySec->setMaximum(1800);

        horizontalLayout_13->addWidget(streamDelaySec);

        streamDelayInfo = new QLabel(widget_12);
        streamDelayInfo->setObjectName(QString::fromUtf8("streamDelayInfo"));
        streamDelayInfo->setText(QString::fromUtf8("Estimated RAM goes here"));

        horizontalLayout_13->addWidget(streamDelayInfo);


        formLayout_18->setWidget(1, QFormLayout::FieldRole, widget_12);

        streamDelayPreserve = new QCheckBox(groupBox_5);
        streamDelayPreserve->setObjectName(QString::fromUtf8("streamDelayPreserve"));

        formLayout_18->setWidget(2, QFormLayout::FieldRole, streamDelayPreserve);

        streamDelayEnable = new QCheckBox(groupBox_5);
        streamDelayEnable->setObjectName(QString::fromUtf8("streamDelayEnable"));
        streamDelayEnable->setChecked(true);

        formLayout_18->setWidget(0, QFormLayout::FieldRole, streamDelayEnable);

        horizontalSpacer_9 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_18->setItem(2, QFormLayout::LabelRole, horizontalSpacer_9);


        verticalLayout_24->addWidget(groupBox_5);

        groupBox_7 = new QGroupBox(widget_11);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        formLayout_19 = new QFormLayout(groupBox_7);
        formLayout_19->setObjectName(QString::fromUtf8("formLayout_19"));
        formLayout_19->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_19->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_19->setContentsMargins(-1, 2, -1, -1);
        reconnectEnable = new QCheckBox(groupBox_7);
        reconnectEnable->setObjectName(QString::fromUtf8("reconnectEnable"));
        reconnectEnable->setChecked(true);

        formLayout_19->setWidget(0, QFormLayout::FieldRole, reconnectEnable);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        reconnectRetryDelay = new QSpinBox(groupBox_7);
        reconnectRetryDelay->setObjectName(QString::fromUtf8("reconnectRetryDelay"));
        reconnectRetryDelay->setMinimum(1);
        reconnectRetryDelay->setMaximum(30);

        horizontalLayout_19->addWidget(reconnectRetryDelay);

        label_22 = new QLabel(groupBox_7);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy8.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy8);

        horizontalLayout_19->addWidget(label_22);

        reconnectMaxRetries = new QSpinBox(groupBox_7);
        reconnectMaxRetries->setObjectName(QString::fromUtf8("reconnectMaxRetries"));
        reconnectMaxRetries->setMinimum(1);
        reconnectMaxRetries->setMaximum(10000);

        horizontalLayout_19->addWidget(reconnectMaxRetries);


        formLayout_19->setLayout(1, QFormLayout::FieldRole, horizontalLayout_19);

        label_17 = new QLabel(groupBox_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_19->setWidget(1, QFormLayout::LabelRole, label_17);

        horizontalSpacer_8 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_19->setItem(0, QFormLayout::LabelRole, horizontalSpacer_8);


        verticalLayout_24->addWidget(groupBox_7);

        advNetworkGroupBox = new QGroupBox(widget_11);
        advNetworkGroupBox->setObjectName(QString::fromUtf8("advNetworkGroupBox"));
        formLayout_23 = new QFormLayout(advNetworkGroupBox);
        formLayout_23->setObjectName(QString::fromUtf8("formLayout_23"));
        formLayout_23->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_23->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_23->setContentsMargins(-1, 2, -1, -1);
        advNetworkDisabled = new QLabel(advNetworkGroupBox);
        advNetworkDisabled->setObjectName(QString::fromUtf8("advNetworkDisabled"));

        formLayout_23->setWidget(0, QFormLayout::FieldRole, advNetworkDisabled);

        bindToIPLabel = new QLabel(advNetworkGroupBox);
        bindToIPLabel->setObjectName(QString::fromUtf8("bindToIPLabel"));

        formLayout_23->setWidget(1, QFormLayout::LabelRole, bindToIPLabel);

        bindToIP = new QComboBox(advNetworkGroupBox);
        bindToIP->setObjectName(QString::fromUtf8("bindToIP"));

        formLayout_23->setWidget(1, QFormLayout::FieldRole, bindToIP);

        enableNewSocketLoop = new QCheckBox(advNetworkGroupBox);
        enableNewSocketLoop->setObjectName(QString::fromUtf8("enableNewSocketLoop"));

        formLayout_23->setWidget(3, QFormLayout::FieldRole, enableNewSocketLoop);

        enableLowLatencyMode = new QCheckBox(advNetworkGroupBox);
        enableLowLatencyMode->setObjectName(QString::fromUtf8("enableLowLatencyMode"));
        enableLowLatencyMode->setEnabled(false);

        formLayout_23->setWidget(4, QFormLayout::FieldRole, enableLowLatencyMode);

        horizontalSpacer_7 = new QSpacerItem(170, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_23->setItem(3, QFormLayout::LabelRole, horizontalSpacer_7);

        dynBitrate = new QCheckBox(advNetworkGroupBox);
        dynBitrate->setObjectName(QString::fromUtf8("dynBitrate"));

        formLayout_23->setWidget(2, QFormLayout::FieldRole, dynBitrate);


        verticalLayout_24->addWidget(advNetworkGroupBox);

        sourcesGroup = new QGroupBox(widget_11);
        sourcesGroup->setObjectName(QString::fromUtf8("sourcesGroup"));
        formLayout_34 = new QFormLayout(sourcesGroup);
        formLayout_34->setObjectName(QString::fromUtf8("formLayout_34"));
        formLayout_34->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacer_15 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_34->setItem(0, QFormLayout::LabelRole, horizontalSpacer_15);

        browserHWAccel = new QCheckBox(sourcesGroup);
        browserHWAccel->setObjectName(QString::fromUtf8("browserHWAccel"));

        formLayout_34->setWidget(0, QFormLayout::FieldRole, browserHWAccel);


        verticalLayout_24->addWidget(sourcesGroup);

        groupBox_17 = new QGroupBox(widget_11);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        formLayout_33 = new QFormLayout(groupBox_17);
        formLayout_33->setObjectName(QString::fromUtf8("formLayout_33"));
        formLayout_33->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_33->setContentsMargins(-1, 2, -1, -1);
        label_21 = new QLabel(groupBox_17);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_33->setWidget(0, QFormLayout::LabelRole, label_21);

        hotkeyFocusType = new QComboBox(groupBox_17);
        hotkeyFocusType->setObjectName(QString::fromUtf8("hotkeyFocusType"));

        formLayout_33->setWidget(0, QFormLayout::FieldRole, hotkeyFocusType);

        horizontalSpacer_14 = new QSpacerItem(170, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_33->setItem(1, QFormLayout::LabelRole, horizontalSpacer_14);


        verticalLayout_24->addWidget(groupBox_17);


        verticalLayout_23->addWidget(widget_11);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_16->addWidget(scrollArea);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(10, 10, 10, 10);
        advancedMsg = new QLabel(advancedPage);
        advancedMsg->setObjectName(QString::fromUtf8("advancedMsg"));
        advancedMsg->setText(QString::fromUtf8(""));
        advancedMsg->setWordWrap(true);

        verticalLayout_17->addWidget(advancedMsg);

        advancedMsg2 = new QLabel(advancedPage);
        advancedMsg2->setObjectName(QString::fromUtf8("advancedMsg2"));
        advancedMsg2->setText(QString::fromUtf8(""));
        advancedMsg2->setWordWrap(true);

        verticalLayout_17->addWidget(advancedMsg2);


        verticalLayout_16->addLayout(verticalLayout_17);

        settingsPages->addWidget(advancedPage);

        horizontalLayout->addWidget(settingsPages);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(OBSBasicSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(language);
        label_42->setBuddy(theme);
        label_9->setBuddy(snapDistance);
        label_64->setBuddy(multiviewLayout);
        serviceLabel->setBuddy(service);
        streamKeyLabel->setBuddy(key);
        authUsernameLabel->setBuddy(authUsername);
        authPwLabel->setBuddy(authPw);
        twitchAddonLabel->setBuddy(twitchAddonDropdown);
        outputModeLabel->setBuddy(outputMode);
        label_19->setBuddy(simpleOutputVBitrate);
        label_20->setBuddy(simpleOutputABitrate);
        simpleOutStrEncoderLabel->setBuddy(simpleOutRecEncoder);
        simpleOutPresetLabel->setBuddy(simpleOutPreset);
        label_23->setBuddy(simpleOutCustom);
        label_18->setBuddy(simpleOutputPath);
        label_26->setBuddy(simpleOutRecQuality);
        simpleOutRecFormatLabel->setBuddy(simpleOutRecFormat);
        simpleOutRecEncoderLabel->setBuddy(simpleOutRecEncoder);
        label_420->setBuddy(simpleOutMuxCustom);
        label_31->setBuddy(advOutRecType);
        label_55->setBuddy(advOutTrack1Name);
        label_25->setBuddy(advOutTrack1Bitrate);
        label_49->setBuddy(advOutTrack2Bitrate);
        label_50->setBuddy(advOutTrack2Name);
        label_51->setBuddy(advOutTrack3Bitrate);
        label_52->setBuddy(advOutTrack3Name);
        label_53->setBuddy(advOutTrack4Bitrate);
        label_54->setBuddy(advOutTrack4Name);
        label_59->setBuddy(advOutTrack5Bitrate);
        label_60->setBuddy(advOutTrack5Name);
        label_61->setBuddy(advOutTrack6Bitrate);
        label_62->setBuddy(advOutTrack6Name);
        label_14->setBuddy(sampleRate);
        label_15->setBuddy(channelSetup);
        label_2->setBuddy(desktopAudioDevice1);
        label_3->setBuddy(desktopAudioDevice2);
        label_4->setBuddy(auxAudioDevice1);
        label_5->setBuddy(auxAudioDevice2);
        label_6->setBuddy(auxAudioDevice3);
        label_67->setBuddy(auxAudioDevice4);
        label_65->setBuddy(meterDecayRate);
        label_66->setBuddy(peakMeterType);
        monitoringDeviceLabel->setBuddy(monitoringDevice);
        label_8->setBuddy(baseResolution);
        outputResLabel->setBuddy(outputResolution);
        label_11->setBuddy(downscaleFilter);
        colorPresetLabel->setBuddy(colorPreset);
        colorSelectLabel_1->setBuddy(choose1);
        colorSelectLabel_2->setBuddy(choose2);
        colorSelectLabel_3->setBuddy(choose3);
        colorSelectLabel_4->setBuddy(choose4);
        colorSelectLabel_5->setBuddy(choose5);
        colorSelectLabel_6->setBuddy(choose6);
        colorSelectLabel_7->setBuddy(choose7);
        colorSelectLabel_8->setBuddy(choose8);
        colorSelectLabel_9->setBuddy(choose9);
        processPriorityLabel->setBuddy(processPriority);
        rendererLabel->setBuddy(renderer);
        adapterLabel->setBuddy(adapter);
        label_30->setBuddy(colorFormat);
        label_33->setBuddy(colorSpace);
        label_34->setBuddy(colorRange);
        label_sdrWhiteLevel->setBuddy(sdrWhiteLevel);
        label_hdrNominalPeakLevel->setBuddy(hdrNominalPeakLevel);
        label_7->setBuddy(filenameFormatting);
        label_58->setBuddy(simpleRBSuffix);
        label_57->setBuddy(simpleRBPrefix);
        label_56->setBuddy(streamDelaySec);
        label_22->setBuddy(reconnectMaxRetries);
        label_17->setBuddy(reconnectRetryDelay);
        bindToIPLabel->setBuddy(bindToIP);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(listWidget, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, language);
        QWidget::setTabOrder(language, theme);
        QWidget::setTabOrder(theme, enableAutoUpdates);
        QWidget::setTabOrder(enableAutoUpdates, openStatsOnStartup);
        QWidget::setTabOrder(openStatsOnStartup, warnBeforeStreamStart);
        QWidget::setTabOrder(warnBeforeStreamStart, warnBeforeStreamStop);
        QWidget::setTabOrder(warnBeforeStreamStop, warnBeforeRecordStop);
        QWidget::setTabOrder(warnBeforeRecordStop, recordWhenStreaming);
        QWidget::setTabOrder(recordWhenStreaming, keepRecordStreamStops);
        QWidget::setTabOrder(keepRecordStreamStops, replayWhileStreaming);
        QWidget::setTabOrder(replayWhileStreaming, keepReplayStreamStops);
        QWidget::setTabOrder(keepReplayStreamStops, snappingEnabled);
        QWidget::setTabOrder(snappingEnabled, snapDistance);
        QWidget::setTabOrder(snapDistance, screenSnapping);
        QWidget::setTabOrder(screenSnapping, sourceSnapping);
        QWidget::setTabOrder(sourceSnapping, centerSnapping);
        QWidget::setTabOrder(centerSnapping, hideProjectorCursor);
        QWidget::setTabOrder(hideProjectorCursor, projectorAlwaysOnTop);
        QWidget::setTabOrder(projectorAlwaysOnTop, saveProjectors);
        QWidget::setTabOrder(saveProjectors, systemTrayEnabled);
        QWidget::setTabOrder(systemTrayEnabled, systemTrayWhenStarted);
        QWidget::setTabOrder(systemTrayWhenStarted, systemTrayAlways);
        QWidget::setTabOrder(systemTrayAlways, overflowHide);
        QWidget::setTabOrder(overflowHide, overflowAlwaysVisible);
        QWidget::setTabOrder(overflowAlwaysVisible, overflowSelectionHide);
        QWidget::setTabOrder(overflowSelectionHide, previewSafeAreas);
        QWidget::setTabOrder(previewSafeAreas, automaticSearch);
        QWidget::setTabOrder(automaticSearch, doubleClickSwitch);
        QWidget::setTabOrder(doubleClickSwitch, studioPortraitLayout);
        QWidget::setTabOrder(studioPortraitLayout, prevProgLabelToggle);
        QWidget::setTabOrder(prevProgLabelToggle, multiviewMouseSwitch);
        QWidget::setTabOrder(multiviewMouseSwitch, multiviewDrawNames);
        QWidget::setTabOrder(multiviewDrawNames, multiviewDrawAreas);
        QWidget::setTabOrder(multiviewDrawAreas, multiviewLayout);
        QWidget::setTabOrder(multiviewLayout, service);
        QWidget::setTabOrder(service, connectAccount);
        QWidget::setTabOrder(connectAccount, useStreamKey);
        QWidget::setTabOrder(useStreamKey, server);
        QWidget::setTabOrder(server, customServer);
        QWidget::setTabOrder(customServer, key);
        QWidget::setTabOrder(key, show);
        QWidget::setTabOrder(show, getStreamKeyButton);
        QWidget::setTabOrder(getStreamKeyButton, connectAccount2);
        QWidget::setTabOrder(connectAccount2, disconnectAccount);
        QWidget::setTabOrder(disconnectAccount, bandwidthTestEnable);
        QWidget::setTabOrder(bandwidthTestEnable, useAuth);
        QWidget::setTabOrder(useAuth, twitchAddonDropdown);
        QWidget::setTabOrder(twitchAddonDropdown, authUsername);
        QWidget::setTabOrder(authUsername, authPw);
        QWidget::setTabOrder(authPw, authPwShow);
        QWidget::setTabOrder(authPwShow, outputMode);
        QWidget::setTabOrder(outputMode, simpleOutputVBitrate);
        QWidget::setTabOrder(simpleOutputVBitrate, simpleOutputABitrate);
        QWidget::setTabOrder(simpleOutputABitrate, simpleOutStrEncoder);
        QWidget::setTabOrder(simpleOutStrEncoder, simpleOutPreset);
        QWidget::setTabOrder(simpleOutPreset, simpleOutAdvanced);
        QWidget::setTabOrder(simpleOutAdvanced, simpleOutCustom);
        QWidget::setTabOrder(simpleOutCustom, simpleOutputPath);
        QWidget::setTabOrder(simpleOutputPath, simpleOutputBrowse);
        QWidget::setTabOrder(simpleOutputBrowse, simpleNoSpace);
        QWidget::setTabOrder(simpleNoSpace, simpleOutRecQuality);
        QWidget::setTabOrder(simpleOutRecQuality, simpleOutRecFormat);
        QWidget::setTabOrder(simpleOutRecFormat, simpleOutRecEncoder);
        QWidget::setTabOrder(simpleOutRecEncoder, simpleOutMuxCustom);
        QWidget::setTabOrder(simpleOutMuxCustom, simpleReplayBuf);
        QWidget::setTabOrder(simpleReplayBuf, simpleRBSecMax);
        QWidget::setTabOrder(simpleRBSecMax, simpleRBMegsMax);
        QWidget::setTabOrder(simpleRBMegsMax, advOutTabs);
        QWidget::setTabOrder(advOutTabs, advOutTrack1);
        QWidget::setTabOrder(advOutTrack1, advOutTrack2);
        QWidget::setTabOrder(advOutTrack2, advOutTrack3);
        QWidget::setTabOrder(advOutTrack3, advOutTrack4);
        QWidget::setTabOrder(advOutTrack4, advOutTrack5);
        QWidget::setTabOrder(advOutTrack5, advOutTrack6);
        QWidget::setTabOrder(advOutTrack6, advOutEncoder);
        QWidget::setTabOrder(advOutEncoder, advOutUseRescale);
        QWidget::setTabOrder(advOutUseRescale, advOutRescale);
        QWidget::setTabOrder(advOutRescale, advOutRecType);
        QWidget::setTabOrder(advOutRecType, advOutRecPath);
        QWidget::setTabOrder(advOutRecPath, advOutRecPathBrowse);
        QWidget::setTabOrder(advOutRecPathBrowse, advOutRecFormat);
        QWidget::setTabOrder(advOutRecFormat, advOutRecTrack1);
        QWidget::setTabOrder(advOutRecTrack1, advOutRecTrack2);
        QWidget::setTabOrder(advOutRecTrack2, advOutRecTrack3);
        QWidget::setTabOrder(advOutRecTrack3, advOutRecTrack4);
        QWidget::setTabOrder(advOutRecTrack4, advOutRecTrack5);
        QWidget::setTabOrder(advOutRecTrack5, advOutRecTrack6);
        QWidget::setTabOrder(advOutRecTrack6, advOutRecRescale);
        QWidget::setTabOrder(advOutRecRescale, advOutSplitFile);
        QWidget::setTabOrder(advOutSplitFile, advOutSplitFileType);
        QWidget::setTabOrder(advOutSplitFileType, advOutSplitFileTime);
        QWidget::setTabOrder(advOutSplitFileTime, advOutSplitFileSize);
        QWidget::setTabOrder(advOutSplitFileSize, advOutSplitFileRstTS);
        QWidget::setTabOrder(advOutSplitFileRstTS, advOutTrack1Bitrate);
        QWidget::setTabOrder(advOutTrack1Bitrate, advOutTrack1Name);
        QWidget::setTabOrder(advOutTrack1Name, advOutTrack2Bitrate);
        QWidget::setTabOrder(advOutTrack2Bitrate, advOutTrack2Name);
        QWidget::setTabOrder(advOutTrack2Name, advOutTrack3Bitrate);
        QWidget::setTabOrder(advOutTrack3Bitrate, advOutTrack3Name);
        QWidget::setTabOrder(advOutTrack3Name, advOutTrack4Bitrate);
        QWidget::setTabOrder(advOutTrack4Bitrate, advOutTrack4Name);
        QWidget::setTabOrder(advOutTrack4Name, advOutTrack5Bitrate);
        QWidget::setTabOrder(advOutTrack5Bitrate, advOutTrack5Name);
        QWidget::setTabOrder(advOutTrack5Name, advOutTrack6Bitrate);
        QWidget::setTabOrder(advOutTrack6Bitrate, advOutTrack6Name);
        QWidget::setTabOrder(advOutTrack6Name, advRBSecMax);
        QWidget::setTabOrder(advRBSecMax, advRBMegsMax);
        QWidget::setTabOrder(advRBMegsMax, scrollArea_50);
        QWidget::setTabOrder(scrollArea_50, sampleRate);
        QWidget::setTabOrder(sampleRate, channelSetup);
        QWidget::setTabOrder(channelSetup, desktopAudioDevice1);
        QWidget::setTabOrder(desktopAudioDevice1, desktopAudioDevice2);
        QWidget::setTabOrder(desktopAudioDevice2, auxAudioDevice1);
        QWidget::setTabOrder(auxAudioDevice1, auxAudioDevice2);
        QWidget::setTabOrder(auxAudioDevice2, auxAudioDevice3);
        QWidget::setTabOrder(auxAudioDevice3, auxAudioDevice4);
        QWidget::setTabOrder(auxAudioDevice4, meterDecayRate);
        QWidget::setTabOrder(meterDecayRate, peakMeterType);
        QWidget::setTabOrder(peakMeterType, monitoringDevice);
        QWidget::setTabOrder(monitoringDevice, disableAudioDucking);
        QWidget::setTabOrder(disableAudioDucking, lowLatencyBuffering);
        QWidget::setTabOrder(lowLatencyBuffering, outputResolution);
        QWidget::setTabOrder(outputResolution, downscaleFilter);
        QWidget::setTabOrder(downscaleFilter, fpsType);
        QWidget::setTabOrder(fpsType, fpsCommon);
        QWidget::setTabOrder(fpsCommon, fpsInteger);
        QWidget::setTabOrder(fpsInteger, fpsNumerator);
        QWidget::setTabOrder(fpsNumerator, fpsDenominator);
        QWidget::setTabOrder(fpsDenominator, scrollArea);
        QWidget::setTabOrder(scrollArea, processPriority);
        QWidget::setTabOrder(processPriority, confirmOnExit);
        QWidget::setTabOrder(confirmOnExit, renderer);
        QWidget::setTabOrder(renderer, adapter);
        QWidget::setTabOrder(adapter, colorFormat);
        QWidget::setTabOrder(colorFormat, colorSpace);
        QWidget::setTabOrder(colorSpace, colorRange);
        QWidget::setTabOrder(colorRange, disableOSXVSync);
        QWidget::setTabOrder(disableOSXVSync, resetOSXVSync);
        QWidget::setTabOrder(resetOSXVSync, filenameFormatting);
        QWidget::setTabOrder(filenameFormatting, overwriteIfExists);
        QWidget::setTabOrder(overwriteIfExists, autoRemux);
        QWidget::setTabOrder(autoRemux, simpleRBPrefix);
        QWidget::setTabOrder(simpleRBPrefix, simpleRBSuffix);
        QWidget::setTabOrder(simpleRBSuffix, streamDelayEnable);
        QWidget::setTabOrder(streamDelayEnable, streamDelaySec);
        QWidget::setTabOrder(streamDelaySec, streamDelayPreserve);
        QWidget::setTabOrder(streamDelayPreserve, reconnectEnable);
        QWidget::setTabOrder(reconnectEnable, reconnectRetryDelay);
        QWidget::setTabOrder(reconnectRetryDelay, reconnectMaxRetries);
        QWidget::setTabOrder(reconnectMaxRetries, bindToIP);
        QWidget::setTabOrder(bindToIP, dynBitrate);
        QWidget::setTabOrder(dynBitrate, enableNewSocketLoop);
        QWidget::setTabOrder(enableNewSocketLoop, enableLowLatencyMode);
        QWidget::setTabOrder(enableLowLatencyMode, browserHWAccel);
        QWidget::setTabOrder(browserHWAccel, hotkeyFocusType);
        QWidget::setTabOrder(hotkeyFocusType, hideOBSFromCapture);
        QWidget::setTabOrder(hideOBSFromCapture, closeProjectors);
        QWidget::setTabOrder(closeProjectors, moreInfoButton);
        QWidget::setTabOrder(moreInfoButton, ignoreRecommended);
        QWidget::setTabOrder(ignoreRecommended, useStreamKeyAdv);
        QWidget::setTabOrder(useStreamKeyAdv, baseResolution);
        QWidget::setTabOrder(baseResolution, hotkeyFilterSearch);
        QWidget::setTabOrder(hotkeyFilterSearch, hotkeyFilterInput);
        QWidget::setTabOrder(hotkeyFilterInput, hotkeyFilterReset);
        QWidget::setTabOrder(hotkeyFilterReset, hotkeyScrollArea);
        QWidget::setTabOrder(hotkeyScrollArea, sdrWhiteLevel);
        QWidget::setTabOrder(sdrWhiteLevel, hdrNominalPeakLevel);

        retranslateUi(OBSBasicSettings);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), settingsPages, SLOT(setCurrentIndex(int)));
        QObject::connect(fpsType, SIGNAL(currentIndexChanged(int)), fpsTypes, SLOT(setCurrentIndex(int)));
        QObject::connect(outputMode, SIGNAL(currentIndexChanged(int)), outputModePages, SLOT(setCurrentIndex(int)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), simpleOutCustom, SLOT(setVisible(bool)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), label_23, SLOT(setVisible(bool)));
        QObject::connect(systemTrayEnabled, SIGNAL(toggled(bool)), systemTrayWhenStarted, SLOT(setEnabled(bool)));
        QObject::connect(systemTrayEnabled, SIGNAL(toggled(bool)), systemTrayAlways, SLOT(setEnabled(bool)));
        QObject::connect(enableNewSocketLoop, SIGNAL(toggled(bool)), enableLowLatencyMode, SLOT(setEnabled(bool)));
        QObject::connect(snappingEnabled, SIGNAL(toggled(bool)), label_9, SLOT(setEnabled(bool)));
        QObject::connect(snappingEnabled, SIGNAL(toggled(bool)), snapDistance, SLOT(setEnabled(bool)));
        QObject::connect(snappingEnabled, SIGNAL(toggled(bool)), screenSnapping, SLOT(setEnabled(bool)));
        QObject::connect(snappingEnabled, SIGNAL(toggled(bool)), sourceSnapping, SLOT(setEnabled(bool)));
        QObject::connect(snappingEnabled, SIGNAL(toggled(bool)), centerSnapping, SLOT(setEnabled(bool)));
        QObject::connect(recordWhenStreaming, SIGNAL(toggled(bool)), keepRecordStreamStops, SLOT(setEnabled(bool)));
        QObject::connect(replayWhileStreaming, SIGNAL(toggled(bool)), keepReplayStreamStops, SLOT(setEnabled(bool)));
        QObject::connect(streamDelayEnable, SIGNAL(toggled(bool)), label_56, SLOT(setEnabled(bool)));
        QObject::connect(streamDelayEnable, SIGNAL(toggled(bool)), streamDelaySec, SLOT(setEnabled(bool)));
        QObject::connect(streamDelayEnable, SIGNAL(toggled(bool)), streamDelayInfo, SLOT(setEnabled(bool)));
        QObject::connect(streamDelayEnable, SIGNAL(toggled(bool)), streamDelayPreserve, SLOT(setEnabled(bool)));
        QObject::connect(connectAccount2, SIGNAL(clicked()), connectAccount, SLOT(click()));
        QObject::connect(advOutSplitFile, SIGNAL(toggled(bool)), advOutSplitFileType, SLOT(setEnabled(bool)));
        QObject::connect(advOutUseRescale, SIGNAL(toggled(bool)), advOutRescale, SLOT(setEnabled(bool)));
        QObject::connect(advOutRecType, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(advOutRecUseRescale, SIGNAL(toggled(bool)), advOutRecRescale, SLOT(setEnabled(bool)));
        QObject::connect(advOutFFUseRescale, SIGNAL(toggled(bool)), advOutFFRescale, SLOT(setEnabled(bool)));
        QObject::connect(advOutFFType, SIGNAL(currentIndexChanged(int)), stackedWidget_2, SLOT(setCurrentIndex(int)));

        listWidget->setCurrentRow(0);
        settingsPages->setCurrentIndex(0);
        streamStackWidget->setCurrentIndex(1);
        serverStackedWidget->setCurrentIndex(1);
        outputMode->setCurrentIndex(0);
        outputModePages->setCurrentIndex(0);
        simpleOutputABitrate->setCurrentIndex(8);
        advOutTabs->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        advRecTrackWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        advOutTrack1Bitrate->setCurrentIndex(8);
        advOutTrack2Bitrate->setCurrentIndex(8);
        advOutTrack3Bitrate->setCurrentIndex(8);
        advOutTrack4Bitrate->setCurrentIndex(8);
        advOutTrack5Bitrate->setCurrentIndex(8);
        advOutTrack6Bitrate->setCurrentIndex(8);
        sampleRate->setCurrentIndex(0);
        channelSetup->setCurrentIndex(0);
        meterDecayRate->setCurrentIndex(0);
        peakMeterType->setCurrentIndex(0);
        fpsTypes->setCurrentIndex(1);
        fpsCommon->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OBSBasicSettings);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicSettings)
    {
        OBSBasicSettings->setWindowTitle(QCoreApplication::translate("OBSBasicSettings", "Settings", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        groupBox_15->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General", nullptr));
        label->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Language", nullptr));
        label_42->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Theme", nullptr));
        enableAutoUpdates->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.EnableAutoUpdates", nullptr));
        openStatsOnStartup->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.OpenStatsOnStartup", nullptr));
#if QT_CONFIG(tooltip)
        hideOBSFromCapture->setToolTip(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.HideOBSWindowsFromCapture.Tooltip", nullptr));
#endif // QT_CONFIG(tooltip)
        hideOBSFromCapture->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.HideOBSWindowsFromCapture", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output", nullptr));
        warnBeforeStreamStart->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.WarnBeforeStartingStream", nullptr));
        warnBeforeStreamStop->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.WarnBeforeStoppingStream", nullptr));
        warnBeforeRecordStop->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.WarnBeforeStoppingRecord", nullptr));
        recordWhenStreaming->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.RecordWhenStreaming", nullptr));
        keepRecordStreamStops->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.KeepRecordingWhenStreamStops", nullptr));
        replayWhileStreaming->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.ReplayBufferWhileStreaming", nullptr));
        keepReplayStreamStops->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.KeepReplayBufferStreamStops", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Snapping", nullptr));
        snappingEnabled->setText(QCoreApplication::translate("OBSBasicSettings", "Enable", nullptr));
        screenSnapping->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.ScreenSnapping", nullptr));
        centerSnapping->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.CenterSnapping", nullptr));
        sourceSnapping->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SourceSnapping", nullptr));
        label_9->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SnapDistance", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Projectors", nullptr));
        hideProjectorCursor->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.HideProjectorCursor", nullptr));
        projectorAlwaysOnTop->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.ProjectorAlwaysOnTop", nullptr));
        saveProjectors->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SaveProjectors", nullptr));
        closeProjectors->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.CloseExistingProjectors", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SysTray", nullptr));
        systemTrayEnabled->setText(QCoreApplication::translate("OBSBasicSettings", "Enable", nullptr));
        systemTrayWhenStarted->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SysTrayWhenStarted", nullptr));
        systemTrayAlways->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SystemTrayHideMinimize", nullptr));
        groupBox_18->setTitle(QCoreApplication::translate("OBSBasicSettings", "StudioMode.Preview", nullptr));
        overflowAlwaysVisible->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.OverflowAlwaysVisible", nullptr));
        overflowSelectionHide->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.OverflowSelectionHidden", nullptr));
        previewSafeAreas->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Multiview.DrawSafeAreas", nullptr));
        previewSpacingHelpers->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SpacingHelpers", nullptr));
        overflowHide->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.OverflowHidden", nullptr));
        groupBox_19->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Importers", nullptr));
        automaticSearch->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.AutomaticCollectionSearch", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.TogglePreviewProgramMode", nullptr));
        doubleClickSwitch->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SwitchOnDoubleClick", nullptr));
        studioPortraitLayout->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.StudioPortraitLayout", nullptr));
        prevProgLabelToggle->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.TogglePreviewProgramLabels", nullptr));
        groupBoxMultiview->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Multiview", nullptr));
        multiviewMouseSwitch->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Multiview.MouseSwitch", nullptr));
        multiviewDrawNames->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Multiview.DrawSourceNames", nullptr));
        multiviewDrawAreas->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Multiview.DrawSafeAreas", nullptr));
        label_64->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.MultiviewLayout", nullptr));
        serviceLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.Service", nullptr));
        moreInfoButton->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.MoreInfo", nullptr));
        connectAccount->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.ConnectAccount", nullptr));
        useStreamKey->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.UseStreamKey", nullptr));
        serverLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.Server", nullptr));
        streamKeyLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.StreamKey", nullptr));
        show->setText(QCoreApplication::translate("OBSBasicSettings", "Show", nullptr));
#if QT_CONFIG(tooltip)
        getStreamKeyButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        getStreamKeyButton->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.GetStreamKey", nullptr));
        connectedAccountText->setText(QCoreApplication::translate("OBSBasicSettings", "Auth.LoadingChannel.Title", nullptr));
        disconnectAccount->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.DisconnectAccount", nullptr));
        bandwidthTestEnable->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.BandwidthTestMode", nullptr));
        useAuth->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.Custom.UseAuthentication", nullptr));
        authUsernameLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.Custom.Username", nullptr));
        authPwLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.Custom.Password", nullptr));
        authPwShow->setText(QCoreApplication::translate("OBSBasicSettings", "Show", nullptr));
        twitchAddonLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.TTVAddon", nullptr));
        ignoreRecommended->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.IgnoreRecommended", nullptr));
        useStreamKeyAdv->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.UseStreamKeyAdvanced", nullptr));
        connectedAccountLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.ConnectedAccount", nullptr));
        connectAccount2->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.ConnectAccount", nullptr));
        outputModeLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode", nullptr));
        outputMode->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode.Simple", nullptr));
        outputMode->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode.Adv", nullptr));

        simpleStreamingGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Streaming", nullptr));
        label_19->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.VideoBitrate", nullptr));
        label_20->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        simpleOutputABitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        simpleOutputABitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        simpleOutputABitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        simpleOutputABitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        simpleOutputABitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        simpleOutputABitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        simpleOutputABitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        simpleOutputABitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        simpleOutputABitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        simpleOutputABitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        simpleOutputABitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        simpleOutStrEncoderLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder", nullptr));
        simpleOutPresetLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.EncoderPreset", nullptr));
        simpleOutAdvanced->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Advanced", nullptr));
        label_23->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.CustomEncoderSettings", nullptr));
        simpleRecordingGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording", nullptr));
        label_18->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Simple.SavePath", nullptr));
        simpleOutputBrowse->setText(QCoreApplication::translate("OBSBasicSettings", "Browse", nullptr));
        simpleNoSpace->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.NoSpaceFileName", nullptr));
        label_26->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Simple.RecordingQuality", nullptr));
        simpleOutRecFormatLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Format", nullptr));

        simpleOutRecEncoderLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder", nullptr));
        label_420->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.CustomMuxerSettings", nullptr));
        simpleReplayBuf->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.UseReplayBuffer", nullptr));
        replayBufferGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "ReplayBuffer", nullptr));
        label_35->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.SecondsMax", nullptr));
        simpleRBMegsMaxLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.MegabytesMax", nullptr));
        advOutTopContainer->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Streaming.Settings", nullptr));
        label_28->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.AudioTrack", nullptr));
        advOutEncLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder", nullptr));
        advOutUseRescale->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Rescale", nullptr));
        advOutEncoderProps->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Encoder", nullptr));
        advOutTabs->setTabText(advOutTabs->indexOf(advOutputStreamTab), QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Streaming", nullptr));
        label_31->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Type", nullptr));
        advOutRecType->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Type.Standard", nullptr));
        advOutRecType->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Type.FFmpegOutput", nullptr));

        advOutRecTopContainer->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Settings", nullptr));
        label_32->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Simple.SavePath", nullptr));
        advOutRecPathBrowse->setText(QCoreApplication::translate("OBSBasicSettings", "Browse", nullptr));
        advOutNoSpace->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.NoSpaceFileName", nullptr));
        label_43->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Format", nullptr));

        label_29->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.AudioTrack", nullptr));
        flvTrack1->setText(QCoreApplication::translate("OBSBasicSettings", "1", nullptr));
        flvTrack2->setText(QCoreApplication::translate("OBSBasicSettings", "2", nullptr));
        flvTrack3->setText(QCoreApplication::translate("OBSBasicSettings", "3", nullptr));
        flvTrack4->setText(QCoreApplication::translate("OBSBasicSettings", "4", nullptr));
        flvTrack5->setText(QCoreApplication::translate("OBSBasicSettings", "5", nullptr));
        flvTrack6->setText(QCoreApplication::translate("OBSBasicSettings", "6", nullptr));
        advOutRecEncLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder", nullptr));
        advOutRecUseRescale->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Rescale", nullptr));
        label_9001->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.CustomMuxerSettings", nullptr));
        advOutSplitFile->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.EnableSplitFile", nullptr));
        advOutSplitFileType->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.SplitFile.TypeTime", nullptr));
        advOutSplitFileType->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.SplitFile.TypeSize", nullptr));
        advOutSplitFileType->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.SplitFile.TypeManual", nullptr));

        advOutSplitFileTimeLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.SplitFile.Time", nullptr));
        advOutSplitFileTime->setSuffix(QCoreApplication::translate("OBSBasicSettings", " min", nullptr));
        advOutSplitFileSizeLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.SplitFile.Size", nullptr));
        advOutSplitFileSize->setSuffix(QCoreApplication::translate("OBSBasicSettings", " MB", nullptr));
        advOutSplitFileRstTS->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.SplitFile.ResetTimestamps", nullptr));
        advOutRecEncoderProps->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Encoder", nullptr));
        advOutRecFFmpeg->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Settings", nullptr));
        label_48->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Type", nullptr));
        advOutFFType->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Type.RecordToFile", nullptr));
        advOutFFType->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Type.URL", nullptr));

        label_36->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.SavePathURL", nullptr));
        advOutFFPathBrowse->setText(QCoreApplication::translate("OBSBasicSettings", "Browse", nullptr));
        advOutFFNoSpace->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.NoSpaceFileName", nullptr));
        label_16->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Format", nullptr));
        label_44->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.FormatDesc", nullptr));
        advOutFFFormatDesc->setText(QString());
        label_1337->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.MuxerSettings", nullptr));
        label_40->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.VideoBitrate", nullptr));
        label_63->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.GOPSize", nullptr));
        advOutFFUseRescale->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Rescale", nullptr));
        advOutFFIgnoreCompat->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.IgnoreCodecCompat", nullptr));
        label_37->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.VEncoder", nullptr));
        label_38->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.VEncoderSettings", nullptr));
        label_41->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        label_47->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.AudioTrack", nullptr));
        label_39->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.AEncoder", nullptr));
        label_46->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.AEncoderSettings", nullptr));
        advOutTabs->setTabText(advOutTabs->indexOf(advOutputRecordTab), QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track1", nullptr));
        advOutTrack1Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack1Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack1Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack1Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack1Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack1Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack1Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack1Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack1Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack1Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack1Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_55->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        label_25->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track2", nullptr));
        label_49->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        advOutTrack2Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack2Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack2Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack2Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack2Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack2Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack2Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack2Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack2Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack2Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack2Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_50->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track3", nullptr));
        label_51->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        advOutTrack3Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack3Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack3Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack3Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack3Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack3Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack3Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack3Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack3Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack3Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack3Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_52->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track4", nullptr));
        label_53->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        advOutTrack4Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack4Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack4Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack4Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack4Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack4Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack4Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack4Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack4Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack4Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack4Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_54->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track5", nullptr));
        label_59->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        advOutTrack5Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack5Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack5Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack5Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack5Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack5Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack5Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack5Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack5Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack5Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack5Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_60->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track6", nullptr));
        label_61->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        advOutTrack6Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack6Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack6Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack6Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack6Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack6Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack6Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack6Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack6Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack6Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack6Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_62->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        advOutTabs->setTabText(advOutTabs->indexOf(advOutputAudioTracksTab), QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio", nullptr));
        advReplayBuf->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.UseReplayBuffer", nullptr));
        advRBSecMaxLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.SecondsMax", nullptr));
        advRBMegsMax->setSuffix(QCoreApplication::translate("OBSBasicSettings", " MB", nullptr));
        advRBMegsMaxLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.MegabytesMax", nullptr));
        advOutTabs->setTabText(advOutTabs->indexOf(advOutputReplayTab), QCoreApplication::translate("OBSBasicSettings", "ReplayBuffer", nullptr));
        audioGeneralGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General", nullptr));
        label_14->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.SampleRate", nullptr));
        sampleRate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "44.1 kHz", nullptr));
        sampleRate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48 kHz", nullptr));

        label_15->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.Channels", nullptr));
        channelSetup->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Mono", nullptr));
        channelSetup->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Stereo", nullptr));
        channelSetup->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "2.1", nullptr));
        channelSetup->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "4.0", nullptr));
        channelSetup->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "4.1", nullptr));
        channelSetup->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "5.1", nullptr));
        channelSetup->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "7.1", nullptr));

        channelSetup->setCurrentText(QCoreApplication::translate("OBSBasicSettings", "Mono", nullptr));
        audioDevicesGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.Devices", nullptr));
        label_2->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.DesktopDevice", nullptr));
        label_3->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.DesktopDevice2", nullptr));
        label_4->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice", nullptr));
        label_5->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice2", nullptr));
        label_6->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice3", nullptr));
        label_67->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice4", nullptr));
        audioMetersGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.Meters", nullptr));
        label_65->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.MeterDecayRate", nullptr));
        meterDecayRate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.MeterDecayRate.Fast", nullptr));
        meterDecayRate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.MeterDecayRate.Medium", nullptr));
        meterDecayRate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.MeterDecayRate.Slow", nullptr));

        meterDecayRate->setCurrentText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.MeterDecayRate.Fast", nullptr));
        label_66->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.PeakMeterType", nullptr));
        peakMeterType->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.PeakMeterType.SamplePeak", nullptr));
        peakMeterType->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.PeakMeterType.TruePeak", nullptr));

        audioAdvGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced", nullptr));
        monitoringDeviceLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Audio.MonitoringDevice", nullptr));
        disableAudioDucking->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Audio.DisableAudioDucking", nullptr));
        lowLatencyBuffering->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.LowLatencyBufferingMode", nullptr));
        audioHotkeysGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys", nullptr));
        audioMsg->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicSettings", "error", nullptr)));
        label_8->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.BaseResolution", nullptr));
        baseAspect->setText(QCoreApplication::translate("OBSBasicSettings", "AspectRatio", nullptr));
        outputResLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.ScaledResolution", nullptr));
        label_11->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.DownscaleFilter", nullptr));
        fpsType->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSCommon", nullptr));
        fpsType->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSInteger", nullptr));
        fpsType->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSFraction", nullptr));

        fpsType->setCurrentText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSCommon", nullptr));
        fpsCommon->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "24 NTSC", nullptr));
        fpsCommon->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "25 PAL", nullptr));
        fpsCommon->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "50 PAL", nullptr));

        label_12->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Numerator", nullptr));
        label_13->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Denominator", nullptr));
        videoMsg->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicSettings", "error", nullptr)));
        scaledAspect->setText(QCoreApplication::translate("OBSBasicSettings", "AspectRatio", nullptr));
        hotkeySearchLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys.Filter", nullptr));
        hotkeyFilterLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys.FilterByHotkey", nullptr));
#if QT_CONFIG(tooltip)
        hotkeyFilterReset->setToolTip(QCoreApplication::translate("OBSBasicSettings", "Clear", nullptr));
#endif // QT_CONFIG(tooltip)
        hotkeyFilterReset->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicSettings", "revertIcon", nullptr)));
        colorsGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides", nullptr));
        colorPresetLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.Preset", nullptr));
        colorPreset->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.Preset.Default", nullptr));
        colorPreset->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.Preset.ColorBlind1", nullptr));
        colorPreset->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.Preset.Custom", nullptr));

        colorSelectLabel_1->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.SelectRed", nullptr));
        choose1->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_2->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.SelectGreen", nullptr));
        choose2->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_3->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.SelectBlue", nullptr));
        choose3->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_4->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerGreen", nullptr));
        choose4->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_5->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerYellow", nullptr));
        choose5->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_6->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerRed", nullptr));
        choose6->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_7->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerGreenActive", nullptr));
        choose7->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_8->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerYellowActive", nullptr));
        choose8->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_9->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerRedActive", nullptr));
        choose9->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        advancedGeneralGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General", nullptr));
        processPriorityLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.General.ProcessPriority", nullptr));
        confirmOnExit->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.General.ConfirmOnExit", nullptr));
        advancedVideoContainer->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video", nullptr));
        rendererLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Renderer", nullptr));
        adapterLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Adapter", nullptr));
        label_30->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.ColorFormat", nullptr));
        label_33->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.ColorSpace", nullptr));
        label_34->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.ColorRange", nullptr));
        label_sdrWhiteLevel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.SdrWhiteLevel", nullptr));
        label_hdrNominalPeakLevel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.HdrNominalPeakLevel", nullptr));
        disableOSXVSync->setText(QCoreApplication::translate("OBSBasicSettings", "DisableOSXVSync", nullptr));
        resetOSXVSync->setText(QCoreApplication::translate("OBSBasicSettings", "ResetOSXVSyncOnExit", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording", nullptr));
        label_7->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Filename", nullptr));
        overwriteIfExists->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.OverwriteIfExists", nullptr));
        label_58->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.Suffix", nullptr));
        label_57->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.Prefix", nullptr));
        autoRemux->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.AutoRemux", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.StreamDelay", nullptr));
        label_56->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.StreamDelay.Duration", nullptr));
        streamDelayPreserve->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.StreamDelay.Preserve", nullptr));
        streamDelayEnable->setText(QCoreApplication::translate("OBSBasicSettings", "Enable", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Reconnect", nullptr));
        reconnectEnable->setText(QCoreApplication::translate("OBSBasicSettings", "Enable", nullptr));
        reconnectRetryDelay->setSuffix(QCoreApplication::translate("OBSBasicSettings", " s", nullptr));
        label_22->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.MaxRetries", nullptr));
        label_17->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.RetryDelay", nullptr));
        advNetworkGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network", nullptr));
        advNetworkDisabled->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.Disabled", nullptr));
        bindToIPLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.BindToIP", nullptr));
        enableNewSocketLoop->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.EnableNewSocketLoop", nullptr));
        enableLowLatencyMode->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.EnableLowLatencyMode", nullptr));
#if QT_CONFIG(tooltip)
        dynBitrate->setToolTip(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.DynamicBitrate.TT", nullptr));
#endif // QT_CONFIG(tooltip)
        dynBitrate->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.DynamicBitrate.Beta", nullptr));
        sourcesGroup->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Main.Sources", nullptr));
        browserHWAccel->setText(QCoreApplication::translate("OBSBasicSettings", "BrowserSource.EnableHardwareAcceleration", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys", nullptr));
        label_21->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Hotkeys.HotkeyFocusBehavior", nullptr));
        advancedMsg->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicSettings", "error", nullptr)));
        advancedMsg2->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicSettings", "error", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicSettings: public Ui_OBSBasicSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICSETTINGS_H
