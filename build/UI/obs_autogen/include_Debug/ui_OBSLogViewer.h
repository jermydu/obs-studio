/********************************************************************************
** Form generated from reading UI file 'OBSLogViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSLOGVIEWER_H
#define UI_OBSLOGVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OBSLogViewer
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *textArea;
    QHBoxLayout *buttonLayout;
    QCheckBox *showStartup;
    QSpacerItem *horizontalSpacer;
    QPushButton *openButton;
    QPushButton *clearButton;
    QPushButton *closeButton;

    void setupUi(QDialog *OBSLogViewer)
    {
        if (OBSLogViewer->objectName().isEmpty())
            OBSLogViewer->setObjectName(QString::fromUtf8("OBSLogViewer"));
        OBSLogViewer->resize(805, 300);
        verticalLayout = new QVBoxLayout(OBSLogViewer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 4);
        textArea = new QPlainTextEdit(OBSLogViewer);
        textArea->setObjectName(QString::fromUtf8("textArea"));
        textArea->setReadOnly(true);

        verticalLayout->addWidget(textArea);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonLayout->setContentsMargins(10, 0, 10, 0);
        showStartup = new QCheckBox(OBSLogViewer);
        showStartup->setObjectName(QString::fromUtf8("showStartup"));

        buttonLayout->addWidget(showStartup);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        openButton = new QPushButton(OBSLogViewer);
        openButton->setObjectName(QString::fromUtf8("openButton"));

        buttonLayout->addWidget(openButton);

        clearButton = new QPushButton(OBSLogViewer);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        buttonLayout->addWidget(clearButton);

        closeButton = new QPushButton(OBSLogViewer);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        buttonLayout->addWidget(closeButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(OBSLogViewer);
        QObject::connect(closeButton, SIGNAL(clicked()), OBSLogViewer, SLOT(close()));
        QObject::connect(clearButton, SIGNAL(clicked()), textArea, SLOT(clear()));

        QMetaObject::connectSlotsByName(OBSLogViewer);
    } // setupUi

    void retranslateUi(QDialog *OBSLogViewer)
    {
        OBSLogViewer->setWindowTitle(QCoreApplication::translate("OBSLogViewer", "LogViewer", nullptr));
        showStartup->setText(QCoreApplication::translate("OBSLogViewer", "ShowOnStartup", nullptr));
        openButton->setText(QCoreApplication::translate("OBSLogViewer", "OpenFile", nullptr));
        clearButton->setText(QCoreApplication::translate("OBSLogViewer", "Clear", nullptr));
        closeButton->setText(QCoreApplication::translate("OBSLogViewer", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSLogViewer: public Ui_OBSLogViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSLOGVIEWER_H
