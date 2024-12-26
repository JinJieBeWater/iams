/********************************************************************************
** Form generated from reading UI file 'mqttTest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MQTTTEST_H
#define UI_MQTTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mqttTest
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mqttTest)
    {
        if (mqttTest->objectName().isEmpty())
            mqttTest->setObjectName(QStringLiteral("mqttTest"));
        mqttTest->resize(800, 480);
        centralwidget = new QWidget(mqttTest);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mqttTest->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mqttTest);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        mqttTest->setMenuBar(menubar);
        statusbar = new QStatusBar(mqttTest);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        mqttTest->setStatusBar(statusbar);

        retranslateUi(mqttTest);

        QMetaObject::connectSlotsByName(mqttTest);
    } // setupUi

    void retranslateUi(QMainWindow *mqttTest)
    {
        mqttTest->setWindowTitle(QApplication::translate("mqttTest", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class mqttTest: public Ui_mqttTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQTTTEST_H
