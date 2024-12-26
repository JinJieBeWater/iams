/********************************************************************************
** Form generated from reading UI file 'serialPortTest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORTTEST_H
#define UI_SERIALPORTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_serialPortTest
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *recvPlainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *sendLineEdit;
    QPushButton *sendButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *statusButton;
    QPushButton *setNameButton;
    QPushButton *getPwdButton;
    QPushButton *setPwdButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *serialPortTest)
    {
        if (serialPortTest->objectName().isEmpty())
            serialPortTest->setObjectName(QStringLiteral("serialPortTest"));
        serialPortTest->resize(800, 480);
        centralwidget = new QWidget(serialPortTest);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        recvPlainTextEdit = new QPlainTextEdit(centralwidget);
        recvPlainTextEdit->setObjectName(QStringLiteral("recvPlainTextEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recvPlainTextEdit->sizePolicy().hasHeightForWidth());
        recvPlainTextEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(recvPlainTextEdit, 2, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        sendLineEdit = new QLineEdit(centralwidget);
        sendLineEdit->setObjectName(QStringLiteral("sendLineEdit"));

        horizontalLayout_3->addWidget(sendLineEdit);

        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout_3->addWidget(sendButton);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        statusButton = new QPushButton(centralwidget);
        statusButton->setObjectName(QStringLiteral("statusButton"));

        horizontalLayout_2->addWidget(statusButton);

        setNameButton = new QPushButton(centralwidget);
        setNameButton->setObjectName(QStringLiteral("setNameButton"));

        horizontalLayout_2->addWidget(setNameButton);

        getPwdButton = new QPushButton(centralwidget);
        getPwdButton->setObjectName(QStringLiteral("getPwdButton"));

        horizontalLayout_2->addWidget(getPwdButton);

        setPwdButton = new QPushButton(centralwidget);
        setPwdButton->setObjectName(QStringLiteral("setPwdButton"));

        horizontalLayout_2->addWidget(setPwdButton);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(backButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        serialPortTest->setCentralWidget(centralwidget);
        menubar = new QMenuBar(serialPortTest);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        serialPortTest->setMenuBar(menubar);
        statusbar = new QStatusBar(serialPortTest);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        serialPortTest->setStatusBar(statusbar);

        retranslateUi(serialPortTest);

        QMetaObject::connectSlotsByName(serialPortTest);
    } // setupUi

    void retranslateUi(QMainWindow *serialPortTest)
    {
        serialPortTest->setWindowTitle(QApplication::translate("serialPortTest", "MainWindow", 0));
        sendButton->setText(QApplication::translate("serialPortTest", "\345\217\221\351\200\201", 0));
        statusButton->setText(QApplication::translate("serialPortTest", "\350\216\267\345\217\226\347\212\266\346\200\201", 0));
        setNameButton->setText(QApplication::translate("serialPortTest", "\350\256\276\347\275\256\345\220\215\345\255\227", 0));
        getPwdButton->setText(QApplication::translate("serialPortTest", "\350\216\267\345\217\226\345\257\206\347\240\201", 0));
        setPwdButton->setText(QApplication::translate("serialPortTest", "\350\256\276\347\275\256\345\257\206\347\240\201", 0));
        backButton->setText(QApplication::translate("serialPortTest", "back", 0));
    } // retranslateUi

};

namespace Ui {
    class serialPortTest: public Ui_serialPortTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORTTEST_H
