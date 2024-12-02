/********************************************************************************
** Form generated from reading UI file 'nav.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAV_H
#define UI_NAV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nav
{
public:
    QFrame *navFrame;
    QPushButton *welcome;
    QPushButton *locale;
    QPushButton *diskSetup;
    QPushButton *users;
    QPushButton *network;
    QPushButton *packages;
    QPushButton *install;

    void setupUi(QWidget *Nav)
    {
        if (Nav->objectName().isEmpty())
            Nav->setObjectName(QString::fromUtf8("Nav"));
        Nav->resize(200, 800);
        navFrame = new QFrame(Nav);
        navFrame->setObjectName(QString::fromUtf8("navFrame"));
        welcome = new QPushButton(navFrame);
        welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->setGeometry(QRect(0, 65, 200, 50));
        locale = new QPushButton(navFrame);
        locale->setObjectName(QString::fromUtf8("locale"));
        locale->setGeometry(QRect(0, 165, 200, 50));
        diskSetup = new QPushButton(navFrame);
        diskSetup->setObjectName(QString::fromUtf8("diskSetup"));
        diskSetup->setGeometry(QRect(0, 265, 200, 50));
        users = new QPushButton(navFrame);
        users->setObjectName(QString::fromUtf8("users"));
        users->setGeometry(QRect(0, 365, 200, 50));
        network = new QPushButton(navFrame);
        network->setObjectName(QString::fromUtf8("network"));
        network->setGeometry(QRect(0, 465, 200, 50));
        packages = new QPushButton(navFrame);
        packages->setObjectName(QString::fromUtf8("packages"));
        packages->setGeometry(QRect(0, 565, 200, 50));
        install = new QPushButton(navFrame);
        install->setObjectName(QString::fromUtf8("install"));
        install->setGeometry(QRect(0, 665, 200, 50));

        retranslateUi(Nav);

        QMetaObject::connectSlotsByName(Nav);
    } // setupUi

    void retranslateUi(QWidget *Nav)
    {
        welcome->setText(QCoreApplication::translate("Nav", "Welcome", nullptr));
        locale->setText(QCoreApplication::translate("Nav", "Locale", nullptr));
        diskSetup->setText(QCoreApplication::translate("Nav", "Disk Setup", nullptr));
        users->setText(QCoreApplication::translate("Nav", "Users", nullptr));
        network->setText(QCoreApplication::translate("Nav", "Network", nullptr));
        packages->setText(QCoreApplication::translate("Nav", "Packages", nullptr));
        install->setText(QCoreApplication::translate("Nav", "Install", nullptr));
        (void)Nav;
    } // retranslateUi

};

namespace Ui {
    class Nav: public Ui_Nav {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAV_H
