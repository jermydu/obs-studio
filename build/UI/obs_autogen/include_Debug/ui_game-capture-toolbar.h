/********************************************************************************
** Form generated from reading UI file 'game-capture-toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_2D_CAPTURE_2D_TOOLBAR_H
#define UI_GAME_2D_CAPTURE_2D_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameCaptureToolbar
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *modeLabel;
    QComboBox *mode;
    QLabel *windowLabel;
    QComboBox *window;
    QSpacerItem *empty;

    void setupUi(QWidget *GameCaptureToolbar)
    {
        if (GameCaptureToolbar->objectName().isEmpty())
            GameCaptureToolbar->setObjectName(QString::fromUtf8("GameCaptureToolbar"));
        GameCaptureToolbar->resize(650, 24);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameCaptureToolbar->sizePolicy().hasHeightForWidth());
        GameCaptureToolbar->setSizePolicy(sizePolicy);
        GameCaptureToolbar->setMinimumSize(QSize(0, 22));
        GameCaptureToolbar->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(GameCaptureToolbar);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        modeLabel = new QLabel(GameCaptureToolbar);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modeLabel->sizePolicy().hasHeightForWidth());
        modeLabel->setSizePolicy(sizePolicy1);
        modeLabel->setMinimumSize(QSize(0, 22));
        modeLabel->setText(QString::fromUtf8("Mode"));

        horizontalLayout->addWidget(modeLabel);

        mode = new QComboBox(GameCaptureToolbar);
        mode->setObjectName(QString::fromUtf8("mode"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mode->sizePolicy().hasHeightForWidth());
        mode->setSizePolicy(sizePolicy2);
        mode->setMinimumSize(QSize(120, 22));
        mode->setMaximumSize(QSize(400, 16777215));
        mode->setCurrentText(QString::fromUtf8(""));

        horizontalLayout->addWidget(mode);

        windowLabel = new QLabel(GameCaptureToolbar);
        windowLabel->setObjectName(QString::fromUtf8("windowLabel"));
        sizePolicy1.setHeightForWidth(windowLabel->sizePolicy().hasHeightForWidth());
        windowLabel->setSizePolicy(sizePolicy1);
        windowLabel->setMinimumSize(QSize(0, 22));
        windowLabel->setText(QString::fromUtf8("Window"));

        horizontalLayout->addWidget(windowLabel);

        window = new QComboBox(GameCaptureToolbar);
        window->setObjectName(QString::fromUtf8("window"));
        sizePolicy2.setHeightForWidth(window->sizePolicy().hasHeightForWidth());
        window->setSizePolicy(sizePolicy2);
        window->setMinimumSize(QSize(120, 22));
        window->setMaximumSize(QSize(600, 16777215));
        window->setCurrentText(QString::fromUtf8(""));
        window->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        horizontalLayout->addWidget(window);

        empty = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(empty);

        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(3, 5);
#if QT_CONFIG(shortcut)
        modeLabel->setBuddy(mode);
        windowLabel->setBuddy(window);
#endif // QT_CONFIG(shortcut)

        retranslateUi(GameCaptureToolbar);

        QMetaObject::connectSlotsByName(GameCaptureToolbar);
    } // setupUi

    void retranslateUi(QWidget *GameCaptureToolbar)
    {
        (void)GameCaptureToolbar;
    } // retranslateUi

};

namespace Ui {
    class GameCaptureToolbar: public Ui_GameCaptureToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_2D_CAPTURE_2D_TOOLBAR_H
