/********************************************************************************
** Form generated from reading UI file 'iams.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IAMS_H
#define UI_IAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_iams
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *header;
    QSpacerItem *horizontalSpacer;
    QLabel *titleIcon;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *username;
    QSpacerItem *horizontalSpacer_3;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *password;
    QSpacerItem *horizontalSpacer_4;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *operation;
    QLabel *lildogLabel;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *cancel;
    QPushButton *login;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout;
    QComboBox *protocolComboBox;
    QPushButton *goToTestButton;
    QMenuBar *menubar;
    QMenu *menuiams;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *iams)
    {
        if (iams->objectName().isEmpty())
            iams->setObjectName(QStringLiteral("iams"));
        iams->resize(800, 480);
        iams->setMaximumSize(QSize(800, 480));
        iams->setBaseSize(QSize(800, 480));
        iams->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(iams);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMaximumSize(QSize(800, 480));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        centralwidget->setAutoFillBackground(false);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        header = new QHBoxLayout();
        header->setObjectName(QStringLiteral("header"));
        header->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        header->addItem(horizontalSpacer);

        titleIcon = new QLabel(centralwidget);
        titleIcon->setObjectName(QStringLiteral("titleIcon"));
        titleIcon->setMaximumSize(QSize(68, 80));
        QFont font;
        font.setPointSize(20);
        titleIcon->setFont(font);
        titleIcon->setAutoFillBackground(false);
        titleIcon->setPixmap(QPixmap(QString::fromUtf8(":/pic/PepiconsPrintCellphoneEye.png")));
        titleIcon->setScaledContents(true);

        header->addWidget(titleIcon);

        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setFont(font);

        header->addWidget(titleLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        header->addItem(horizontalSpacer_2);


        gridLayout->addLayout(header, 0, 0, 1, 2);

        username = new QHBoxLayout();
        username->setObjectName(QStringLiteral("username"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        username->addItem(horizontalSpacer_3);

        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setMinimumSize(QSize(40, 0));

        username->addWidget(usernameLabel);

        usernameLineEdit = new QLineEdit(centralwidget);
        usernameLineEdit->setObjectName(QStringLiteral("usernameLineEdit"));
        usernameLineEdit->setEchoMode(QLineEdit::Normal);

        username->addWidget(usernameLineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        username->addItem(horizontalSpacer_5);


        gridLayout->addLayout(username, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        password = new QHBoxLayout();
        password->setObjectName(QStringLiteral("password"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        password->addItem(horizontalSpacer_4);

        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setMinimumSize(QSize(40, 0));

        password->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        password->addWidget(passwordLineEdit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        password->addItem(horizontalSpacer_6);


        gridLayout->addLayout(password, 3, 0, 1, 2);

        operation = new QHBoxLayout();
        operation->setSpacing(6);
        operation->setObjectName(QStringLiteral("operation"));
        lildogLabel = new QLabel(centralwidget);
        lildogLabel->setObjectName(QStringLiteral("lildogLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lildogLabel->sizePolicy().hasHeightForWidth());
        lildogLabel->setSizePolicy(sizePolicy1);
        lildogLabel->setMaximumSize(QSize(140, 140));
        lildogLabel->setScaledContents(true);

        operation->addWidget(lildogLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        operation->addItem(horizontalSpacer_7);

        cancel = new QPushButton(centralwidget);
        cancel->setObjectName(QStringLiteral("cancel"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy2);

        operation->addWidget(cancel);

        login = new QPushButton(centralwidget);
        login->setObjectName(QStringLiteral("login"));
        sizePolicy2.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy2);

        operation->addWidget(login);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        operation->addItem(horizontalSpacer_8);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(140, 140));

        operation->addWidget(label);


        gridLayout->addLayout(operation, 4, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        protocolComboBox = new QComboBox(centralwidget);
        protocolComboBox->setObjectName(QStringLiteral("protocolComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(protocolComboBox->sizePolicy().hasHeightForWidth());
        protocolComboBox->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(protocolComboBox);

        goToTestButton = new QPushButton(centralwidget);
        goToTestButton->setObjectName(QStringLiteral("goToTestButton"));
        sizePolicy3.setHeightForWidth(goToTestButton->sizePolicy().hasHeightForWidth());
        goToTestButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(goToTestButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);

        iams->setCentralWidget(centralwidget);
        menubar = new QMenuBar(iams);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuiams = new QMenu(menubar);
        menuiams->setObjectName(QStringLiteral("menuiams"));
        menuiams->setEnabled(true);
        iams->setMenuBar(menubar);
        statusbar = new QStatusBar(iams);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        iams->setStatusBar(statusbar);

        menubar->addAction(menuiams->menuAction());

        retranslateUi(iams);

        protocolComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(iams);
    } // setupUi

    void retranslateUi(QMainWindow *iams)
    {
        iams->setWindowTitle(QApplication::translate("iams", "\346\231\272\346\205\247\345\206\234\344\270\232\347\233\221\346\216\247\347\263\273\347\273\237", 0));
        titleIcon->setText(QString());
        titleLabel->setText(QApplication::translate("iams", "\346\231\272\350\203\275\345\206\234\344\270\232\347\233\221\346\216\247\347\263\273\347\273\237", 0));
        usernameLabel->setText(QApplication::translate("iams", "\347\224\250\346\210\267\345\220\215", 0));
        passwordLabel->setText(QApplication::translate("iams", "\345\257\206\347\240\201", 0));
        lildogLabel->setText(QString());
        cancel->setText(QApplication::translate("iams", "\345\217\226\346\266\210", 0));
        login->setText(QApplication::translate("iams", "\347\231\273\345\275\225", 0));
        label->setText(QString());
        goToTestButton->setText(QApplication::translate("iams", "\345\211\215\345\276\200\346\265\213\350\257\225", 0));
        menuiams->setTitle(QApplication::translate("iams", "\350\256\276\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class iams: public Ui_iams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IAMS_H
