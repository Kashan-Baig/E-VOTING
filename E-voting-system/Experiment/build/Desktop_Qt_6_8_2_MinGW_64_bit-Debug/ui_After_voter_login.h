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
    QPushButton *Votenow_btn;
    QLabel *Cnic;
    QLabel *Name;
    QLabel *Votestatus;
    QPushButton *Logout_btn;
    QLabel *Title;
    QLabel *namelabel;
    QLabel *cniclabel;
    QLabel *statuslabel;

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

        gridLayout->addWidget(Votenow_btn, 5, 0, 1, 1);

        Cnic = new QLabel(Login);
        Cnic->setObjectName("Cnic");
        Cnic->setStyleSheet(QString::fromUtf8("   font-size: 18px;\n"
"    font-weight: 600;\n"
"    color: rgb(26, 62, 140);\n"
"    margin-bottom: 5px;"));

        gridLayout->addWidget(Cnic, 3, 0, 1, 1);

        Name = new QLabel(Login);
        Name->setObjectName("Name");
        Name->setStyleSheet(QString::fromUtf8("   font-size: 18px;\n"
"    font-weight: 600;\n"
"    color: rgb(26, 62, 140);\n"
"    margin-bottom: 5px;"));

        gridLayout->addWidget(Name, 2, 0, 1, 1);

        Votestatus = new QLabel(Login);
        Votestatus->setObjectName("Votestatus");
        Votestatus->setStyleSheet(QString::fromUtf8("   font-size: 18px;\n"
"    font-weight: 600;\n"
"    color: rgb(26, 62, 140);\n"
"    margin-bottom: 5px;"));

        gridLayout->addWidget(Votestatus, 4, 0, 1, 1);

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

        gridLayout->addWidget(Logout_btn, 5, 1, 1, 1);

        Title = new QLabel(Login);
        Title->setObjectName("Title");
        Title->setStyleSheet(QString::fromUtf8(" font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;\n"
"    margin-bottom: 10px;"));
        Title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(Title, 0, 0, 1, 2);

        namelabel = new QLabel(Login);
        namelabel->setObjectName("namelabel");
        QFont font2;
        font2.setWeight(QFont::Bold);
        namelabel->setFont(font2);
        namelabel->setStyleSheet(QString::fromUtf8("   font-size: 17px;\n"
"    font-weight: 510;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));
        namelabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(namelabel, 2, 1, 1, 1);

        cniclabel = new QLabel(Login);
        cniclabel->setObjectName("cniclabel");
        cniclabel->setStyleSheet(QString::fromUtf8("   font-size: 17px;\n"
"    font-weight: 510;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));
        cniclabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(cniclabel, 3, 1, 1, 1);

        statuslabel = new QLabel(Login);
        statuslabel->setObjectName("statuslabel");
        statuslabel->setStyleSheet(QString::fromUtf8("   font-size: 17px;\n"
"    font-weight: 510;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));
        statuslabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(statuslabel, 4, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        Votenow_btn->setText(QCoreApplication::translate("Login", "Vote Now", nullptr));
        Cnic->setText(QCoreApplication::translate("Login", "CNIC", nullptr));
        Name->setText(QCoreApplication::translate("Login", "Name", nullptr));
        Votestatus->setText(QCoreApplication::translate("Login", "Voting Status", nullptr));
        Logout_btn->setText(QCoreApplication::translate("Login", "Logout", nullptr));
        Title->setText(QCoreApplication::translate("Login", "Welcome ", nullptr));
        namelabel->setText(QCoreApplication::translate("Login", "TextLabel", nullptr));
        cniclabel->setText(QCoreApplication::translate("Login", "TextLabel", nullptr));
        statuslabel->setText(QCoreApplication::translate("Login", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFTER_VOTER_LOGIN_H
