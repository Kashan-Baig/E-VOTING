/********************************************************************************
** Form generated from reading UI file 'voter_login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTER_LOGIN_H
#define UI_VOTER_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_box_header;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *log_label;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *cnic_field;
    QLabel *label_2;
    QLineEdit *pass_field;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *login_btn;
    QPushButton *signup_btn;
    QPushButton *vote_backbtn;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(689, 545);
        MainWindow->setMinimumSize(QSize(500, 324));
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f5f5f5;\n"
"}\n"
"\n"
"/* Dark Mode Example */\n"
"QWidget {\n"
"    background-color: #2d3748;\n"
"    color: white;  /* Text color */\n"
"}\n"
"\n"
"QLineEdit, QPushButton {\n"
"    background-color: white;  /* Input fields/buttons stand out */\n"
"    color: #333333;\n"
"}\n"
"/* Main Window */\n"
"QWidget {\n"
"    background-color: #f5f5f5;  /* Light gray */\n"
"    font-family: 'Segoe UI';\n"
"}\n"
"\n"
"/* Title */\n"
"#log_label {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;  /* Navy blue */\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* Input Fields */\n"
"QLineEdit {\n"
"    background: white;\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    margin: 0px 0;\n"
"    min-width: 150px;\n"
"}\n"
"\n"
"/* Buttons */\n"
"QPushButton {\n"
"    background-color: #1a3e8c;  /* Navy blue */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    margin: 10px 0;\n"
""
                        "}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0d2b5e;  /* Darker blue */\n"
"}\n"
"QMessageBox {\n"
"    background-color: rgb(255, 255, 255);  /* Dark gray */\n"
"    color: white;\n"
"}\n"
"\n"
"QMessageBox QLabel {\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    color: rgb(26, 62, 140);\n"
"}\n"
"\n"
"QMessageBox QPushButton {\n"
"    background-color: rgb(26, 62, 140) /* Green buttons */\n"
"    color: rgb(255, 255, 255);\n"
"    padding: 6px 12px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QMessageBox QPushButton:hover {\n"
"    background-color: rgb(255, 255, 255);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");

        verticalLayout_2->addWidget(widget_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(30, 40, 30, 40);
        widget_box_header = new QWidget(centralwidget);
        widget_box_header->setObjectName("widget_box_header");
        widget_box_header->setMinimumSize(QSize(80, 80));
        widget_box_header->setSizeIncrement(QSize(200, 100));
        widget_box_header->setBaseSize(QSize(200, 100));
        horizontalLayout_3 = new QHBoxLayout(widget_box_header);
        horizontalLayout_3->setSpacing(19);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(73, 0, 70, -1);
        label_4 = new QLabel(widget_box_header);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(80, 80));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/New folder/logo.png")));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_4);


        verticalLayout->addWidget(widget_box_header);

        log_label = new QLabel(centralwidget);
        log_label->setObjectName("log_label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        font.setItalic(false);
        log_label->setFont(font);
        log_label->setStyleSheet(QString::fromUtf8(""));
        log_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(log_label);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(30, 30));
        widget_2->setSizeIncrement(QSize(0, 40));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(70, 2, 70, 0);
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("  font-size: 13px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;  /* Navy blue */\n"
"    padding: 10px;"));

        verticalLayout_3->addWidget(label);

        cnic_field = new QLineEdit(widget_2);
        cnic_field->setObjectName("cnic_field");
        cnic_field->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(cnic_field);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("  font-size: 13px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;  /* Navy blue */\n"
"    padding: 10px;"));

        verticalLayout_3->addWidget(label_2);

        pass_field = new QLineEdit(widget_2);
        pass_field->setObjectName("pass_field");
        pass_field->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_3->addWidget(pass_field);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(14);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(76, 4, 69, 0);
        login_btn = new QPushButton(widget);
        login_btn->setObjectName("login_btn");
        login_btn->setEnabled(true);
        login_btn->setMinimumSize(QSize(0, 0));
        login_btn->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(11);
        font1.setBold(true);
        login_btn->setFont(font1);

        horizontalLayout->addWidget(login_btn);

        signup_btn = new QPushButton(widget);
        signup_btn->setObjectName("signup_btn");
        signup_btn->setFont(font1);

        horizontalLayout->addWidget(signup_btn);

        vote_backbtn = new QPushButton(widget);
        vote_backbtn->setObjectName("vote_backbtn");
        vote_backbtn->setFont(font1);
        vote_backbtn->setStyleSheet(QString::fromUtf8("#vote_backbtn {\n"
"    background-color: #e53e3e;  /* Red for cancel */\n"
"}\n"
"#vote_backbtn:hover {\n"
"    background-color: #c53030;  \n"
"}"));

        horizontalLayout->addWidget(vote_backbtn);


        verticalLayout->addWidget(widget);


        verticalLayout_2->addLayout(verticalLayout);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 689, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "E-Voting Login Page", nullptr));
        label_4->setText(QString());
        log_label->setText(QCoreApplication::translate("MainWindow", "Welcome to E-Voting System", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CNIC", nullptr));
        cnic_field->setText(QString());
        cnic_field->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Your Cnic without dashes ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pass_field->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter password here", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signup_btn->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        vote_backbtn->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTER_LOGIN_H
