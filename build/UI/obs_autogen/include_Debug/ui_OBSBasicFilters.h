/********************************************************************************
** Form generated from reading UI file 'OBSBasicFilters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICFILTERS_H
#define UI_OBSBASICFILTERS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include "focus-list.hpp"
#include "qt-display.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasicFilters
{
public:
    QAction *actionRemoveFilter;
    QAction *actionMoveUp;
    QAction *actionMoveDown;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *asyncWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *asyncLabel;
    FocusList *asyncFilters;
    QFrame *widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addAsyncFilter;
    QPushButton *removeAsyncFilter;
    QPushButton *moveAsyncFilterUp;
    QPushButton *moveAsyncFilterDown;
    QSpacerItem *asyncToolbarSpacer;
    QFrame *separatorLine;
    QFrame *effectWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    FocusList *effectFilters;
    QFrame *widget_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addEffectFilter;
    QPushButton *removeEffectFilter;
    QPushButton *moveEffectFilterUp;
    QPushButton *moveEffectFilterDown;
    QSpacerItem *effectToolbarSpacer;
    QFrame *rightContainerLayout;
    QVBoxLayout *verticalLayout_6;
    QSplitter *rightLayout;
    QFrame *previewFrame;
    QVBoxLayout *verticalLayout_7;
    OBSQTDisplay *preview;
    QFrame *propertiesFrame;
    QVBoxLayout *propertiesLayout;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicFilters)
    {
        if (OBSBasicFilters->objectName().isEmpty())
            OBSBasicFilters->setObjectName(QString::fromUtf8("OBSBasicFilters"));
        OBSBasicFilters->resize(861, 726);
        actionRemoveFilter = new QAction(OBSBasicFilters);
        actionRemoveFilter->setObjectName(QString::fromUtf8("actionRemoveFilter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveFilter->setIcon(icon);
        actionMoveUp = new QAction(OBSBasicFilters);
        actionMoveUp->setObjectName(QString::fromUtf8("actionMoveUp"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/images/up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMoveUp->setIcon(icon1);
        actionMoveDown = new QAction(OBSBasicFilters);
        actionMoveDown->setObjectName(QString::fromUtf8("actionMoveDown"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/images/down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMoveDown->setIcon(icon2);
        verticalLayout = new QVBoxLayout(OBSBasicFilters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        asyncWidget = new QFrame(OBSBasicFilters);
        asyncWidget->setObjectName(QString::fromUtf8("asyncWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(asyncWidget->sizePolicy().hasHeightForWidth());
        asyncWidget->setSizePolicy(sizePolicy);
        asyncWidget->setMinimumSize(QSize(255, 0));
        verticalLayout_3 = new QVBoxLayout(asyncWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        asyncLabel = new QLabel(asyncWidget);
        asyncLabel->setObjectName(QString::fromUtf8("asyncLabel"));

        verticalLayout_3->addWidget(asyncLabel);

        asyncFilters = new FocusList(asyncWidget);
        asyncFilters->setObjectName(QString::fromUtf8("asyncFilters"));
        sizePolicy.setHeightForWidth(asyncFilters->sizePolicy().hasHeightForWidth());
        asyncFilters->setSizePolicy(sizePolicy);
        asyncFilters->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_3->addWidget(asyncFilters);

        widget = new QFrame(asyncWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        addAsyncFilter = new QPushButton(widget);
        addAsyncFilter->setObjectName(QString::fromUtf8("addAsyncFilter"));
        addAsyncFilter->setMaximumSize(QSize(22, 22));
        addAsyncFilter->setText(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/images/plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addAsyncFilter->setIcon(icon3);
        addAsyncFilter->setAutoDefault(false);
        addAsyncFilter->setFlat(true);

        horizontalLayout_4->addWidget(addAsyncFilter);

        removeAsyncFilter = new QPushButton(widget);
        removeAsyncFilter->setObjectName(QString::fromUtf8("removeAsyncFilter"));
        removeAsyncFilter->setMaximumSize(QSize(22, 22));
        removeAsyncFilter->setText(QString::fromUtf8(""));
        removeAsyncFilter->setIcon(icon);
        removeAsyncFilter->setAutoDefault(false);
        removeAsyncFilter->setFlat(true);

        horizontalLayout_4->addWidget(removeAsyncFilter);

        moveAsyncFilterUp = new QPushButton(widget);
        moveAsyncFilterUp->setObjectName(QString::fromUtf8("moveAsyncFilterUp"));
        moveAsyncFilterUp->setMaximumSize(QSize(22, 22));
        moveAsyncFilterUp->setText(QString::fromUtf8(""));
        moveAsyncFilterUp->setIcon(icon1);
        moveAsyncFilterUp->setAutoDefault(false);
        moveAsyncFilterUp->setFlat(true);

        horizontalLayout_4->addWidget(moveAsyncFilterUp);

        moveAsyncFilterDown = new QPushButton(widget);
        moveAsyncFilterDown->setObjectName(QString::fromUtf8("moveAsyncFilterDown"));
        moveAsyncFilterDown->setMaximumSize(QSize(22, 22));
        moveAsyncFilterDown->setText(QString::fromUtf8(""));
        moveAsyncFilterDown->setIcon(icon2);
        moveAsyncFilterDown->setAutoDefault(false);
        moveAsyncFilterDown->setFlat(true);

        horizontalLayout_4->addWidget(moveAsyncFilterDown);

        asyncToolbarSpacer = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(asyncToolbarSpacer);


        verticalLayout_3->addWidget(widget);


        verticalLayout_2->addWidget(asyncWidget);

        separatorLine = new QFrame(OBSBasicFilters);
        separatorLine->setObjectName(QString::fromUtf8("separatorLine"));
        separatorLine->setFrameShape(QFrame::HLine);
        separatorLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(separatorLine);

        effectWidget = new QFrame(OBSBasicFilters);
        effectWidget->setObjectName(QString::fromUtf8("effectWidget"));
        sizePolicy.setHeightForWidth(effectWidget->sizePolicy().hasHeightForWidth());
        effectWidget->setSizePolicy(sizePolicy);
        effectWidget->setMinimumSize(QSize(255, 0));
        verticalLayout_4 = new QVBoxLayout(effectWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(effectWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        effectFilters = new FocusList(effectWidget);
        effectFilters->setObjectName(QString::fromUtf8("effectFilters"));
        sizePolicy.setHeightForWidth(effectFilters->sizePolicy().hasHeightForWidth());
        effectFilters->setSizePolicy(sizePolicy);
        effectFilters->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_4->addWidget(effectFilters);

        widget_2 = new QFrame(effectWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_6 = new QHBoxLayout(widget_2);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        addEffectFilter = new QPushButton(widget_2);
        addEffectFilter->setObjectName(QString::fromUtf8("addEffectFilter"));
        addEffectFilter->setMaximumSize(QSize(22, 22));
        addEffectFilter->setText(QString::fromUtf8(""));
        addEffectFilter->setIcon(icon3);
        addEffectFilter->setAutoDefault(false);
        addEffectFilter->setFlat(true);

        horizontalLayout_6->addWidget(addEffectFilter);

        removeEffectFilter = new QPushButton(widget_2);
        removeEffectFilter->setObjectName(QString::fromUtf8("removeEffectFilter"));
        removeEffectFilter->setMaximumSize(QSize(22, 22));
        removeEffectFilter->setText(QString::fromUtf8(""));
        removeEffectFilter->setIcon(icon);
        removeEffectFilter->setAutoDefault(false);
        removeEffectFilter->setFlat(true);

        horizontalLayout_6->addWidget(removeEffectFilter);

        moveEffectFilterUp = new QPushButton(widget_2);
        moveEffectFilterUp->setObjectName(QString::fromUtf8("moveEffectFilterUp"));
        moveEffectFilterUp->setMaximumSize(QSize(22, 22));
        moveEffectFilterUp->setText(QString::fromUtf8(""));
        moveEffectFilterUp->setIcon(icon1);
        moveEffectFilterUp->setAutoDefault(false);
        moveEffectFilterUp->setFlat(true);

        horizontalLayout_6->addWidget(moveEffectFilterUp);

        moveEffectFilterDown = new QPushButton(widget_2);
        moveEffectFilterDown->setObjectName(QString::fromUtf8("moveEffectFilterDown"));
        moveEffectFilterDown->setMaximumSize(QSize(22, 22));
        moveEffectFilterDown->setText(QString::fromUtf8(""));
        moveEffectFilterDown->setIcon(icon2);
        moveEffectFilterDown->setAutoDefault(false);
        moveEffectFilterDown->setFlat(true);

        horizontalLayout_6->addWidget(moveEffectFilterDown);

        effectToolbarSpacer = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(effectToolbarSpacer);


        verticalLayout_4->addWidget(widget_2);


        verticalLayout_2->addWidget(effectWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        rightContainerLayout = new QFrame(OBSBasicFilters);
        rightContainerLayout->setObjectName(QString::fromUtf8("rightContainerLayout"));
        rightContainerLayout->setMinimumSize(QSize(200, 0));
        rightContainerLayout->setFrameShape(QFrame::NoFrame);
        rightContainerLayout->setFrameShadow(QFrame::Plain);
        verticalLayout_6 = new QVBoxLayout(rightContainerLayout);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        rightLayout = new QSplitter(rightContainerLayout);
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        rightLayout->setMinimumSize(QSize(0, 400));
        rightLayout->setOrientation(Qt::Vertical);
        rightLayout->setChildrenCollapsible(false);
        previewFrame = new QFrame(rightLayout);
        previewFrame->setObjectName(QString::fromUtf8("previewFrame"));
        sizePolicy.setHeightForWidth(previewFrame->sizePolicy().hasHeightForWidth());
        previewFrame->setSizePolicy(sizePolicy);
        previewFrame->setFrameShape(QFrame::NoFrame);
        previewFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_7 = new QVBoxLayout(previewFrame);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        preview = new OBSQTDisplay(previewFrame);
        preview->setObjectName(QString::fromUtf8("preview"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy1);
        preview->setMinimumSize(QSize(0, 150));

        verticalLayout_7->addWidget(preview);

        rightLayout->addWidget(previewFrame);
        propertiesFrame = new QFrame(rightLayout);
        propertiesFrame->setObjectName(QString::fromUtf8("propertiesFrame"));
        sizePolicy.setHeightForWidth(propertiesFrame->sizePolicy().hasHeightForWidth());
        propertiesFrame->setSizePolicy(sizePolicy);
        propertiesFrame->setFrameShape(QFrame::NoFrame);
        propertiesFrame->setFrameShadow(QFrame::Plain);
        propertiesLayout = new QVBoxLayout(propertiesFrame);
        propertiesLayout->setObjectName(QString::fromUtf8("propertiesLayout"));
        propertiesLayout->setContentsMargins(0, 0, 0, 0);
        rightLayout->addWidget(propertiesFrame);

        verticalLayout_6->addWidget(rightLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        buttonBox = new QDialogButtonBox(rightContainerLayout);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::RestoreDefaults);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_6->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(rightContainerLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 10);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OBSBasicFilters);

        QMetaObject::connectSlotsByName(OBSBasicFilters);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicFilters)
    {
        OBSBasicFilters->setWindowTitle(QCoreApplication::translate("OBSBasicFilters", "Basic.Filters", nullptr));
        actionRemoveFilter->setText(QCoreApplication::translate("OBSBasicFilters", "Remove", nullptr));
#if QT_CONFIG(shortcut)
        actionRemoveFilter->setShortcut(QCoreApplication::translate("OBSBasicFilters", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.MainMenu.Edit.Order.MoveUp", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveUp->setShortcut(QCoreApplication::translate("OBSBasicFilters", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.MainMenu.Edit.Order.MoveDown", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveDown->setShortcut(QCoreApplication::translate("OBSBasicFilters", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        asyncLabel->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.Filters.AsyncFilters", nullptr));
#if QT_CONFIG(accessibility)
        addAsyncFilter->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "Add", nullptr));
#endif // QT_CONFIG(accessibility)
        addAsyncFilter->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "addIconSmall", nullptr)));
#if QT_CONFIG(accessibility)
        removeAsyncFilter->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "Remove", nullptr));
#endif // QT_CONFIG(accessibility)
        removeAsyncFilter->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "removeIconSmall", nullptr)));
#if QT_CONFIG(accessibility)
        moveAsyncFilterUp->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "MoveUp", nullptr));
#endif // QT_CONFIG(accessibility)
        moveAsyncFilterUp->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "upArrowIconSmall", nullptr)));
#if QT_CONFIG(accessibility)
        moveAsyncFilterDown->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "MoveDown", nullptr));
#endif // QT_CONFIG(accessibility)
        moveAsyncFilterDown->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "downArrowIconSmall", nullptr)));
        label_2->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.Filters.EffectFilters", nullptr));
#if QT_CONFIG(accessibility)
        addEffectFilter->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "Add", nullptr));
#endif // QT_CONFIG(accessibility)
        addEffectFilter->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "addIconSmall", nullptr)));
#if QT_CONFIG(accessibility)
        removeEffectFilter->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "Remove", nullptr));
#endif // QT_CONFIG(accessibility)
        removeEffectFilter->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "removeIconSmall", nullptr)));
#if QT_CONFIG(accessibility)
        moveEffectFilterUp->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "MoveUp", nullptr));
#endif // QT_CONFIG(accessibility)
        moveEffectFilterUp->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "upArrowIconSmall", nullptr)));
#if QT_CONFIG(accessibility)
        moveEffectFilterDown->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "MoveDown", nullptr));
#endif // QT_CONFIG(accessibility)
        moveEffectFilterDown->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "downArrowIconSmall", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicFilters: public Ui_OBSBasicFilters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICFILTERS_H
