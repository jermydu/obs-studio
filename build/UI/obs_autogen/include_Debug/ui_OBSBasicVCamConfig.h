/********************************************************************************
** Form generated from reading UI file 'OBSBasicVCamConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICVCAMCONFIG_H
#define UI_OBSBASICVCAMCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicVCamConfig
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *outputTypeLabel;
    QComboBox *outputType;
    QLabel *outputSelectionLabel;
    QComboBox *outputSelection;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicVCamConfig)
    {
        if (OBSBasicVCamConfig->objectName().isEmpty())
            OBSBasicVCamConfig->setObjectName(QString::fromUtf8("OBSBasicVCamConfig"));
        OBSBasicVCamConfig->resize(400, 170);
        verticalLayout = new QVBoxLayout(OBSBasicVCamConfig);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        outputTypeLabel = new QLabel(OBSBasicVCamConfig);
        outputTypeLabel->setObjectName(QString::fromUtf8("outputTypeLabel"));

        verticalLayout->addWidget(outputTypeLabel);

        outputType = new QComboBox(OBSBasicVCamConfig);
        outputType->addItem(QString());
        outputType->addItem(QString());
        outputType->addItem(QString());
        outputType->setObjectName(QString::fromUtf8("outputType"));

        verticalLayout->addWidget(outputType);

        outputSelectionLabel = new QLabel(OBSBasicVCamConfig);
        outputSelectionLabel->setObjectName(QString::fromUtf8("outputSelectionLabel"));

        verticalLayout->addWidget(outputSelectionLabel);

        outputSelection = new QComboBox(OBSBasicVCamConfig);
        outputSelection->setObjectName(QString::fromUtf8("outputSelection"));

        verticalLayout->addWidget(outputSelection);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(OBSBasicVCamConfig);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OBSBasicVCamConfig);
        QObject::connect(buttonBox, SIGNAL(accepted()), OBSBasicVCamConfig, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OBSBasicVCamConfig, SLOT(reject()));

        QMetaObject::connectSlotsByName(OBSBasicVCamConfig);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicVCamConfig)
    {
        OBSBasicVCamConfig->setWindowTitle(QCoreApplication::translate("OBSBasicVCamConfig", "Basic.VCam.VirtualCamera", nullptr));
        outputTypeLabel->setText(QCoreApplication::translate("OBSBasicVCamConfig", "Basic.VCam.OutputType", nullptr));
        outputType->setItemText(0, QCoreApplication::translate("OBSBasicVCamConfig", "Basic.VCam.Internal", nullptr));
        outputType->setItemText(1, QCoreApplication::translate("OBSBasicVCamConfig", "Basic.Scene", nullptr));
        outputType->setItemText(2, QCoreApplication::translate("OBSBasicVCamConfig", "Basic.Main.Source", nullptr));

        outputSelectionLabel->setText(QCoreApplication::translate("OBSBasicVCamConfig", "Basic.VCam.OutputSelection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicVCamConfig: public Ui_OBSBasicVCamConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICVCAMCONFIG_H
