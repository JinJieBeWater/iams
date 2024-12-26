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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mqttTest
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *temperatureKeyLabel;
    QLabel *temperatureKeyValue;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *humidityKeyLabel;
    QLabel *humidityKeyValue;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        temperatureKeyLabel = new QLabel(centralwidget);
        temperatureKeyLabel->setObjectName(QStringLiteral("temperatureKeyLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(temperatureKeyLabel->sizePolicy().hasHeightForWidth());
        temperatureKeyLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(temperatureKeyLabel);

        temperatureKeyValue = new QLabel(centralwidget);
        temperatureKeyValue->setObjectName(QStringLiteral("temperatureKeyValue"));
        sizePolicy.setHeightForWidth(temperatureKeyValue->sizePolicy().hasHeightForWidth());
        temperatureKeyValue->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(temperatureKeyValue);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        humidityKeyLabel = new QLabel(centralwidget);
        humidityKeyLabel->setObjectName(QStringLiteral("humidityKeyLabel"));

        horizontalLayout_2->addWidget(humidityKeyLabel);

        humidityKeyValue = new QLabel(centralwidget);
        humidityKeyValue->setObjectName(QStringLiteral("humidityKeyValue"));

        horizontalLayout_2->addWidget(humidityKeyValue);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

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
        temperatureKeyLabel->setText(QApplication::translate("mqttTest", "\346\270\251\345\272\246: ", 0));
        temperatureKeyValue->setText(QApplication::translate("mqttTest", "\347\251\272", 0));
        humidityKeyLabel->setText(QApplication::translate("mqttTest", "\346\271\277\345\272\246: ", 0));
        humidityKeyValue->setText(QApplication::translate("mqttTest", "\347\251\272", 0));
    } // retranslateUi

};

namespace Ui {
    class mqttTest: public Ui_mqttTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQTTTEST_H
