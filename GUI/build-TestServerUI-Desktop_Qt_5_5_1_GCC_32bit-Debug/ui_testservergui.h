/********************************************************************************
** Form generated from reading UI file 'testservergui.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSERVERGUI_H
#define UI_TESTSERVERGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestServerGUI
{
public:
    QWidget *centralWidget;
    QPushButton *tbServerConnect;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestServerGUI)
    {
        if (TestServerGUI->objectName().isEmpty())
            TestServerGUI->setObjectName(QStringLiteral("TestServerGUI"));
        TestServerGUI->resize(786, 397);
        centralWidget = new QWidget(TestServerGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tbServerConnect = new QPushButton(centralWidget);
        tbServerConnect->setObjectName(QStringLiteral("tbServerConnect"));
        tbServerConnect->setGeometry(QRect(10, 10, 141, 27));
        TestServerGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestServerGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 786, 25));
        TestServerGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestServerGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TestServerGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestServerGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TestServerGUI->setStatusBar(statusBar);

        retranslateUi(TestServerGUI);

        QMetaObject::connectSlotsByName(TestServerGUI);
    } // setupUi

    void retranslateUi(QMainWindow *TestServerGUI)
    {
        TestServerGUI->setWindowTitle(QApplication::translate("TestServerGUI", "TestServerGUI", 0));
        tbServerConnect->setText(QApplication::translate("TestServerGUI", "Connect", 0));
    } // retranslateUi

};

namespace Ui {
    class TestServerGUI: public Ui_TestServerGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSERVERGUI_H
