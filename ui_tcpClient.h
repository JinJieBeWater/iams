/********************************************************************************
** Form generated from reading UI file 'tcpClient.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcpClient
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *addressEdit;
    QLineEdit *portEdit;
    QPushButton *connectButton;
    QLineEdit *sendEdit;
    QHBoxLayout *operation;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;
    QPlainTextEdit *recvPlainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tcpClient)
    {
        if (tcpClient->objectName().isEmpty())
            tcpClient->setObjectName(QStringLiteral("tcpClient"));
        tcpClient->resize(800, 480);
        centralwidget = new QWidget(tcpClient);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(backButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addressEdit = new QLineEdit(centralwidget);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addressEdit->sizePolicy().hasHeightForWidth());
        addressEdit->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(addressEdit);

        portEdit = new QLineEdit(centralwidget);
        portEdit->setObjectName(QStringLiteral("portEdit"));
        sizePolicy2.setHeightForWidth(portEdit->sizePolicy().hasHeightForWidth());
        portEdit->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(portEdit);

        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        sizePolicy2.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(connectButton);


        verticalLayout->addLayout(horizontalLayout);

        sendEdit = new QLineEdit(centralwidget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sendEdit->sizePolicy().hasHeightForWidth());
        sendEdit->setSizePolicy(sizePolicy3);
        sendEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(sendEdit);

        operation = new QHBoxLayout();
        operation->setObjectName(QStringLiteral("operation"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        operation->addItem(horizontalSpacer_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        operation->addItem(horizontalSpacer);

        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy4);

        operation->addWidget(sendButton);


        verticalLayout->addLayout(operation);

        recvPlainTextEdit = new QPlainTextEdit(centralwidget);
        recvPlainTextEdit->setObjectName(QStringLiteral("recvPlainTextEdit"));
        recvPlainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(recvPlainTextEdit);

        tcpClient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tcpClient);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        tcpClient->setMenuBar(menubar);
        statusbar = new QStatusBar(tcpClient);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        tcpClient->setStatusBar(statusbar);

        retranslateUi(tcpClient);

        QMetaObject::connectSlotsByName(tcpClient);
    } // setupUi

    void retranslateUi(QMainWindow *tcpClient)
    {
        tcpClient->setWindowTitle(QApplication::translate("tcpClient", "tcp\345\256\242\346\210\267\347\253\257", 0));
        backButton->setText(QApplication::translate("tcpClient", "back", 0));
        addressEdit->setPlaceholderText(QApplication::translate("tcpClient", "\350\257\267\350\276\223\345\205\245\346\255\243\347\241\256ip\345\234\260\345\235\200", 0));
        portEdit->setPlaceholderText(QApplication::translate("tcpClient", "\350\257\267\350\276\223\345\205\245\346\255\243\347\241\256\347\253\257\345\217\243\345\234\260\345\235\200", 0));
        connectButton->setText(QApplication::translate("tcpClient", "connect", 0));
        sendEdit->setPlaceholderText(QApplication::translate("tcpClient", "\350\257\267\350\276\223\345\205\245\345\276\205\345\217\221\351\200\201\347\232\204\346\226\207\346\234\254", 0));
        sendButton->setText(QApplication::translate("tcpClient", "sendButton", 0));
        recvPlainTextEdit->setPlainText(QString());
        recvPlainTextEdit->setPlaceholderText(QApplication::translate("tcpClient", "\346\230\276\347\244\272\346\234\215\345\212\241\347\253\257\345\217\221\351\200\201\345\206\205\345\256\271", 0));
    } // retranslateUi

};

namespace Ui {
    class tcpClient: public Ui_tcpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
