/********************************************************************************
** Form generated from reading UI file 'httpTest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTTPTEST_H
#define UI_HTTPTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_httpTest
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *urlEdit;
    QPushButton *requestButton;
    QPushButton *showButton;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *showAreaLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *httpTest)
    {
        if (httpTest->objectName().isEmpty())
            httpTest->setObjectName(QStringLiteral("httpTest"));
        httpTest->resize(800, 480);
        httpTest->setMaximumSize(QSize(800, 480));
        centralwidget = new QWidget(httpTest);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(backButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        urlEdit = new QLineEdit(centralwidget);
        urlEdit->setObjectName(QStringLiteral("urlEdit"));

        horizontalLayout->addWidget(urlEdit);

        requestButton = new QPushButton(centralwidget);
        requestButton->setObjectName(QStringLiteral("requestButton"));

        horizontalLayout->addWidget(requestButton);

        showButton = new QPushButton(centralwidget);
        showButton->setObjectName(QStringLiteral("showButton"));

        horizontalLayout->addWidget(showButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        showAreaLabel = new QLabel(centralwidget);
        showAreaLabel->setObjectName(QStringLiteral("showAreaLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(showAreaLabel->sizePolicy().hasHeightForWidth());
        showAreaLabel->setSizePolicy(sizePolicy1);
        showAreaLabel->setStyleSheet(QLatin1String("background-color: rgb(85, 255, 255);\n"
"background-color: rgb(240, 240, 240);"));
        showAreaLabel->setScaledContents(false);
        showAreaLabel->setAlignment(Qt::AlignCenter);
        showAreaLabel->setWordWrap(true);

        verticalLayout->addWidget(showAreaLabel);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        httpTest->setCentralWidget(centralwidget);
        menubar = new QMenuBar(httpTest);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        httpTest->setMenuBar(menubar);
        statusbar = new QStatusBar(httpTest);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        httpTest->setStatusBar(statusbar);

        retranslateUi(httpTest);

        QMetaObject::connectSlotsByName(httpTest);
    } // setupUi

    void retranslateUi(QMainWindow *httpTest)
    {
        httpTest->setWindowTitle(QApplication::translate("httpTest", "MainWindow", 0));
        backButton->setText(QApplication::translate("httpTest", "back", 0));
        urlEdit->setText(QApplication::translate("httpTest", "http://www.wxappclub.com/upload/column/c413eaf4-bfad-43bd-820b-538d5c7dcfd0.png", 0));
        requestButton->setText(QApplication::translate("httpTest", "request", 0));
        showButton->setText(QApplication::translate("httpTest", "show", 0));
        label_2->setText(QApplication::translate("httpTest", "\345\261\225\347\244\272\345\214\272", 0));
        showAreaLabel->setText(QApplication::translate("httpTest", "content show area", 0));
    } // retranslateUi

};

namespace Ui {
    class httpTest: public Ui_httpTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTTPTEST_H
