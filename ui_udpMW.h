/********************************************************************************
** Form generated from reading UI file 'udpMW.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPMW_H
#define UI_UDPMW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_udpMW
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *header;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *baseConfig;
    QComboBox *addressComboBox;
    QLineEdit *portEdit;
    QPushButton *bindButton;
    QHBoxLayout *sendConfig;
    QLineEdit *sendAdderssEdit;
    QLineEdit *sendPortEdit;
    QPushButton *sendButton;
    QPlainTextEdit *recvPlainTextEdit;
    QLineEdit *sendEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *udpMW)
    {
        if (udpMW->objectName().isEmpty())
            udpMW->setObjectName(QStringLiteral("udpMW"));
        udpMW->resize(800, 480);
        centralwidget = new QWidget(udpMW);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        header = new QHBoxLayout();
        header->setObjectName(QStringLiteral("header"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);

        header->addWidget(backButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        header->addItem(horizontalSpacer_2);


        gridLayout->addLayout(header, 0, 0, 1, 1);

        baseConfig = new QHBoxLayout();
        baseConfig->setObjectName(QStringLiteral("baseConfig"));
        addressComboBox = new QComboBox(centralwidget);
        addressComboBox->setObjectName(QStringLiteral("addressComboBox"));

        baseConfig->addWidget(addressComboBox);

        portEdit = new QLineEdit(centralwidget);
        portEdit->setObjectName(QStringLiteral("portEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(portEdit->sizePolicy().hasHeightForWidth());
        portEdit->setSizePolicy(sizePolicy1);

        baseConfig->addWidget(portEdit);

        bindButton = new QPushButton(centralwidget);
        bindButton->setObjectName(QStringLiteral("bindButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bindButton->sizePolicy().hasHeightForWidth());
        bindButton->setSizePolicy(sizePolicy2);

        baseConfig->addWidget(bindButton);


        gridLayout->addLayout(baseConfig, 1, 0, 1, 1);

        sendConfig = new QHBoxLayout();
        sendConfig->setObjectName(QStringLiteral("sendConfig"));
        sendAdderssEdit = new QLineEdit(centralwidget);
        sendAdderssEdit->setObjectName(QStringLiteral("sendAdderssEdit"));

        sendConfig->addWidget(sendAdderssEdit);

        sendPortEdit = new QLineEdit(centralwidget);
        sendPortEdit->setObjectName(QStringLiteral("sendPortEdit"));

        sendConfig->addWidget(sendPortEdit);

        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy3);

        sendConfig->addWidget(sendButton);


        gridLayout->addLayout(sendConfig, 4, 0, 1, 1);

        recvPlainTextEdit = new QPlainTextEdit(centralwidget);
        recvPlainTextEdit->setObjectName(QStringLiteral("recvPlainTextEdit"));
        recvPlainTextEdit->setReadOnly(true);

        gridLayout->addWidget(recvPlainTextEdit, 2, 0, 1, 1);

        sendEdit = new QLineEdit(centralwidget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(sendEdit->sizePolicy().hasHeightForWidth());
        sendEdit->setSizePolicy(sizePolicy4);
        sendEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(sendEdit, 5, 0, 1, 1);

        udpMW->setCentralWidget(centralwidget);
        menubar = new QMenuBar(udpMW);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        udpMW->setMenuBar(menubar);
        statusbar = new QStatusBar(udpMW);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        udpMW->setStatusBar(statusbar);

        retranslateUi(udpMW);

        QMetaObject::connectSlotsByName(udpMW);
    } // setupUi

    void retranslateUi(QMainWindow *udpMW)
    {
        udpMW->setWindowTitle(QApplication::translate("udpMW", "MainWindow", 0));
        backButton->setText(QApplication::translate("udpMW", "back", 0));
        portEdit->setText(QApplication::translate("udpMW", "55555", 0));
        portEdit->setPlaceholderText(QApplication::translate("udpMW", "\350\257\267\350\276\223\345\205\245\346\255\243\347\241\256\347\253\257\345\217\243\345\234\260\345\235\200", 0));
        bindButton->setText(QApplication::translate("udpMW", "bind", 0));
        sendAdderssEdit->setText(QApplication::translate("udpMW", "192.168.0.167", 0));
        sendAdderssEdit->setPlaceholderText(QApplication::translate("udpMW", "\350\257\267\350\276\223\345\205\245\350\246\201\345\217\221\351\200\201\347\232\204\345\234\260\345\235\200", 0));
        sendPortEdit->setText(QApplication::translate("udpMW", "50000", 0));
        sendPortEdit->setPlaceholderText(QApplication::translate("udpMW", "\350\257\267\350\276\223\345\205\245\350\246\201\345\217\221\351\200\201\347\232\204\347\253\257\345\217\243", 0));
        sendButton->setText(QApplication::translate("udpMW", "sendButton", 0));
        recvPlainTextEdit->setPlainText(QApplication::translate("udpMW", "\346\230\276\347\244\272\346\234\215\345\212\241\347\253\257\345\217\221\351\200\201\345\206\205\345\256\271", 0));
        recvPlainTextEdit->setPlaceholderText(QApplication::translate("udpMW", "\346\230\276\347\244\272\346\234\215\345\212\241\347\253\257\345\217\221\351\200\201\345\206\205\345\256\271", 0));
        sendEdit->setText(QApplication::translate("udpMW", "Hi JinJieBeWater", 0));
        sendEdit->setPlaceholderText(QApplication::translate("udpMW", "\350\257\267\350\276\223\345\205\245\345\276\205\345\217\221\351\200\201\347\232\204\346\226\207\346\234\254", 0));
    } // retranslateUi

};

namespace Ui {
    class udpMW: public Ui_udpMW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPMW_H
