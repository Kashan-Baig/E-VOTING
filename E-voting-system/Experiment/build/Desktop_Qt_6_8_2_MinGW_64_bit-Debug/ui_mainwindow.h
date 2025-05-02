/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
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
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(689, 513);
        MainWindow->setMinimumSize(QSize(0, 324));
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
"    padding: 8px;\n"
"    margin: 0px 0;\n"
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
"}\n"
"\n"
"QPushButton:ho"
                        "ver {\n"
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
        horizontalLayout_3->setContentsMargins(213, 0, 70, -1);
        label_4 = new QLabel(widget_box_header);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(80, 80));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/New folder/logo.png")));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        pushButton = new QPushButton(widget_box_header);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(70, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        pushButton->setFont(font);

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget_box_header);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font);

        horizontalLayout_3->addWidget(pushButton_2);

        widget_4 = new QWidget(widget_box_header);
        widget_4->setObjectName("widget_4");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setBold(false);
        widget_4->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(31, 10, 9, -1);

        horizontalLayout_3->addWidget(widget_4);


        verticalLayout->addWidget(widget_box_header);

        log_label = new QLabel(centralwidget);
        log_label->setObjectName("log_label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setBold(true);
        font2.setItalic(false);
        log_label->setFont(font2);
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
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(11);
        font3.setBold(true);
        login_btn->setFont(font3);

        horizontalLayout->addWidget(login_btn);

        signup_btn = new QPushButton(widget);
        signup_btn->setObjectName("signup_btn");
        signup_btn->setFont(font3);

        horizontalLayout->addWidget(signup_btn);


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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Candidate", nullptr));
        log_label->setText(QCoreApplication::translate("MainWindow", "Welcome to E-Voting System", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CNIC", nullptr));
        cnic_field->setText(QString());
        cnic_field->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Your Cnic without dashes ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pass_field->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter password here", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signup_btn->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
