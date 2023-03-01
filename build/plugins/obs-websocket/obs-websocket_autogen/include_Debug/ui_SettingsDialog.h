/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *pluginSettingsGroupBox;
    QFormLayout *formLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *enableWebSocketServerCheckBox;
    QCheckBox *enableSystemTrayAlertsCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *enableDebugLoggingCheckBox;
    QLabel *enableDebugLoggingToolTipLabel;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *serverSettingsGroupBox;
    QFormLayout *formLayout_3;
    QLabel *serverPortLabel;
    QSpinBox *serverPortSpinBox;
    QCheckBox *enableAuthenticationCheckBox;
    QLabel *serverPasswordLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *serverPasswordLineEdit;
    QPushButton *generatePasswordButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *showConnectInfoButton;
    QGroupBox *sessionTableGroupBox;
    QGridLayout *gridLayout_2;
    QTableWidget *websocketSessionTable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(675, 565);
        SettingsDialog->setMinimumSize(QSize(675, 0));
        SettingsDialog->setMaximumSize(QSize(675, 16777215));
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pluginSettingsGroupBox = new QGroupBox(SettingsDialog);
        pluginSettingsGroupBox->setObjectName(QString::fromUtf8("pluginSettingsGroupBox"));
        pluginSettingsGroupBox->setMinimumSize(QSize(0, 0));
        formLayout = new QFormLayout(pluginSettingsGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout->setItem(1, QFormLayout::LabelRole, horizontalSpacer);

        enableWebSocketServerCheckBox = new QCheckBox(pluginSettingsGroupBox);
        enableWebSocketServerCheckBox->setObjectName(QString::fromUtf8("enableWebSocketServerCheckBox"));
        enableWebSocketServerCheckBox->setChecked(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, enableWebSocketServerCheckBox);

        enableSystemTrayAlertsCheckBox = new QCheckBox(pluginSettingsGroupBox);
        enableSystemTrayAlertsCheckBox->setObjectName(QString::fromUtf8("enableSystemTrayAlertsCheckBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, enableSystemTrayAlertsCheckBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        enableDebugLoggingCheckBox = new QCheckBox(pluginSettingsGroupBox);
        enableDebugLoggingCheckBox->setObjectName(QString::fromUtf8("enableDebugLoggingCheckBox"));

        horizontalLayout_2->addWidget(enableDebugLoggingCheckBox);

        enableDebugLoggingToolTipLabel = new QLabel(pluginSettingsGroupBox);
        enableDebugLoggingToolTipLabel->setObjectName(QString::fromUtf8("enableDebugLoggingToolTipLabel"));

        horizontalLayout_2->addWidget(enableDebugLoggingToolTipLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);


        verticalLayout->addWidget(pluginSettingsGroupBox);

        serverSettingsGroupBox = new QGroupBox(SettingsDialog);
        serverSettingsGroupBox->setObjectName(QString::fromUtf8("serverSettingsGroupBox"));
        serverSettingsGroupBox->setMinimumSize(QSize(0, 0));
        formLayout_3 = new QFormLayout(serverSettingsGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setContentsMargins(-1, 2, -1, -1);
        serverPortLabel = new QLabel(serverSettingsGroupBox);
        serverPortLabel->setObjectName(QString::fromUtf8("serverPortLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, serverPortLabel);

        serverPortSpinBox = new QSpinBox(serverSettingsGroupBox);
        serverPortSpinBox->setObjectName(QString::fromUtf8("serverPortSpinBox"));
        serverPortSpinBox->setMinimum(1);
        serverPortSpinBox->setMaximum(65534);
        serverPortSpinBox->setValue(4455);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, serverPortSpinBox);

        enableAuthenticationCheckBox = new QCheckBox(serverSettingsGroupBox);
        enableAuthenticationCheckBox->setObjectName(QString::fromUtf8("enableAuthenticationCheckBox"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, enableAuthenticationCheckBox);

        serverPasswordLabel = new QLabel(serverSettingsGroupBox);
        serverPasswordLabel->setObjectName(QString::fromUtf8("serverPasswordLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, serverPasswordLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        serverPasswordLineEdit = new QLineEdit(serverSettingsGroupBox);
        serverPasswordLineEdit->setObjectName(QString::fromUtf8("serverPasswordLineEdit"));
        serverPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(serverPasswordLineEdit);

        generatePasswordButton = new QPushButton(serverSettingsGroupBox);
        generatePasswordButton->setObjectName(QString::fromUtf8("generatePasswordButton"));

        horizontalLayout->addWidget(generatePasswordButton);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout_3->setItem(3, QFormLayout::LabelRole, horizontalSpacer_2);

        showConnectInfoButton = new QPushButton(serverSettingsGroupBox);
        showConnectInfoButton->setObjectName(QString::fromUtf8("showConnectInfoButton"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, showConnectInfoButton);


        verticalLayout->addWidget(serverSettingsGroupBox);

        sessionTableGroupBox = new QGroupBox(SettingsDialog);
        sessionTableGroupBox->setObjectName(QString::fromUtf8("sessionTableGroupBox"));
        sessionTableGroupBox->setMinimumSize(QSize(0, 200));
        gridLayout_2 = new QGridLayout(sessionTableGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        websocketSessionTable = new QTableWidget(sessionTableGroupBox);
        if (websocketSessionTable->columnCount() < 5)
            websocketSessionTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        websocketSessionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        websocketSessionTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        websocketSessionTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        websocketSessionTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        websocketSessionTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        websocketSessionTable->setObjectName(QString::fromUtf8("websocketSessionTable"));
        websocketSessionTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        websocketSessionTable->setTabKeyNavigation(false);
        websocketSessionTable->setProperty("showDropIndicator", QVariant(false));
        websocketSessionTable->horizontalHeader()->setMinimumSectionSize(100);
        websocketSessionTable->horizontalHeader()->setDefaultSectionSize(135);
        websocketSessionTable->verticalHeader()->setVisible(false);
        websocketSessionTable->verticalHeader()->setMinimumSectionSize(21);

        gridLayout_2->addWidget(websocketSessionTable, 0, 0, 1, 1);


        verticalLayout->addWidget(sessionTableGroupBox);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.DialogTitle", nullptr));
        pluginSettingsGroupBox->setTitle(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.PluginSettingsTitle", nullptr));
        enableWebSocketServerCheckBox->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.ServerEnable", nullptr));
        enableSystemTrayAlertsCheckBox->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.AlertsEnable", nullptr));
#if QT_CONFIG(tooltip)
        enableDebugLoggingCheckBox->setToolTip(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.DebugEnableHoverText", nullptr));
#endif // QT_CONFIG(tooltip)
        enableDebugLoggingCheckBox->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.DebugEnable", nullptr));
#if QT_CONFIG(tooltip)
        enableDebugLoggingToolTipLabel->setToolTip(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.DebugEnableHoverText", nullptr));
#endif // QT_CONFIG(tooltip)
        serverSettingsGroupBox->setTitle(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.ServerSettingsTitle", nullptr));
        serverPortLabel->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.ServerPort", nullptr));
        enableAuthenticationCheckBox->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.AuthRequired", nullptr));
        serverPasswordLabel->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.Password", nullptr));
        generatePasswordButton->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.GeneratePassword", nullptr));
        showConnectInfoButton->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.Settings.ShowConnectInfo", nullptr));
        sessionTableGroupBox->setTitle(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.SessionTable.Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem = websocketSessionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.SessionTable.RemoteAddressColumnTitle", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = websocketSessionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.SessionTable.SessionDurationColumnTitle", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = websocketSessionTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.SessionTable.MessagesInOutColumnTitle", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = websocketSessionTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.SessionTable.IdentifiedTitle", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = websocketSessionTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SettingsDialog", "OBSWebSocket.SessionTable.KickButtonColumnTitle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
