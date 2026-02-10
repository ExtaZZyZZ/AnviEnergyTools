/********************************************************************************
** Form generated from reading UI file 'pagewelcome.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEWELCOME_H
#define UI_PAGEWELCOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/imagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_PageWelcome
{
public:
    QVBoxLayout *verticalLayout;
    ImageWidget *bgWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *autoConnectButton;

    void setupUi(QWidget *PageWelcome)
    {
        if (PageWelcome->objectName().isEmpty())
            PageWelcome->setObjectName(QString::fromUtf8("PageWelcome"));
        PageWelcome->resize(760, 461);
        verticalLayout = new QVBoxLayout(PageWelcome);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bgWidget = new ImageWidget(PageWelcome);
        bgWidget->setObjectName(QString::fromUtf8("bgWidget"));
        verticalLayout_2 = new QVBoxLayout(bgWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 30, 30, 30);
        label = new QLabel(bgWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        verticalLayout_2->setStretch(0, 1);

        verticalLayout->addWidget(bgWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        autoConnectButton = new QPushButton(PageWelcome);
        autoConnectButton->setObjectName(QString::fromUtf8("autoConnectButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/Connected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        autoConnectButton->setIcon(icon);
        autoConnectButton->setIconSize(QSize(45, 45));

        horizontalLayout->addWidget(autoConnectButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PageWelcome);

        QMetaObject::connectSlotsByName(PageWelcome);
    } // setupUi

    void retranslateUi(QWidget *PageWelcome)
    {
        PageWelcome->setWindowTitle(QCoreApplication::translate("PageWelcome", "Form", nullptr));
        label->setText(QCoreApplication::translate("PageWelcome", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 AnviEnergy Tool</span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:14pt;\">\320\222\321\213 \320\264\320\276\320\273\320\266\320\275\321\213 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\277\320\273\320\260\321\202\321\203 AnviEnergy \321\201 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\275\321\213\320\274 \320\260\320\272\320\272\321\203\320\274\321\203\320\273\321\217\321\202\320\276\321\200\320\276\320\274 \320\264\320\276 \320\275\320\260\321\207\320\260\320\273\320\260 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\270\321\217.</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        autoConnectButton->setToolTip(QCoreApplication::translate("PageWelcome", "Automatically connect using the USB connection.", nullptr));
#endif // QT_CONFIG(tooltip)
        autoConnectButton->setText(QCoreApplication::translate("PageWelcome", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageWelcome: public Ui_PageWelcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEWELCOME_H
