/********************************************************************************
** Form generated from reading UI file 'tcpServer.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

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

class Ui_tcpServer
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *back;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *listen;
    QComboBox *addressComboBox;
    QLineEdit *portEdit;
    QPushButton *listenButton;
    QPlainTextEdit *sendPlainTextEdit;
    QHBoxLayout *send;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;
    QPlainTextEdit *recvTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tcpServer)
    {
        if (tcpServer->objectName().isEmpty())
            tcpServer->setObjectName(QStringLiteral("tcpServer"));
        tcpServer->resize(800, 480);
        centralwidget = new QWidget(tcpServer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        back = new QHBoxLayout();
        back->setObjectName(QStringLiteral("back"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);

        back->addWidget(backButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        back->addItem(horizontalSpacer_3);


        gridLayout->addLayout(back, 0, 0, 1, 1);

        listen = new QHBoxLayout();
        listen->setObjectName(QStringLiteral("listen"));
        addressComboBox = new QComboBox(centralwidget);
        addressComboBox->setObjectName(QStringLiteral("addressComboBox"));

        listen->addWidget(addressComboBox);

        portEdit = new QLineEdit(centralwidget);
        portEdit->setObjectName(QStringLiteral("portEdit"));

        listen->addWidget(portEdit);

        listenButton = new QPushButton(centralwidget);
        listenButton->setObjectName(QStringLiteral("listenButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listenButton->sizePolicy().hasHeightForWidth());
        listenButton->setSizePolicy(sizePolicy1);

        listen->addWidget(listenButton);


        gridLayout->addLayout(listen, 1, 0, 1, 1);

        sendPlainTextEdit = new QPlainTextEdit(centralwidget);
        sendPlainTextEdit->setObjectName(QStringLiteral("sendPlainTextEdit"));
        sendPlainTextEdit->setReadOnly(false);

        gridLayout->addWidget(sendPlainTextEdit, 2, 0, 1, 1);

        send = new QHBoxLayout();
        send->setObjectName(QStringLiteral("send"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        send->addItem(horizontalSpacer_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        send->addItem(horizontalSpacer);

        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        send->addWidget(sendButton);


        gridLayout->addLayout(send, 3, 0, 1, 1);

        recvTextEdit = new QPlainTextEdit(centralwidget);
        recvTextEdit->setObjectName(QStringLiteral("recvTextEdit"));

        gridLayout->addWidget(recvTextEdit, 4, 0, 1, 1);

        tcpServer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tcpServer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        tcpServer->setMenuBar(menubar);
        statusbar = new QStatusBar(tcpServer);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        tcpServer->setStatusBar(statusbar);

        retranslateUi(tcpServer);

        QMetaObject::connectSlotsByName(tcpServer);
    } // setupUi

    void retranslateUi(QMainWindow *tcpServer)
    {
        tcpServer->setWindowTitle(QApplication::translate("tcpServer", "tcp\346\234\215\345\212\241\347\253\257", 0));
        backButton->setText(QApplication::translate("tcpServer", "back", 0));
        portEdit->setText(QApplication::translate("tcpServer", "3777", 0));
        listenButton->setText(QApplication::translate("tcpServer", "listen", 0));
        sendPlainTextEdit->setPlaceholderText(QApplication::translate("tcpServer", "\350\276\223\345\205\245\345\276\205\345\217\221\351\200\201\347\232\204\345\206\205\345\256\271", 0));
        sendButton->setText(QApplication::translate("tcpServer", "send", 0));
        recvTextEdit->setPlaceholderText(QApplication::translate("tcpServer", "\346\230\276\347\244\272\346\216\245\345\217\227\345\210\260\347\232\204\345\206\205\345\256\271", 0));
    } // retranslateUi

};

namespace Ui {
    class tcpServer: public Ui_tcpServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
