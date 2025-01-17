/********************************************************************************
** Form generated from reading UI file 'OBSBasic.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASIC_H
#define UI_OBSBASIC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "horizontal-scroll-area.hpp"
#include "record-button.hpp"
#include "scene-tree.hpp"
#include "source-tree.hpp"
#include "vertical-scroll-area.hpp"
#include "window-basic-preview.hpp"
#include "window-basic-status-bar.hpp"
#include "window-dock.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasic
{
public:
    QAction *actionAddScene;
    QAction *actionAddSource;
    QAction *actionRemoveScene;
    QAction *actionRemoveSource;
    QAction *actionSourceProperties;
    QAction *actionSceneUp;
    QAction *actionSourceUp;
    QAction *actionSceneDown;
    QAction *actionSourceDown;
    QAction *actionShow_Recordings;
    QAction *actionRemux;
    QAction *action_Settings;
    QAction *actionE_xit;
    QAction *actionShowLogs;
    QAction *actionUploadLastLog;
    QAction *actionUploadCurrentLog;
    QAction *actionViewCurrentLog;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionEditTransform;
    QAction *actionCopyTransform;
    QAction *actionPasteTransform;
    QAction *actionRotate90CW;
    QAction *actionRotate90CCW;
    QAction *actionRotate180;
    QAction *actionFitToScreen;
    QAction *actionStretchToScreen;
    QAction *actionResetTransform;
    QAction *actionCenterToScreen;
    QAction *actionVerticalCenter;
    QAction *actionHorizontalCenter;
    QAction *actionFlipHorizontal;
    QAction *actionFlipVertical;
    QAction *actionMoveUp;
    QAction *actionMoveDown;
    QAction *actionMoveToTop;
    QAction *actionMoveToBottom;
    QAction *actionCheckForUpdates;
    QAction *actionShowMacPermissions;
    QAction *actionRepair;
    QAction *actionInteract;
    QAction *actionAdvAudioProperties;
    QAction *actionWebsite;
    QAction *actionNewSceneCollection;
    QAction *actionDupSceneCollection;
    QAction *actionRenameSceneCollection;
    QAction *actionRemoveSceneCollection;
    QAction *actionImportSceneCollection;
    QAction *actionExportSceneCollection;
    QAction *actionShowMissingFiles;
    QAction *actionNewProfile;
    QAction *actionDupProfile;
    QAction *actionRenameProfile;
    QAction *actionRemoveProfile;
    QAction *actionImportProfile;
    QAction *actionExportProfile;
    QAction *actionShowSettingsFolder;
    QAction *actionShowProfileFolder;
    QAction *actionAlwaysOnTop;
    QAction *toggleListboxToolbars;
    QAction *toggleStatusBar;
    QAction *actionLockPreview;
    QAction *actionScaleWindow;
    QAction *actionScaleCanvas;
    QAction *actionScaleOutput;
    QAction *actionPasteDup;
    QAction *autoConfigure2;
    QAction *autoConfigure;
    QAction *stats;
    QAction *resetDocks;
    QAction *lockDocks;
    QAction *toggleScenes;
    QAction *toggleSources;
    QAction *toggleMixer;
    QAction *toggleTransitions;
    QAction *toggleControls;
    QAction *actionHelpPortal;
    QAction *actionShowCrashLogs;
    QAction *actionUploadLastCrashLog;
    QAction *actionDiscord;
    QAction *toggleStats;
    QAction *actionShowAbout;
    QAction *toggleSourceIcons;
    QAction *toggleContextToolbars;
    QAction *toggleContextBar;
    QAction *actionMainUndo;
    QAction *actionMainRedo;
    QAction *actionMixerToolbarAdvAudio;
    QAction *actionMixerToolbarMenu;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *previewLayout;
    QFrame *previewDisabledWidget;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *enablePreviewButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *previewTextLayout;
    QLabel *previewLabel;
    OBSBasicPreview *preview;
    QFrame *contextContainer;
    QHBoxLayout *horizontalLayout9;
    QFrame *contextSubContainer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *contextSourceIcon;
    QLabel *contextSourceLabel;
    QLabel *contextSourceIconSpacer;
    QFrame *line_3;
    QPushButton *sourcePropertiesButton;
    QPushButton *sourceFiltersButton;
    QPushButton *sourceInteractButton;
    QFrame *line;
    QFrame *emptySpace;
    QHBoxLayout *horizontalLayout_6;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuBasic_MainMenu_Help;
    QMenu *menuLogFiles;
    QMenu *menuCrashLogs;
    QMenu *menuBasic_MainMenu_Edit;
    QAction *actionCopySource;
    QAction *actionPasteRef;
    QAction *actionCopyFilters;
    QAction *actionPasteFilters;
    QMenu *transformMenu;
    QMenu *orderMenu;
    QMenu *scalingMenu;
    QMenu *profileMenu;
    QMenu *sceneCollectionMenu;
    QMenu *viewMenu;
    QAction *resetUI;
    QAction *actionFullscreenInterface;
    QMenu *menuTools;
    QMenu *menuDocks;
    OBSBasicStatusBar *statusbar;
    OBSDock *scenesDock;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
    QFrame *scenesFrame;
    QVBoxLayout *verticalLayout_12;
    SceneTree *scenes;
    QToolBar *scenesToolbar;
    QSpacerItem *scenesFixedSizeHSpacer;
    OBSDock *sourcesDock;
    QWidget *dockWidgetContents_6;
    QVBoxLayout *verticalLayout_5;
    QFrame *sourcesFrame;
    QVBoxLayout *verticalLayout_17;
    SourceTree *sources;
    QToolBar *sourcesToolbar;
    QSpacerItem *sourcesFixedSizeHSpacer;
    OBSDock *mixerDock;
    QWidget *dockWidgetContents_7;
    QVBoxLayout *verticalLayout_4;
    QFrame *mixerFrame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedMixerArea;
    VScrollArea *hMixerScrollArea;
    QWidget *hVolumeWidgets;
    QVBoxLayout *hVolControlLayout;
    HScrollArea *vMixerScrollArea;
    QWidget *vVolumeWidgets;
    QHBoxLayout *vVolControlLayout;
    QToolBar *mixerToolbar;
    OBSDock *transitionsDock;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_3;
    QFrame *transitionsFrame;
    QVBoxLayout *verticalLayout_8;
    QComboBox *transitions;
    QHBoxLayout *horizontalLayout_3;
    QLabel *transitionDurationLabel;
    QSpinBox *transitionDuration;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *transitionAdd;
    QPushButton *transitionRemove;
    QPushButton *transitionProps;
    QSpacerItem *verticalSpacer;
    OBSDock *controlsDock;
    QWidget *controlsDockContents;
    QVBoxLayout *buttonsVLayout;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *streamButton;
    QPushButton *broadcastButton;
    QHBoxLayout *recordingLayout;
    RecordButton *recordButton;
    QPushButton *modeSwitch;
    QPushButton *settingsButton;
    QPushButton *exitButton;
    QSpacerItem *expVSpacer;

    void setupUi(QMainWindow *OBSBasic)
    {
        if (OBSBasic->objectName().isEmpty())
            OBSBasic->setObjectName(QString::fromUtf8("OBSBasic"));
        OBSBasic->resize(1079, 729);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OBSBasic->sizePolicy().hasHeightForWidth());
        OBSBasic->setSizePolicy(sizePolicy);
        OBSBasic->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/obs.png"), QSize(), QIcon::Normal, QIcon::Off);
        OBSBasic->setWindowIcon(icon);
        OBSBasic->setStyleSheet(QString::fromUtf8(""));
        OBSBasic->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionAddScene = new QAction(OBSBasic);
        actionAddScene->setObjectName(QString::fromUtf8("actionAddScene"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/images/plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddScene->setIcon(icon1);
        actionAddScene->setProperty("themeID", QVariant(QString::fromUtf8("addIconSmall")));
        actionAddSource = new QAction(OBSBasic);
        actionAddSource->setObjectName(QString::fromUtf8("actionAddSource"));
        actionAddSource->setIcon(icon1);
        actionAddSource->setProperty("themeID", QVariant(QString::fromUtf8("addIconSmall")));
        actionRemoveScene = new QAction(OBSBasic);
        actionRemoveScene->setObjectName(QString::fromUtf8("actionRemoveScene"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/images/minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveScene->setIcon(icon2);
        actionRemoveScene->setShortcutContext(Qt::WidgetWithChildrenShortcut);
        actionRemoveScene->setProperty("themeID", QVariant(QString::fromUtf8("removeIconSmall")));
        actionRemoveSource = new QAction(OBSBasic);
        actionRemoveSource->setObjectName(QString::fromUtf8("actionRemoveSource"));
        actionRemoveSource->setIcon(icon2);
        actionRemoveSource->setShortcutContext(Qt::WidgetWithChildrenShortcut);
        actionRemoveSource->setProperty("themeID", QVariant(QString::fromUtf8("removeIconSmall")));
        actionSourceProperties = new QAction(OBSBasic);
        actionSourceProperties->setObjectName(QString::fromUtf8("actionSourceProperties"));
        actionSourceProperties->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/settings/images/settings/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSourceProperties->setIcon(icon3);
        actionSourceProperties->setProperty("themeID", QVariant(QString::fromUtf8("propertiesIconSmall")));
        actionSceneUp = new QAction(OBSBasic);
        actionSceneUp->setObjectName(QString::fromUtf8("actionSceneUp"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/images/up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneUp->setIcon(icon4);
        actionSceneUp->setProperty("themeID", QVariant(QString::fromUtf8("upArrowIconSmall")));
        actionSourceUp = new QAction(OBSBasic);
        actionSourceUp->setObjectName(QString::fromUtf8("actionSourceUp"));
        actionSourceUp->setEnabled(true);
        actionSourceUp->setIcon(icon4);
        actionSourceUp->setProperty("themeID", QVariant(QString::fromUtf8("upArrowIconSmall")));
        actionSceneDown = new QAction(OBSBasic);
        actionSceneDown->setObjectName(QString::fromUtf8("actionSceneDown"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/images/down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneDown->setIcon(icon5);
        actionSceneDown->setProperty("themeID", QVariant(QString::fromUtf8("downArrowIconSmall")));
        actionSourceDown = new QAction(OBSBasic);
        actionSourceDown->setObjectName(QString::fromUtf8("actionSourceDown"));
        actionSourceDown->setEnabled(true);
        actionSourceDown->setIcon(icon5);
        actionSourceDown->setProperty("themeID", QVariant(QString::fromUtf8("downArrowIconSmall")));
        actionShow_Recordings = new QAction(OBSBasic);
        actionShow_Recordings->setObjectName(QString::fromUtf8("actionShow_Recordings"));
        actionRemux = new QAction(OBSBasic);
        actionRemux->setObjectName(QString::fromUtf8("actionRemux"));
        action_Settings = new QAction(OBSBasic);
        action_Settings->setObjectName(QString::fromUtf8("action_Settings"));
        actionE_xit = new QAction(OBSBasic);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        actionShowLogs = new QAction(OBSBasic);
        actionShowLogs->setObjectName(QString::fromUtf8("actionShowLogs"));
        actionUploadLastLog = new QAction(OBSBasic);
        actionUploadLastLog->setObjectName(QString::fromUtf8("actionUploadLastLog"));
        actionUploadCurrentLog = new QAction(OBSBasic);
        actionUploadCurrentLog->setObjectName(QString::fromUtf8("actionUploadCurrentLog"));
        actionViewCurrentLog = new QAction(OBSBasic);
        actionViewCurrentLog->setObjectName(QString::fromUtf8("actionViewCurrentLog"));
        actionUndo = new QAction(OBSBasic);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionUndo->setEnabled(false);
        actionRedo = new QAction(OBSBasic);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionRedo->setEnabled(false);
        actionEditTransform = new QAction(OBSBasic);
        actionEditTransform->setObjectName(QString::fromUtf8("actionEditTransform"));
        actionCopyTransform = new QAction(OBSBasic);
        actionCopyTransform->setObjectName(QString::fromUtf8("actionCopyTransform"));
        actionPasteTransform = new QAction(OBSBasic);
        actionPasteTransform->setObjectName(QString::fromUtf8("actionPasteTransform"));
        actionPasteTransform->setEnabled(false);
        actionRotate90CW = new QAction(OBSBasic);
        actionRotate90CW->setObjectName(QString::fromUtf8("actionRotate90CW"));
        actionRotate90CCW = new QAction(OBSBasic);
        actionRotate90CCW->setObjectName(QString::fromUtf8("actionRotate90CCW"));
        actionRotate180 = new QAction(OBSBasic);
        actionRotate180->setObjectName(QString::fromUtf8("actionRotate180"));
        actionFitToScreen = new QAction(OBSBasic);
        actionFitToScreen->setObjectName(QString::fromUtf8("actionFitToScreen"));
        actionStretchToScreen = new QAction(OBSBasic);
        actionStretchToScreen->setObjectName(QString::fromUtf8("actionStretchToScreen"));
        actionResetTransform = new QAction(OBSBasic);
        actionResetTransform->setObjectName(QString::fromUtf8("actionResetTransform"));
        actionCenterToScreen = new QAction(OBSBasic);
        actionCenterToScreen->setObjectName(QString::fromUtf8("actionCenterToScreen"));
        actionVerticalCenter = new QAction(OBSBasic);
        actionVerticalCenter->setObjectName(QString::fromUtf8("actionVerticalCenter"));
        actionHorizontalCenter = new QAction(OBSBasic);
        actionHorizontalCenter->setObjectName(QString::fromUtf8("actionHorizontalCenter"));
        actionFlipHorizontal = new QAction(OBSBasic);
        actionFlipHorizontal->setObjectName(QString::fromUtf8("actionFlipHorizontal"));
        actionFlipVertical = new QAction(OBSBasic);
        actionFlipVertical->setObjectName(QString::fromUtf8("actionFlipVertical"));
        actionMoveUp = new QAction(OBSBasic);
        actionMoveUp->setObjectName(QString::fromUtf8("actionMoveUp"));
        actionMoveDown = new QAction(OBSBasic);
        actionMoveDown->setObjectName(QString::fromUtf8("actionMoveDown"));
        actionMoveToTop = new QAction(OBSBasic);
        actionMoveToTop->setObjectName(QString::fromUtf8("actionMoveToTop"));
        actionMoveToBottom = new QAction(OBSBasic);
        actionMoveToBottom->setObjectName(QString::fromUtf8("actionMoveToBottom"));
        actionCheckForUpdates = new QAction(OBSBasic);
        actionCheckForUpdates->setObjectName(QString::fromUtf8("actionCheckForUpdates"));
        actionShowMacPermissions = new QAction(OBSBasic);
        actionShowMacPermissions->setObjectName(QString::fromUtf8("actionShowMacPermissions"));
        actionRepair = new QAction(OBSBasic);
        actionRepair->setObjectName(QString::fromUtf8("actionRepair"));
        actionInteract = new QAction(OBSBasic);
        actionInteract->setObjectName(QString::fromUtf8("actionInteract"));
        actionAdvAudioProperties = new QAction(OBSBasic);
        actionAdvAudioProperties->setObjectName(QString::fromUtf8("actionAdvAudioProperties"));
        actionWebsite = new QAction(OBSBasic);
        actionWebsite->setObjectName(QString::fromUtf8("actionWebsite"));
        actionNewSceneCollection = new QAction(OBSBasic);
        actionNewSceneCollection->setObjectName(QString::fromUtf8("actionNewSceneCollection"));
        actionDupSceneCollection = new QAction(OBSBasic);
        actionDupSceneCollection->setObjectName(QString::fromUtf8("actionDupSceneCollection"));
        actionRenameSceneCollection = new QAction(OBSBasic);
        actionRenameSceneCollection->setObjectName(QString::fromUtf8("actionRenameSceneCollection"));
        actionRemoveSceneCollection = new QAction(OBSBasic);
        actionRemoveSceneCollection->setObjectName(QString::fromUtf8("actionRemoveSceneCollection"));
        actionImportSceneCollection = new QAction(OBSBasic);
        actionImportSceneCollection->setObjectName(QString::fromUtf8("actionImportSceneCollection"));
        actionExportSceneCollection = new QAction(OBSBasic);
        actionExportSceneCollection->setObjectName(QString::fromUtf8("actionExportSceneCollection"));
        actionShowMissingFiles = new QAction(OBSBasic);
        actionShowMissingFiles->setObjectName(QString::fromUtf8("actionShowMissingFiles"));
        actionNewProfile = new QAction(OBSBasic);
        actionNewProfile->setObjectName(QString::fromUtf8("actionNewProfile"));
        actionDupProfile = new QAction(OBSBasic);
        actionDupProfile->setObjectName(QString::fromUtf8("actionDupProfile"));
        actionRenameProfile = new QAction(OBSBasic);
        actionRenameProfile->setObjectName(QString::fromUtf8("actionRenameProfile"));
        actionRemoveProfile = new QAction(OBSBasic);
        actionRemoveProfile->setObjectName(QString::fromUtf8("actionRemoveProfile"));
        actionImportProfile = new QAction(OBSBasic);
        actionImportProfile->setObjectName(QString::fromUtf8("actionImportProfile"));
        actionExportProfile = new QAction(OBSBasic);
        actionExportProfile->setObjectName(QString::fromUtf8("actionExportProfile"));
        actionShowSettingsFolder = new QAction(OBSBasic);
        actionShowSettingsFolder->setObjectName(QString::fromUtf8("actionShowSettingsFolder"));
        actionShowProfileFolder = new QAction(OBSBasic);
        actionShowProfileFolder->setObjectName(QString::fromUtf8("actionShowProfileFolder"));
        actionAlwaysOnTop = new QAction(OBSBasic);
        actionAlwaysOnTop->setObjectName(QString::fromUtf8("actionAlwaysOnTop"));
        actionAlwaysOnTop->setCheckable(true);
        toggleListboxToolbars = new QAction(OBSBasic);
        toggleListboxToolbars->setObjectName(QString::fromUtf8("toggleListboxToolbars"));
        toggleListboxToolbars->setCheckable(true);
        toggleListboxToolbars->setChecked(true);
        toggleStatusBar = new QAction(OBSBasic);
        toggleStatusBar->setObjectName(QString::fromUtf8("toggleStatusBar"));
        toggleStatusBar->setCheckable(true);
        toggleStatusBar->setChecked(true);
        actionLockPreview = new QAction(OBSBasic);
        actionLockPreview->setObjectName(QString::fromUtf8("actionLockPreview"));
        actionLockPreview->setCheckable(true);
        actionScaleWindow = new QAction(OBSBasic);
        actionScaleWindow->setObjectName(QString::fromUtf8("actionScaleWindow"));
        actionScaleWindow->setCheckable(true);
        actionScaleCanvas = new QAction(OBSBasic);
        actionScaleCanvas->setObjectName(QString::fromUtf8("actionScaleCanvas"));
        actionScaleCanvas->setCheckable(true);
        actionScaleOutput = new QAction(OBSBasic);
        actionScaleOutput->setObjectName(QString::fromUtf8("actionScaleOutput"));
        actionScaleOutput->setCheckable(true);
        actionPasteDup = new QAction(OBSBasic);
        actionPasteDup->setObjectName(QString::fromUtf8("actionPasteDup"));
        autoConfigure2 = new QAction(OBSBasic);
        autoConfigure2->setObjectName(QString::fromUtf8("autoConfigure2"));
        autoConfigure = new QAction(OBSBasic);
        autoConfigure->setObjectName(QString::fromUtf8("autoConfigure"));
        stats = new QAction(OBSBasic);
        stats->setObjectName(QString::fromUtf8("stats"));
        resetDocks = new QAction(OBSBasic);
        resetDocks->setObjectName(QString::fromUtf8("resetDocks"));
        lockDocks = new QAction(OBSBasic);
        lockDocks->setObjectName(QString::fromUtf8("lockDocks"));
        lockDocks->setCheckable(true);
        lockDocks->setChecked(true);
        toggleScenes = new QAction(OBSBasic);
        toggleScenes->setObjectName(QString::fromUtf8("toggleScenes"));
        toggleScenes->setCheckable(true);
        toggleScenes->setChecked(true);
        toggleSources = new QAction(OBSBasic);
        toggleSources->setObjectName(QString::fromUtf8("toggleSources"));
        toggleSources->setCheckable(true);
        toggleSources->setChecked(true);
        toggleMixer = new QAction(OBSBasic);
        toggleMixer->setObjectName(QString::fromUtf8("toggleMixer"));
        toggleMixer->setCheckable(true);
        toggleMixer->setChecked(true);
        toggleTransitions = new QAction(OBSBasic);
        toggleTransitions->setObjectName(QString::fromUtf8("toggleTransitions"));
        toggleTransitions->setCheckable(true);
        toggleTransitions->setChecked(true);
        toggleControls = new QAction(OBSBasic);
        toggleControls->setObjectName(QString::fromUtf8("toggleControls"));
        toggleControls->setCheckable(true);
        toggleControls->setChecked(true);
        actionHelpPortal = new QAction(OBSBasic);
        actionHelpPortal->setObjectName(QString::fromUtf8("actionHelpPortal"));
        actionShowCrashLogs = new QAction(OBSBasic);
        actionShowCrashLogs->setObjectName(QString::fromUtf8("actionShowCrashLogs"));
        actionUploadLastCrashLog = new QAction(OBSBasic);
        actionUploadLastCrashLog->setObjectName(QString::fromUtf8("actionUploadLastCrashLog"));
        actionDiscord = new QAction(OBSBasic);
        actionDiscord->setObjectName(QString::fromUtf8("actionDiscord"));
        toggleStats = new QAction(OBSBasic);
        toggleStats->setObjectName(QString::fromUtf8("toggleStats"));
        toggleStats->setCheckable(true);
        toggleStats->setChecked(true);
        actionShowAbout = new QAction(OBSBasic);
        actionShowAbout->setObjectName(QString::fromUtf8("actionShowAbout"));
        toggleSourceIcons = new QAction(OBSBasic);
        toggleSourceIcons->setObjectName(QString::fromUtf8("toggleSourceIcons"));
        toggleSourceIcons->setCheckable(true);
        toggleSourceIcons->setChecked(true);
        toggleContextToolbars = new QAction(OBSBasic);
        toggleContextToolbars->setObjectName(QString::fromUtf8("toggleContextToolbars"));
        toggleContextToolbars->setCheckable(true);
        toggleContextBar = new QAction(OBSBasic);
        toggleContextBar->setObjectName(QString::fromUtf8("toggleContextBar"));
        toggleContextBar->setCheckable(true);
        toggleContextBar->setChecked(true);
        actionMainUndo = new QAction(OBSBasic);
        actionMainUndo->setObjectName(QString::fromUtf8("actionMainUndo"));
        actionMainUndo->setEnabled(false);
        actionMainRedo = new QAction(OBSBasic);
        actionMainRedo->setObjectName(QString::fromUtf8("actionMainRedo"));
        actionMainRedo->setEnabled(false);
        actionMixerToolbarAdvAudio = new QAction(OBSBasic);
        actionMixerToolbarAdvAudio->setObjectName(QString::fromUtf8("actionMixerToolbarAdvAudio"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/settings/images/settings/advanced.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMixerToolbarAdvAudio->setIcon(icon6);
        actionMixerToolbarMenu = new QAction(OBSBasic);
        actionMixerToolbarMenu->setObjectName(QString::fromUtf8("actionMixerToolbarMenu"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/res/images/dots-vert.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMixerToolbarMenu->setIcon(icon7);
        centralwidget = new QWidget(OBSBasic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 0, 4, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        previewLayout = new QHBoxLayout();
        previewLayout->setSpacing(2);
        previewLayout->setObjectName(QString::fromUtf8("previewLayout"));
        previewDisabledWidget = new QFrame(centralwidget);
        previewDisabledWidget->setObjectName(QString::fromUtf8("previewDisabledWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(previewDisabledWidget->sizePolicy().hasHeightForWidth());
        previewDisabledWidget->setSizePolicy(sizePolicy1);
        verticalLayout_7 = new QVBoxLayout(previewDisabledWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        label = new QLabel(previewDisabledWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        enablePreviewButton = new QPushButton(previewDisabledWidget);
        enablePreviewButton->setObjectName(QString::fromUtf8("enablePreviewButton"));

        horizontalLayout->addWidget(enablePreviewButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        previewLayout->addWidget(previewDisabledWidget);

        previewTextLayout = new QVBoxLayout();
        previewTextLayout->setSpacing(0);
        previewTextLayout->setObjectName(QString::fromUtf8("previewTextLayout"));
        previewLabel = new QLabel(centralwidget);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(previewLabel->sizePolicy().hasHeightForWidth());
        previewLabel->setSizePolicy(sizePolicy3);
        previewLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        previewTextLayout->addWidget(previewLabel);

        preview = new OBSBasicPreview(centralwidget);
        preview->setObjectName(QString::fromUtf8("preview"));
        sizePolicy1.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy1);
        preview->setMinimumSize(QSize(32, 32));
        preview->setFocusPolicy(Qt::ClickFocus);
        preview->setContextMenuPolicy(Qt::CustomContextMenu);

        previewTextLayout->addWidget(preview);


        previewLayout->addLayout(previewTextLayout);


        horizontalLayout_2->addLayout(previewLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        contextContainer = new QFrame(centralwidget);
        contextContainer->setObjectName(QString::fromUtf8("contextContainer"));
        sizePolicy2.setHeightForWidth(contextContainer->sizePolicy().hasHeightForWidth());
        contextContainer->setSizePolicy(sizePolicy2);
        contextContainer->setMinimumSize(QSize(0, 30));
        horizontalLayout9 = new QHBoxLayout(contextContainer);
        horizontalLayout9->setSpacing(6);
        horizontalLayout9->setObjectName(QString::fromUtf8("horizontalLayout9"));
        horizontalLayout9->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout9->setContentsMargins(6, 4, 6, 4);
        contextSubContainer = new QFrame(contextContainer);
        contextSubContainer->setObjectName(QString::fromUtf8("contextSubContainer"));
        sizePolicy2.setHeightForWidth(contextSubContainer->sizePolicy().hasHeightForWidth());
        contextSubContainer->setSizePolicy(sizePolicy2);
        contextSubContainer->setMinimumSize(QSize(0, 0));
        horizontalLayout_5 = new QHBoxLayout(contextSubContainer);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        contextSourceIcon = new QLabel(contextSubContainer);
        contextSourceIcon->setObjectName(QString::fromUtf8("contextSourceIcon"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(contextSourceIcon->sizePolicy().hasHeightForWidth());
        contextSourceIcon->setSizePolicy(sizePolicy4);
        contextSourceIcon->setMinimumSize(QSize(22, 22));
        contextSourceIcon->setMaximumSize(QSize(22, 22));

        horizontalLayout_5->addWidget(contextSourceIcon);

        contextSourceLabel = new QLabel(contextSubContainer);
        contextSourceLabel->setObjectName(QString::fromUtf8("contextSourceLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(contextSourceLabel->sizePolicy().hasHeightForWidth());
        contextSourceLabel->setSizePolicy(sizePolicy5);
        contextSourceLabel->setMinimumSize(QSize(160, 22));
        contextSourceLabel->setMaximumSize(QSize(160, 22));

        horizontalLayout_5->addWidget(contextSourceLabel);

        contextSourceIconSpacer = new QLabel(contextSubContainer);
        contextSourceIconSpacer->setObjectName(QString::fromUtf8("contextSourceIconSpacer"));
        sizePolicy4.setHeightForWidth(contextSourceIconSpacer->sizePolicy().hasHeightForWidth());
        contextSourceIconSpacer->setSizePolicy(sizePolicy4);
        contextSourceIconSpacer->setMinimumSize(QSize(22, 22));
        contextSourceIconSpacer->setMaximumSize(QSize(22, 22));

        horizontalLayout_5->addWidget(contextSourceIconSpacer);

        line_3 = new QFrame(contextSubContainer);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_3);

        sourcePropertiesButton = new QPushButton(contextSubContainer);
        sourcePropertiesButton->setObjectName(QString::fromUtf8("sourcePropertiesButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(sourcePropertiesButton->sizePolicy().hasHeightForWidth());
        sourcePropertiesButton->setSizePolicy(sizePolicy6);
        sourcePropertiesButton->setMinimumSize(QSize(0, 22));
        sourcePropertiesButton->setIcon(icon3);
        sourcePropertiesButton->setFlat(false);
        sourcePropertiesButton->setProperty("themeID2", QVariant(QString::fromUtf8("contextBarButton")));

        horizontalLayout_5->addWidget(sourcePropertiesButton);

        sourceFiltersButton = new QPushButton(contextSubContainer);
        sourceFiltersButton->setObjectName(QString::fromUtf8("sourceFiltersButton"));
        sourceFiltersButton->setMinimumSize(QSize(0, 22));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/res/images/filter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        sourceFiltersButton->setIcon(icon8);
        sourceFiltersButton->setFlat(false);
        sourceFiltersButton->setProperty("themeID2", QVariant(QString::fromUtf8("contextBarButton")));

        horizontalLayout_5->addWidget(sourceFiltersButton);

        sourceInteractButton = new QPushButton(contextSubContainer);
        sourceInteractButton->setObjectName(QString::fromUtf8("sourceInteractButton"));
        sourceInteractButton->setMinimumSize(QSize(0, 22));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/res/images/interact.svg"), QSize(), QIcon::Normal, QIcon::Off);
        sourceInteractButton->setIcon(icon9);
        sourceInteractButton->setFlat(false);
        sourceInteractButton->setProperty("themeID2", QVariant(QString::fromUtf8("contextBarButton")));

        horizontalLayout_5->addWidget(sourceInteractButton);

        line = new QFrame(contextSubContainer);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line);


        horizontalLayout9->addWidget(contextSubContainer);

        emptySpace = new QFrame(contextContainer);
        emptySpace->setObjectName(QString::fromUtf8("emptySpace"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(emptySpace->sizePolicy().hasHeightForWidth());
        emptySpace->setSizePolicy(sizePolicy7);
        emptySpace->setMinimumSize(QSize(0, 22));
        horizontalLayout_6 = new QHBoxLayout(emptySpace);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);

        horizontalLayout9->addWidget(emptySpace);


        verticalLayout->addWidget(contextContainer);

        OBSBasic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OBSBasic);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1079, 21));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuBasic_MainMenu_Help = new QMenu(menubar);
        menuBasic_MainMenu_Help->setObjectName(QString::fromUtf8("menuBasic_MainMenu_Help"));
        menuLogFiles = new QMenu(menuBasic_MainMenu_Help);
        menuLogFiles->setObjectName(QString::fromUtf8("menuLogFiles"));
        menuCrashLogs = new QMenu(menuBasic_MainMenu_Help);
        menuCrashLogs->setObjectName(QString::fromUtf8("menuCrashLogs"));
        menuBasic_MainMenu_Edit = new QMenu(menubar);
        menuBasic_MainMenu_Edit->setObjectName(QString::fromUtf8("menuBasic_MainMenu_Edit"));
        actionCopySource = new QAction(menuBasic_MainMenu_Edit);
        actionCopySource->setObjectName(QString::fromUtf8("actionCopySource"));
        actionPasteRef = new QAction(menuBasic_MainMenu_Edit);
        actionPasteRef->setObjectName(QString::fromUtf8("actionPasteRef"));
        actionPasteRef->setEnabled(false);
        actionCopyFilters = new QAction(menuBasic_MainMenu_Edit);
        actionCopyFilters->setObjectName(QString::fromUtf8("actionCopyFilters"));
        actionPasteFilters = new QAction(menuBasic_MainMenu_Edit);
        actionPasteFilters->setObjectName(QString::fromUtf8("actionPasteFilters"));
        actionPasteFilters->setEnabled(false);
        transformMenu = new QMenu(menuBasic_MainMenu_Edit);
        transformMenu->setObjectName(QString::fromUtf8("transformMenu"));
        orderMenu = new QMenu(menuBasic_MainMenu_Edit);
        orderMenu->setObjectName(QString::fromUtf8("orderMenu"));
        scalingMenu = new QMenu(menuBasic_MainMenu_Edit);
        scalingMenu->setObjectName(QString::fromUtf8("scalingMenu"));
        profileMenu = new QMenu(menubar);
        profileMenu->setObjectName(QString::fromUtf8("profileMenu"));
        sceneCollectionMenu = new QMenu(menubar);
        sceneCollectionMenu->setObjectName(QString::fromUtf8("sceneCollectionMenu"));
        viewMenu = new QMenu(menubar);
        viewMenu->setObjectName(QString::fromUtf8("viewMenu"));
        resetUI = new QAction(viewMenu);
        resetUI->setObjectName(QString::fromUtf8("resetUI"));
        actionFullscreenInterface = new QAction(viewMenu);
        actionFullscreenInterface->setObjectName(QString::fromUtf8("actionFullscreenInterface"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuDocks = new QMenu(menubar);
        menuDocks->setObjectName(QString::fromUtf8("menuDocks"));
        OBSBasic->setMenuBar(menubar);
        statusbar = new OBSBasicStatusBar(OBSBasic);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        OBSBasic->setStatusBar(statusbar);
        scenesDock = new OBSDock(OBSBasic);
        scenesDock->setObjectName(QString::fromUtf8("scenesDock"));
        scenesDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scenesFrame = new QFrame(dockWidgetContents_2);
        scenesFrame->setObjectName(QString::fromUtf8("scenesFrame"));
        sizePolicy1.setHeightForWidth(scenesFrame->sizePolicy().hasHeightForWidth());
        scenesFrame->setSizePolicy(sizePolicy1);
        scenesFrame->setMinimumSize(QSize(160, 0));
        scenesFrame->setFrameShape(QFrame::StyledPanel);
        scenesFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_12 = new QVBoxLayout(scenesFrame);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        scenes = new SceneTree(scenesFrame);
        scenes->setObjectName(QString::fromUtf8("scenes"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(scenes->sizePolicy().hasHeightForWidth());
        scenes->setSizePolicy(sizePolicy8);
        scenes->setSpacing(1);
        scenes->setContextMenuPolicy(Qt::CustomContextMenu);
        scenes->setFrameShape(QFrame::NoFrame);
        scenes->setFrameShadow(QFrame::Plain);
        scenes->setProperty("showDropIndicator", QVariant(true));
        scenes->setDragEnabled(true);
        scenes->setDragDropMode(QAbstractItemView::InternalMove);
        scenes->setDefaultDropAction(Qt::TargetMoveAction);

        verticalLayout_12->addWidget(scenes);

        scenesToolbar = new QToolBar(scenesFrame);
        scenesToolbar->setObjectName(QString::fromUtf8("scenesToolbar"));
        scenesToolbar->setIconSize(QSize(16, 16));
        scenesToolbar->setFloatable(false);

        verticalLayout_12->addWidget(scenesToolbar);

        scenesFixedSizeHSpacer = new QSpacerItem(150, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_12->addItem(scenesFixedSizeHSpacer);


        verticalLayout_6->addWidget(scenesFrame);

        scenesDock->setWidget(dockWidgetContents_2);
        OBSBasic->addDockWidget(Qt::BottomDockWidgetArea, scenesDock);
        sourcesDock = new OBSDock(OBSBasic);
        sourcesDock->setObjectName(QString::fromUtf8("sourcesDock"));
        sourcesDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable);
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QString::fromUtf8("dockWidgetContents_6"));
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents_6);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        sourcesFrame = new QFrame(dockWidgetContents_6);
        sourcesFrame->setObjectName(QString::fromUtf8("sourcesFrame"));
        sizePolicy1.setHeightForWidth(sourcesFrame->sizePolicy().hasHeightForWidth());
        sourcesFrame->setSizePolicy(sizePolicy1);
        sourcesFrame->setMinimumSize(QSize(160, 0));
        sourcesFrame->setFrameShape(QFrame::StyledPanel);
        sourcesFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_17 = new QVBoxLayout(sourcesFrame);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        sources = new SourceTree(sourcesFrame);
        sources->setObjectName(QString::fromUtf8("sources"));
        sizePolicy8.setHeightForWidth(sources->sizePolicy().hasHeightForWidth());
        sources->setSizePolicy(sizePolicy8);
        sources->setSpacing(1);
        sources->setContextMenuPolicy(Qt::CustomContextMenu);
        sources->setFrameShape(QFrame::NoFrame);
        sources->setProperty("showDropIndicator", QVariant(true));
        sources->setDragEnabled(true);
        sources->setDragDropMode(QAbstractItemView::InternalMove);
        sources->setDefaultDropAction(Qt::TargetMoveAction);
        sources->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_17->addWidget(sources);

        sourcesToolbar = new QToolBar(sourcesFrame);
        sourcesToolbar->setObjectName(QString::fromUtf8("sourcesToolbar"));
        sourcesToolbar->setIconSize(QSize(16, 16));
        sourcesToolbar->setFloatable(false);

        verticalLayout_17->addWidget(sourcesToolbar);

        sourcesFixedSizeHSpacer = new QSpacerItem(150, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_17->addItem(sourcesFixedSizeHSpacer);


        verticalLayout_5->addWidget(sourcesFrame);

        sourcesDock->setWidget(dockWidgetContents_6);
        OBSBasic->addDockWidget(Qt::BottomDockWidgetArea, sourcesDock);
        mixerDock = new OBSDock(OBSBasic);
        mixerDock->setObjectName(QString::fromUtf8("mixerDock"));
        mixerDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable);
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QString::fromUtf8("dockWidgetContents_7"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents_7);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mixerFrame = new QFrame(dockWidgetContents_7);
        mixerFrame->setObjectName(QString::fromUtf8("mixerFrame"));
        mixerFrame->setFrameShape(QFrame::StyledPanel);
        mixerFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(mixerFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedMixerArea = new QStackedWidget(mixerFrame);
        stackedMixerArea->setObjectName(QString::fromUtf8("stackedMixerArea"));
        hMixerScrollArea = new VScrollArea();
        hMixerScrollArea->setObjectName(QString::fromUtf8("hMixerScrollArea"));
        hMixerScrollArea->setContextMenuPolicy(Qt::CustomContextMenu);
        hMixerScrollArea->setFrameShape(QFrame::StyledPanel);
        hMixerScrollArea->setFrameShadow(QFrame::Sunken);
        hMixerScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        hMixerScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hMixerScrollArea->setWidgetResizable(true);
        hVolumeWidgets = new QWidget();
        hVolumeWidgets->setObjectName(QString::fromUtf8("hVolumeWidgets"));
        hVolumeWidgets->setGeometry(QRect(0, 0, 74, 16));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(hVolumeWidgets->sizePolicy().hasHeightForWidth());
        hVolumeWidgets->setSizePolicy(sizePolicy9);
        hVolControlLayout = new QVBoxLayout(hVolumeWidgets);
        hVolControlLayout->setSpacing(0);
        hVolControlLayout->setObjectName(QString::fromUtf8("hVolControlLayout"));
        hVolControlLayout->setContentsMargins(0, 0, 0, 0);
        hMixerScrollArea->setWidget(hVolumeWidgets);
        stackedMixerArea->addWidget(hMixerScrollArea);
        vMixerScrollArea = new HScrollArea();
        vMixerScrollArea->setObjectName(QString::fromUtf8("vMixerScrollArea"));
        vMixerScrollArea->setContextMenuPolicy(Qt::CustomContextMenu);
        vMixerScrollArea->setFrameShape(QFrame::StyledPanel);
        vMixerScrollArea->setFrameShadow(QFrame::Sunken);
        vMixerScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        vMixerScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        vMixerScrollArea->setWidgetResizable(true);
        vVolumeWidgets = new QWidget();
        vVolumeWidgets->setObjectName(QString::fromUtf8("vVolumeWidgets"));
        vVolumeWidgets->setGeometry(QRect(0, 0, 16, 28));
        QSizePolicy sizePolicy10(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(vVolumeWidgets->sizePolicy().hasHeightForWidth());
        vVolumeWidgets->setSizePolicy(sizePolicy10);
        vVolControlLayout = new QHBoxLayout(vVolumeWidgets);
        vVolControlLayout->setSpacing(0);
        vVolControlLayout->setObjectName(QString::fromUtf8("vVolControlLayout"));
        vVolControlLayout->setContentsMargins(0, 0, 0, 0);
        vMixerScrollArea->setWidget(vVolumeWidgets);
        stackedMixerArea->addWidget(vMixerScrollArea);

        verticalLayout_2->addWidget(stackedMixerArea);

        mixerToolbar = new QToolBar(mixerFrame);
        mixerToolbar->setObjectName(QString::fromUtf8("mixerToolbar"));
        mixerToolbar->setIconSize(QSize(16, 16));
        mixerToolbar->setFloatable(false);

        verticalLayout_2->addWidget(mixerToolbar);


        verticalLayout_4->addWidget(mixerFrame);

        mixerDock->setWidget(dockWidgetContents_7);
        OBSBasic->addDockWidget(Qt::BottomDockWidgetArea, mixerDock);
        transitionsDock = new OBSDock(OBSBasic);
        transitionsDock->setObjectName(QString::fromUtf8("transitionsDock"));
        transitionsDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        transitionsFrame = new QFrame(dockWidgetContents_5);
        transitionsFrame->setObjectName(QString::fromUtf8("transitionsFrame"));
        transitionsFrame->setFrameShape(QFrame::StyledPanel);
        transitionsFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_8 = new QVBoxLayout(transitionsFrame);
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(4, 4, 4, 4);
        transitions = new QComboBox(transitionsFrame);
        transitions->setObjectName(QString::fromUtf8("transitions"));
        transitions->setMinimumSize(QSize(120, 0));

        verticalLayout_8->addWidget(transitions);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        transitionDurationLabel = new QLabel(transitionsFrame);
        transitionDurationLabel->setObjectName(QString::fromUtf8("transitionDurationLabel"));
        sizePolicy10.setHeightForWidth(transitionDurationLabel->sizePolicy().hasHeightForWidth());
        transitionDurationLabel->setSizePolicy(sizePolicy10);

        horizontalLayout_3->addWidget(transitionDurationLabel);

        transitionDuration = new QSpinBox(transitionsFrame);
        transitionDuration->setObjectName(QString::fromUtf8("transitionDuration"));
        transitionDuration->setMinimum(50);
        transitionDuration->setMaximum(20000);
        transitionDuration->setSingleStep(50);
        transitionDuration->setValue(300);

        horizontalLayout_3->addWidget(transitionDuration);


        verticalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        transitionAdd = new QPushButton(transitionsFrame);
        transitionAdd->setObjectName(QString::fromUtf8("transitionAdd"));
        QSizePolicy sizePolicy11(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(transitionAdd->sizePolicy().hasHeightForWidth());
        transitionAdd->setSizePolicy(sizePolicy11);
        transitionAdd->setText(QString::fromUtf8(""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/res/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        transitionAdd->setIcon(icon10);
        transitionAdd->setFlat(false);
        transitionAdd->setProperty("themeID", QVariant(QString::fromUtf8("addIconSmall")));
        transitionAdd->setProperty("toolButton", QVariant(true));

        horizontalLayout_4->addWidget(transitionAdd);

        transitionRemove = new QPushButton(transitionsFrame);
        transitionRemove->setObjectName(QString::fromUtf8("transitionRemove"));
        sizePolicy11.setHeightForWidth(transitionRemove->sizePolicy().hasHeightForWidth());
        transitionRemove->setSizePolicy(sizePolicy11);
        transitionRemove->setText(QString::fromUtf8(""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/res/images/list_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        transitionRemove->setIcon(icon11);
        transitionRemove->setFlat(false);
        transitionRemove->setProperty("themeID", QVariant(QString::fromUtf8("removeIconSmall")));
        transitionRemove->setProperty("toolButton", QVariant(true));

        horizontalLayout_4->addWidget(transitionRemove);

        transitionProps = new QPushButton(transitionsFrame);
        transitionProps->setObjectName(QString::fromUtf8("transitionProps"));
        sizePolicy11.setHeightForWidth(transitionProps->sizePolicy().hasHeightForWidth());
        transitionProps->setSizePolicy(sizePolicy11);
        transitionProps->setText(QString::fromUtf8(""));
        transitionProps->setIcon(icon3);
        transitionProps->setFlat(false);
        transitionProps->setProperty("themeID", QVariant(QString::fromUtf8("menuIconSmall")));
        transitionProps->setProperty("toolButton", QVariant(QString::fromUtf8("true")));

        horizontalLayout_4->addWidget(transitionProps);


        verticalLayout_8->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);


        verticalLayout_3->addWidget(transitionsFrame);

        transitionsDock->setWidget(dockWidgetContents_5);
        OBSBasic->addDockWidget(Qt::BottomDockWidgetArea, transitionsDock);
        controlsDock = new OBSDock(OBSBasic);
        controlsDock->setObjectName(QString::fromUtf8("controlsDock"));
        controlsDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable);
        controlsDockContents = new QWidget();
        controlsDockContents->setObjectName(QString::fromUtf8("controlsDockContents"));
        buttonsVLayout = new QVBoxLayout(controlsDockContents);
        buttonsVLayout->setSpacing(2);
        buttonsVLayout->setObjectName(QString::fromUtf8("buttonsVLayout"));
        buttonsVLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        streamButton = new QPushButton(controlsDockContents);
        streamButton->setObjectName(QString::fromUtf8("streamButton"));
        streamButton->setEnabled(true);
        QSizePolicy sizePolicy12(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(streamButton->sizePolicy().hasHeightForWidth());
        streamButton->setSizePolicy(sizePolicy12);
        streamButton->setMinimumSize(QSize(150, 0));
        streamButton->setCheckable(true);

        horizontalLayout_7->addWidget(streamButton);

        broadcastButton = new QPushButton(controlsDockContents);
        broadcastButton->setObjectName(QString::fromUtf8("broadcastButton"));
        broadcastButton->setEnabled(true);
        sizePolicy12.setHeightForWidth(broadcastButton->sizePolicy().hasHeightForWidth());
        broadcastButton->setSizePolicy(sizePolicy12);
        broadcastButton->setMinimumSize(QSize(150, 0));
        broadcastButton->setCheckable(true);

        horizontalLayout_7->addWidget(broadcastButton);


        buttonsVLayout->addLayout(horizontalLayout_7);

        recordingLayout = new QHBoxLayout();
        recordingLayout->setSpacing(2);
        recordingLayout->setObjectName(QString::fromUtf8("recordingLayout"));
        recordingLayout->setContentsMargins(0, 0, 0, 0);
        recordButton = new RecordButton(controlsDockContents);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));
        recordButton->setEnabled(true);
        sizePolicy12.setHeightForWidth(recordButton->sizePolicy().hasHeightForWidth());
        recordButton->setSizePolicy(sizePolicy12);
        recordButton->setMinimumSize(QSize(0, 0));
        recordButton->setCheckable(true);

        recordingLayout->addWidget(recordButton);


        buttonsVLayout->addLayout(recordingLayout);

        modeSwitch = new QPushButton(controlsDockContents);
        modeSwitch->setObjectName(QString::fromUtf8("modeSwitch"));
        sizePolicy12.setHeightForWidth(modeSwitch->sizePolicy().hasHeightForWidth());
        modeSwitch->setSizePolicy(sizePolicy12);
        modeSwitch->setMinimumSize(QSize(150, 0));
        modeSwitch->setCheckable(true);

        buttonsVLayout->addWidget(modeSwitch);

        settingsButton = new QPushButton(controlsDockContents);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        sizePolicy12.setHeightForWidth(settingsButton->sizePolicy().hasHeightForWidth());
        settingsButton->setSizePolicy(sizePolicy12);
        settingsButton->setMinimumSize(QSize(150, 0));

        buttonsVLayout->addWidget(settingsButton);

        exitButton = new QPushButton(controlsDockContents);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        sizePolicy12.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy12);
        exitButton->setMinimumSize(QSize(150, 0));

        buttonsVLayout->addWidget(exitButton);

        expVSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        buttonsVLayout->addItem(expVSpacer);

        controlsDock->setWidget(controlsDockContents);
        OBSBasic->addDockWidget(Qt::BottomDockWidgetArea, controlsDock);
#if QT_CONFIG(shortcut)
        transitionDurationLabel->setBuddy(transitionDuration);
#endif // QT_CONFIG(shortcut)

        preview->addAction(actionRemoveSource);
        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuBasic_MainMenu_Edit->menuAction());
        menubar->addAction(viewMenu->menuAction());
        menubar->addAction(menuDocks->menuAction());
        menubar->addAction(profileMenu->menuAction());
        menubar->addAction(sceneCollectionMenu->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuBasic_MainMenu_Help->menuAction());
        menu_File->addAction(actionShow_Recordings);
        menu_File->addAction(actionRemux);
        menu_File->addSeparator();
        menu_File->addAction(action_Settings);
        menu_File->addAction(actionShowSettingsFolder);
        menu_File->addAction(actionShowProfileFolder);
        menu_File->addSeparator();
        menu_File->addAction(actionAlwaysOnTop);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menuBasic_MainMenu_Help->addAction(actionHelpPortal);
        menuBasic_MainMenu_Help->addAction(actionWebsite);
        menuBasic_MainMenu_Help->addAction(actionDiscord);
        menuBasic_MainMenu_Help->addSeparator();
        menuBasic_MainMenu_Help->addAction(menuLogFiles->menuAction());
        menuBasic_MainMenu_Help->addAction(menuCrashLogs->menuAction());
        menuBasic_MainMenu_Help->addSeparator();
        menuBasic_MainMenu_Help->addAction(actionRepair);
        menuBasic_MainMenu_Help->addAction(actionCheckForUpdates);
        menuBasic_MainMenu_Help->addAction(actionShowAbout);
        menuBasic_MainMenu_Help->addAction(actionShowMacPermissions);
        menuBasic_MainMenu_Help->addSeparator();
        menuLogFiles->addAction(actionShowLogs);
        menuLogFiles->addAction(actionUploadCurrentLog);
        menuLogFiles->addAction(actionUploadLastLog);
        menuLogFiles->addAction(actionViewCurrentLog);
        menuCrashLogs->addAction(actionShowCrashLogs);
        menuCrashLogs->addAction(actionUploadLastCrashLog);
        menuBasic_MainMenu_Edit->addAction(actionMainUndo);
        menuBasic_MainMenu_Edit->addAction(actionMainRedo);
        menuBasic_MainMenu_Edit->addSeparator();
        menuBasic_MainMenu_Edit->addAction(actionCopySource);
        menuBasic_MainMenu_Edit->addAction(actionPasteRef);
        menuBasic_MainMenu_Edit->addAction(actionPasteDup);
        menuBasic_MainMenu_Edit->addSeparator();
        menuBasic_MainMenu_Edit->addAction(actionCopyFilters);
        menuBasic_MainMenu_Edit->addAction(actionPasteFilters);
        menuBasic_MainMenu_Edit->addSeparator();
        menuBasic_MainMenu_Edit->addAction(transformMenu->menuAction());
        menuBasic_MainMenu_Edit->addAction(orderMenu->menuAction());
        menuBasic_MainMenu_Edit->addAction(scalingMenu->menuAction());
        menuBasic_MainMenu_Edit->addAction(actionLockPreview);
        menuBasic_MainMenu_Edit->addSeparator();
        menuBasic_MainMenu_Edit->addAction(actionAdvAudioProperties);
        menuBasic_MainMenu_Edit->addSeparator();
        transformMenu->addAction(actionEditTransform);
        transformMenu->addAction(actionCopyTransform);
        transformMenu->addAction(actionPasteTransform);
        transformMenu->addAction(actionResetTransform);
        transformMenu->addSeparator();
        transformMenu->addAction(actionRotate90CW);
        transformMenu->addAction(actionRotate90CCW);
        transformMenu->addAction(actionRotate180);
        transformMenu->addSeparator();
        transformMenu->addAction(actionFlipHorizontal);
        transformMenu->addAction(actionFlipVertical);
        transformMenu->addSeparator();
        transformMenu->addAction(actionFitToScreen);
        transformMenu->addAction(actionStretchToScreen);
        transformMenu->addAction(actionCenterToScreen);
        transformMenu->addAction(actionVerticalCenter);
        transformMenu->addAction(actionHorizontalCenter);
        orderMenu->addAction(actionMoveUp);
        orderMenu->addAction(actionMoveDown);
        orderMenu->addSeparator();
        orderMenu->addAction(actionMoveToTop);
        orderMenu->addAction(actionMoveToBottom);
        scalingMenu->addAction(actionScaleWindow);
        scalingMenu->addAction(actionScaleCanvas);
        scalingMenu->addAction(actionScaleOutput);
        profileMenu->addAction(actionNewProfile);
        profileMenu->addAction(actionDupProfile);
        profileMenu->addAction(actionRenameProfile);
        profileMenu->addAction(actionRemoveProfile);
        profileMenu->addAction(actionImportProfile);
        profileMenu->addAction(actionExportProfile);
        profileMenu->addSeparator();
        sceneCollectionMenu->addAction(actionNewSceneCollection);
        sceneCollectionMenu->addAction(actionDupSceneCollection);
        sceneCollectionMenu->addAction(actionRenameSceneCollection);
        sceneCollectionMenu->addAction(actionRemoveSceneCollection);
        sceneCollectionMenu->addAction(actionImportSceneCollection);
        sceneCollectionMenu->addAction(actionExportSceneCollection);
        sceneCollectionMenu->addSeparator();
        sceneCollectionMenu->addAction(actionShowMissingFiles);
        sceneCollectionMenu->addSeparator();
        viewMenu->addAction(resetUI);
        viewMenu->addAction(actionFullscreenInterface);
        viewMenu->addSeparator();
        viewMenu->addAction(toggleListboxToolbars);
        viewMenu->addAction(toggleContextBar);
        viewMenu->addAction(toggleSourceIcons);
        viewMenu->addAction(toggleStatusBar);
        viewMenu->addSeparator();
        viewMenu->addAction(stats);
        menuTools->addAction(autoConfigure);
        menuTools->addSeparator();
        menuDocks->addAction(lockDocks);
        menuDocks->addAction(resetDocks);
        menuDocks->addSeparator();
        menuDocks->addAction(toggleScenes);
        menuDocks->addAction(toggleSources);
        menuDocks->addAction(toggleMixer);
        menuDocks->addAction(toggleTransitions);
        menuDocks->addAction(toggleControls);
        menuDocks->addAction(toggleStats);
        scenes->addAction(actionRemoveScene);
        scenesToolbar->addAction(actionAddScene);
        scenesToolbar->addAction(actionRemoveScene);
        scenesToolbar->addSeparator();
        scenesToolbar->addAction(actionSceneUp);
        scenesToolbar->addAction(actionSceneDown);
        sources->addAction(actionRemoveSource);
        sourcesToolbar->addAction(actionAddSource);
        sourcesToolbar->addAction(actionRemoveSource);
        sourcesToolbar->addAction(actionSourceProperties);
        sourcesToolbar->addSeparator();
        sourcesToolbar->addAction(actionSourceUp);
        sourcesToolbar->addAction(actionSourceDown);
        mixerToolbar->addAction(actionMixerToolbarAdvAudio);
        mixerToolbar->addSeparator();
        mixerToolbar->addAction(actionMixerToolbarMenu);

        retranslateUi(OBSBasic);
        QObject::connect(actionE_xit, SIGNAL(triggered()), OBSBasic, SLOT(close()));
        QObject::connect(exitButton, SIGNAL(clicked()), OBSBasic, SLOT(close()));

        QMetaObject::connectSlotsByName(OBSBasic);
    } // setupUi

    void retranslateUi(QMainWindow *OBSBasic)
    {
        OBSBasic->setWindowTitle(QCoreApplication::translate("OBSBasic", ".MainWindow", nullptr));
        actionAddScene->setText(QCoreApplication::translate("OBSBasic", "Add", nullptr));
#if QT_CONFIG(tooltip)
        actionAddScene->setToolTip(QCoreApplication::translate("OBSBasic", "Basic.Main.AddSceneDlg.Title", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddSource->setText(QCoreApplication::translate("OBSBasic", "Add", nullptr));
#if QT_CONFIG(tooltip)
        actionAddSource->setToolTip(QCoreApplication::translate("OBSBasic", "AddSource", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveScene->setText(QCoreApplication::translate("OBSBasic", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveScene->setToolTip(QCoreApplication::translate("OBSBasic", "RemoveScene", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRemoveScene->setShortcut(QCoreApplication::translate("OBSBasic", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRemoveSource->setText(QCoreApplication::translate("OBSBasic", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveSource->setToolTip(QCoreApplication::translate("OBSBasic", "RemoveSource", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRemoveSource->setShortcut(QCoreApplication::translate("OBSBasic", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSourceProperties->setText(QCoreApplication::translate("OBSBasic", "Properties", nullptr));
#if QT_CONFIG(tooltip)
        actionSourceProperties->setToolTip(QCoreApplication::translate("OBSBasic", "SourceProperties", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSceneUp->setText(QCoreApplication::translate("OBSBasic", "MoveUp", nullptr));
#if QT_CONFIG(tooltip)
        actionSceneUp->setToolTip(QCoreApplication::translate("OBSBasic", "MoveSceneUp", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSourceUp->setText(QCoreApplication::translate("OBSBasic", "MoveUp", nullptr));
#if QT_CONFIG(tooltip)
        actionSourceUp->setToolTip(QCoreApplication::translate("OBSBasic", "MoveSourceUp", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSceneDown->setText(QCoreApplication::translate("OBSBasic", "MoveDown", nullptr));
#if QT_CONFIG(tooltip)
        actionSceneDown->setToolTip(QCoreApplication::translate("OBSBasic", "MoveSceneDown", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSourceDown->setText(QCoreApplication::translate("OBSBasic", "MoveDown", nullptr));
#if QT_CONFIG(tooltip)
        actionSourceDown->setToolTip(QCoreApplication::translate("OBSBasic", "MoveSourceDown", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShow_Recordings->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.ShowRecordings", nullptr));
        actionRemux->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.Remux", nullptr));
        action_Settings->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.Settings", nullptr));
        actionE_xit->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.Exit", nullptr));
        actionShowLogs->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.ShowLogs", nullptr));
        actionUploadLastLog->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.UploadLastLog", nullptr));
        actionUploadCurrentLog->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.UploadCurrentLog", nullptr));
        actionViewCurrentLog->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.ViewCurrentLog", nullptr));
        actionUndo->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Redo", nullptr));
        actionEditTransform->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.EditTransform", nullptr));
#if QT_CONFIG(shortcut)
        actionEditTransform->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopyTransform->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.CopyTransform", nullptr));
#if QT_CONFIG(shortcut)
        actionCopyTransform->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPasteTransform->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.PasteTransform", nullptr));
#if QT_CONFIG(shortcut)
        actionPasteTransform->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRotate90CW->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.Rotate90CW", nullptr));
        actionRotate90CCW->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.Rotate90CCW", nullptr));
        actionRotate180->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.Rotate180", nullptr));
        actionFitToScreen->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.FitToScreen", nullptr));
#if QT_CONFIG(shortcut)
        actionFitToScreen->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStretchToScreen->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.StretchToScreen", nullptr));
#if QT_CONFIG(shortcut)
        actionStretchToScreen->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResetTransform->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.ResetTransform", nullptr));
#if QT_CONFIG(shortcut)
        actionResetTransform->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCenterToScreen->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.CenterToScreen", nullptr));
#if QT_CONFIG(shortcut)
        actionCenterToScreen->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVerticalCenter->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.VerticalCenter", nullptr));
        actionHorizontalCenter->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.HorizontalCenter", nullptr));
        actionFlipHorizontal->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.FlipHorizontal", nullptr));
        actionFlipVertical->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.FlipVertical", nullptr));
        actionMoveUp->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveUp", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveUp->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveDown", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveDown->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveToTop->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveToTop", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveToTop->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+Home", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveToBottom->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveToBottom", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveToBottom->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+End", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCheckForUpdates->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.CheckForUpdates", nullptr));
        actionShowMacPermissions->setText(QCoreApplication::translate("OBSBasic", "MacPermissions.Title", nullptr));
        actionRepair->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Repair", nullptr));
        actionInteract->setText(QCoreApplication::translate("OBSBasic", "Interact", nullptr));
        actionAdvAudioProperties->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.AdvAudio", nullptr));
        actionWebsite->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Website", nullptr));
        actionNewSceneCollection->setText(QCoreApplication::translate("OBSBasic", "New", nullptr));
        actionDupSceneCollection->setText(QCoreApplication::translate("OBSBasic", "Duplicate", nullptr));
        actionRenameSceneCollection->setText(QCoreApplication::translate("OBSBasic", "Rename", nullptr));
        actionRemoveSceneCollection->setText(QCoreApplication::translate("OBSBasic", "Remove", nullptr));
        actionImportSceneCollection->setText(QCoreApplication::translate("OBSBasic", "Import", nullptr));
        actionExportSceneCollection->setText(QCoreApplication::translate("OBSBasic", "Export", nullptr));
        actionShowMissingFiles->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.ShowMissingFiles", nullptr));
        actionNewProfile->setText(QCoreApplication::translate("OBSBasic", "New", nullptr));
        actionDupProfile->setText(QCoreApplication::translate("OBSBasic", "Duplicate", nullptr));
        actionRenameProfile->setText(QCoreApplication::translate("OBSBasic", "Rename", nullptr));
        actionRemoveProfile->setText(QCoreApplication::translate("OBSBasic", "Remove", nullptr));
        actionImportProfile->setText(QCoreApplication::translate("OBSBasic", "Import", nullptr));
        actionExportProfile->setText(QCoreApplication::translate("OBSBasic", "Export", nullptr));
        actionShowSettingsFolder->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.ShowSettingsFolder", nullptr));
        actionShowProfileFolder->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.ShowProfileFolder", nullptr));
        actionAlwaysOnTop->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.AlwaysOnTop", nullptr));
        toggleListboxToolbars->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.ListboxToolbars", nullptr));
        toggleStatusBar->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.StatusBar", nullptr));
        actionLockPreview->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.LockPreview", nullptr));
        actionScaleWindow->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Scale.Window", nullptr));
        actionScaleCanvas->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Scale.Canvas", nullptr));
        actionScaleOutput->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Scale.Output", nullptr));
        actionPasteDup->setText(QCoreApplication::translate("OBSBasic", "PasteDuplicate", nullptr));
        autoConfigure2->setText(QCoreApplication::translate("OBSBasic", "Basic.AutoConfig", nullptr));
        autoConfigure->setText(QCoreApplication::translate("OBSBasic", "Basic.AutoConfig", nullptr));
        stats->setText(QCoreApplication::translate("OBSBasic", "Basic.Stats", nullptr));
        resetDocks->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Docks.ResetDocks", nullptr));
        lockDocks->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Docks.LockDocks", nullptr));
        toggleScenes->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.Scenes", nullptr));
        toggleSources->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.Sources", nullptr));
        toggleMixer->setText(QCoreApplication::translate("OBSBasic", "Mixer", nullptr));
        toggleTransitions->setText(QCoreApplication::translate("OBSBasic", "Basic.SceneTransitions", nullptr));
        toggleControls->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.Controls", nullptr));
        actionHelpPortal->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.HelpPortal", nullptr));
        actionShowCrashLogs->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.CrashLogs.ShowLogs", nullptr));
        actionUploadLastCrashLog->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.CrashLogs.UploadLastLog", nullptr));
        actionDiscord->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Discord", nullptr));
        toggleStats->setText(QCoreApplication::translate("OBSBasic", "Basic.Stats", nullptr));
        actionShowAbout->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.About", nullptr));
        toggleSourceIcons->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.SourceIcons", nullptr));
        toggleContextToolbars->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.Toolbars.Context", nullptr));
        toggleContextBar->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.ContextBar", nullptr));
        actionMainUndo->setText(QCoreApplication::translate("OBSBasic", "Undo.Undo", nullptr));
        actionMainRedo->setText(QCoreApplication::translate("OBSBasic", "Undo.Redo", nullptr));
        actionMixerToolbarAdvAudio->setText(QCoreApplication::translate("OBSBasic", "AdvAudioProps", nullptr));
#if QT_CONFIG(tooltip)
        actionMixerToolbarAdvAudio->setToolTip(QCoreApplication::translate("OBSBasic", "Basic.AdvAudio", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMixerToolbarAdvAudio->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasic", "cogsIcon", nullptr)));
        actionMixerToolbarMenu->setText(QCoreApplication::translate("OBSBasic", "MixerToolbarMenu", nullptr));
        actionMixerToolbarMenu->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasic", "menuIconSmall", nullptr)));
        label->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.PreviewDisabled", nullptr));
        enablePreviewButton->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.PreviewConextMenu.Enable", nullptr));
        previewLabel->setText(QCoreApplication::translate("OBSBasic", "StudioMode.PreviewSceneName", nullptr));
        previewLabel->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasic", "previewProgramLabels", nullptr)));
        contextSourceIcon->setText(QString());
        contextSourceLabel->setText(QCoreApplication::translate("OBSBasic", "TextLabel", nullptr));
        contextSourceIconSpacer->setText(QString());
#if QT_CONFIG(tooltip)
        sourcePropertiesButton->setToolTip(QCoreApplication::translate("OBSBasic", "SourceProperties", nullptr));
#endif // QT_CONFIG(tooltip)
        sourcePropertiesButton->setText(QCoreApplication::translate("OBSBasic", "Properties", nullptr));
#if QT_CONFIG(tooltip)
        sourceFiltersButton->setToolTip(QCoreApplication::translate("OBSBasic", "SourceFilters", nullptr));
#endif // QT_CONFIG(tooltip)
        sourceFiltersButton->setText(QCoreApplication::translate("OBSBasic", "Filters", nullptr));
#if QT_CONFIG(tooltip)
        sourceInteractButton->setToolTip(QCoreApplication::translate("OBSBasic", "Interact", nullptr));
#endif // QT_CONFIG(tooltip)
        sourceInteractButton->setText(QCoreApplication::translate("OBSBasic", "Interact", nullptr));
        menu_File->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File", nullptr));
        menuBasic_MainMenu_Help->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help", nullptr));
        menuLogFiles->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs", nullptr));
        menuCrashLogs->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.CrashLogs", nullptr));
        menuBasic_MainMenu_Edit->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit", nullptr));
        actionCopySource->setText(QCoreApplication::translate("OBSBasic", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopySource->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPasteRef->setText(QCoreApplication::translate("OBSBasic", "PasteReference", nullptr));
        actionPasteRef->setIconText(QCoreApplication::translate("OBSBasic", "PasteReference", nullptr));
#if QT_CONFIG(tooltip)
        actionPasteRef->setToolTip(QCoreApplication::translate("OBSBasic", "PasteReference", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPasteRef->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopyFilters->setText(QCoreApplication::translate("OBSBasic", "Copy.Filters", nullptr));
        actionPasteFilters->setText(QCoreApplication::translate("OBSBasic", "Paste.Filters", nullptr));
        transformMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform", nullptr));
        orderMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order", nullptr));
        scalingMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Scale", nullptr));
        profileMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Profile", nullptr));
        sceneCollectionMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.SceneCollection", nullptr));
        viewMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View", nullptr));
        resetUI->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.ResetUI", nullptr));
        actionFullscreenInterface->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.Fullscreen.Interface", nullptr));
#if QT_CONFIG(shortcut)
        actionFullscreenInterface->setShortcut(QCoreApplication::translate("OBSBasic", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        menuTools->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Tools", nullptr));
        menuDocks->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Docks", nullptr));
        scenesDock->setWindowTitle(QCoreApplication::translate("OBSBasic", "Basic.Main.Scenes", nullptr));
        sourcesDock->setWindowTitle(QCoreApplication::translate("OBSBasic", "Basic.Main.Sources", nullptr));
        mixerDock->setWindowTitle(QCoreApplication::translate("OBSBasic", "Mixer", nullptr));
        transitionsDock->setWindowTitle(QCoreApplication::translate("OBSBasic", "Basic.SceneTransitions", nullptr));
#if QT_CONFIG(accessibility)
        transitions->setAccessibleName(QCoreApplication::translate("OBSBasic", "Transition", nullptr));
#endif // QT_CONFIG(accessibility)
        transitionDurationLabel->setText(QCoreApplication::translate("OBSBasic", "Basic.TransitionDuration", nullptr));
#if QT_CONFIG(accessibility)
        transitionDuration->setAccessibleName(QCoreApplication::translate("OBSBasic", "Basic.TransitionDuration", nullptr));
#endif // QT_CONFIG(accessibility)
        transitionDuration->setSuffix(QCoreApplication::translate("OBSBasic", " ms", nullptr));
#if QT_CONFIG(tooltip)
        transitionAdd->setToolTip(QCoreApplication::translate("OBSBasic", "Basic.AddTransition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        transitionAdd->setAccessibleName(QCoreApplication::translate("OBSBasic", "Basic.AddTransition", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        transitionRemove->setToolTip(QCoreApplication::translate("OBSBasic", "Basic.RemoveTransition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        transitionRemove->setAccessibleName(QCoreApplication::translate("OBSBasic", "Basic.RemoveTransition", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        transitionProps->setToolTip(QCoreApplication::translate("OBSBasic", "Basic.TransitionProperties", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        transitionProps->setAccessibleName(QCoreApplication::translate("OBSBasic", "Basic.TransitionProperties", nullptr));
#endif // QT_CONFIG(accessibility)
        controlsDock->setWindowTitle(QCoreApplication::translate("OBSBasic", "Basic.Main.Controls", nullptr));
        streamButton->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.StartStreaming", nullptr));
        broadcastButton->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.StartBroadcast", nullptr));
        recordButton->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.StartRecording", nullptr));
        modeSwitch->setText(QCoreApplication::translate("OBSBasic", "Basic.TogglePreviewProgramMode", nullptr));
        settingsButton->setText(QCoreApplication::translate("OBSBasic", "Settings", nullptr));
        exitButton->setText(QCoreApplication::translate("OBSBasic", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSBasic: public Ui_OBSBasic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASIC_H
