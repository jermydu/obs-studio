/********************************************************************************
** Form generated from reading UI file 'image-source-toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_2D_SOURCE_2D_TOOLBAR_H
#define UI_IMAGE_2D_SOURCE_2D_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageSourceToolbar
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *pathLabel;
    QLineEdit *path;
    QPushButton *browse;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ImageSourceToolbar)
    {
        if (ImageSourceToolbar->objectName().isEmpty())
            ImageSourceToolbar->setObjectName(QString::fromUtf8("ImageSourceToolbar"));
        ImageSourceToolbar->resize(580, 22);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageSourceToolbar->sizePolicy().hasHeightForWidth());
        ImageSourceToolbar->setSizePolicy(sizePolicy);
        ImageSourceToolbar->setMinimumSize(QSize(0, 22));
        ImageSourceToolbar->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(ImageSourceToolbar);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pathLabel = new QLabel(ImageSourceToolbar);
        pathLabel->setObjectName(QString::fromUtf8("pathLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pathLabel->sizePolicy().hasHeightForWidth());
        pathLabel->setSizePolicy(sizePolicy1);
        pathLabel->setMinimumSize(QSize(0, 22));
        pathLabel->setText(QString::fromUtf8("Image File"));

        horizontalLayout->addWidget(pathLabel);

        path = new QLineEdit(ImageSourceToolbar);
        path->setObjectName(QString::fromUtf8("path"));
        path->setMinimumSize(QSize(100, 22));
        path->setMaximumSize(QSize(400, 16777215));
        path->setText(QString::fromUtf8(""));
        path->setReadOnly(true);

        horizontalLayout->addWidget(path);

        browse = new QPushButton(ImageSourceToolbar);
        browse->setObjectName(QString::fromUtf8("browse"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(browse->sizePolicy().hasHeightForWidth());
        browse->setSizePolicy(sizePolicy2);
        browse->setMinimumSize(QSize(0, 22));

        horizontalLayout->addWidget(browse);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(1, 1);
#if QT_CONFIG(shortcut)
        pathLabel->setBuddy(path);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ImageSourceToolbar);

        QMetaObject::connectSlotsByName(ImageSourceToolbar);
    } // setupUi

    void retranslateUi(QWidget *ImageSourceToolbar)
    {
        browse->setText(QCoreApplication::translate("ImageSourceToolbar", "Browse", nullptr));
        (void)ImageSourceToolbar;
    } // retranslateUi

};

namespace Ui {
    class ImageSourceToolbar: public Ui_ImageSourceToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_2D_SOURCE_2D_TOOLBAR_H
