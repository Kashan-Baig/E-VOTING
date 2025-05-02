/********************************************************************************
** Form generated from reading UI file 'After_voter_login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFTER_VOTER_LOGIN_H
#define UI_AFTER_VOTER_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *Name;
    QLabel *Cnic;
    QLabel *Votestatus;
    QPushButton *Votenow_btn;
    QPushButton *Logout_btn;
    QLabel *Title;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(550, 370);
        QFont font;
        font.setPointSize(20);
        Login->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(Login);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(26);
        gridLayout->setContentsMargins(44, 1, 37, 7);
        Name = new QLabel(Login);
        Name->setObjectName("Name");

        gridLayout->addWidget(Name, 1, 0, 1, 1);

        Cnic = new QLabel(Login);
        Cnic->setObjectName("Cnic");

        gridLayout->addWidget(Cnic, 2, 0, 1, 1);

        Votestatus = new QLabel(Login);
        Votestatus->setObjectName("Votestatus");

        gridLayout->addWidget(Votestatus, 3, 0, 1, 1);

        Votenow_btn = new QPushButton(Login);
        Votenow_btn->setObjectName("Votenow_btn");
        Votenow_btn->setBaseSize(QSize(8, 0));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        Votenow_btn->setFont(font1);
        Votenow_btn->setStyleSheet(QString::fromUtf8("/* Normal + hover + pressed directly together */\n"
"#Votenow_btn {\n"
"    background-color: #1a3e8c;   /* Blue */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px 20px;\n"
"    margin: 15px 10px;\n"
"    min-width: 100px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"#Votenow_btn:hover {\n"
"    background-color: #303f9f;   /* Darker blue on hover */\n"
"    color: white;\n"
"}\n"
"\n"
"/* Pressed effect */\n"
"#Votenow_btn:pressed {\n"
"    background-color: #0d47a1;   /* Even darker blue when pressed */\n"
"}\n"
""));

        gridLayout->addWidget(Votenow_btn, 4, 0, 1, 1);

        Logout_btn = new QPushButton(Login);
        Logout_btn->setObjectName("Logout_btn");
        Logout_btn->setFont(font1);
        Logout_btn->setStyleSheet(QString::fromUtf8("#Logout_btn {\n"
"    background-color: rgb(229, 62, 62);  /* Bright red */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px 20px;\n"
"    margin: 15px 10px;\n"
"    min-width: 100px;\n"
"}\n"
"\n"
"/* Hover effect (slightly darker red) */\n"
"#Logout_btn:hover {\n"
"    background-color: #c53030;  /* Darker red on hover */\n"
"    color: white;\n"
"}\n"
"\n"
"/* Optional: Pressed effect (even darker) */\n"
"#Logout_btn:pressed {\n"
"    background-color: #9b2c2c;\n"
"}\n"
""));

        gridLayout->addWidget(Logout_btn, 4, 1, 1, 1);

        Title = new QLabel(Login);
        Title->setObjectName("Title");
        Title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(Title, 0, 0, 1, 2);


        horizontalLayout_2->addLayout(gridLayout);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        Name->setText(QCoreApplication::translate("Login", "Name", nullptr));
        Cnic->setText(QCoreApplication::translate("Login", "CNIC", nullptr));
        Votestatus->setText(QCoreApplication::translate("Login", "Voting Status", nullptr));
        Votenow_btn->setText(QCoreApplication::translate("Login", "Vote Now", nullptr));
        Logout_btn->setText(QCoreApplication::translate("Login", "Logout", nullptr));
        Title->setText(QCoreApplication::translate("Login", "Welcome ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFTER_VOTER_LOGIN_H
