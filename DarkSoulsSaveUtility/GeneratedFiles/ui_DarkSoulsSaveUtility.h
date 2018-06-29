/********************************************************************************
** Form generated from reading UI file 'DarkSoulsSaveUtility.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DARKSOULSSAVEUTILITY_H
#define UI_DARKSOULSSAVEUTILITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DarkSoulsSaveUtilityClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DarkSoulsSaveUtilityClass)
    {
        if (DarkSoulsSaveUtilityClass->objectName().isEmpty())
            DarkSoulsSaveUtilityClass->setObjectName(QStringLiteral("DarkSoulsSaveUtilityClass"));
        DarkSoulsSaveUtilityClass->resize(600, 400);
        menuBar = new QMenuBar(DarkSoulsSaveUtilityClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        DarkSoulsSaveUtilityClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DarkSoulsSaveUtilityClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DarkSoulsSaveUtilityClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DarkSoulsSaveUtilityClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DarkSoulsSaveUtilityClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DarkSoulsSaveUtilityClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DarkSoulsSaveUtilityClass->setStatusBar(statusBar);

        retranslateUi(DarkSoulsSaveUtilityClass);

        QMetaObject::connectSlotsByName(DarkSoulsSaveUtilityClass);
    } // setupUi

    void retranslateUi(QMainWindow *DarkSoulsSaveUtilityClass)
    {
        DarkSoulsSaveUtilityClass->setWindowTitle(QApplication::translate("DarkSoulsSaveUtilityClass", "DarkSoulsSaveUtility", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DarkSoulsSaveUtilityClass: public Ui_DarkSoulsSaveUtilityClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DARKSOULSSAVEUTILITY_H
