/********************************************************************************
** Form generated from reading UI file 'voter_signin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTER_SIGNIN_H
#define UI_VOTER_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signwind
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *name_eidt;
    QLabel *label_3;
    QLineEdit *pass_edit;
    QLabel *label_5;
    QLineEdit *cnicedit;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *createacc_btn;
    QPushButton *sign_back;
    QLabel *label;

    void setupUi(QDialog *signwind)
    {
        if (signwind->objectName().isEmpty())
            signwind->setObjectName("signwind");
        signwind->resize(661, 663);
        signwind->setStyleSheet(QString::fromUtf8("/* Main Container */\n"
"QWidget {\n"
"    background-color: #f8f9fa;\n"
"    font-family: 'Segoe UI', sans-serif;\n"
"    padding: 20px;\n"
"}\n"
"\n"
"/* Title */\n"
"QLabel#title_label {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;\n"
"    margin-bottom: 25px;\n"
"}\n"
"\n"
"/* Section Headers (Username, Password, etc.) */\n"
"QLabel.section_header {\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    color: #495057;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"/* Input Fields */\n"
"QLineEdit, QDateEdit {\n"
"    background: white;\n"
"    border: 1px solid #ced4da;\n"
"    border-radius: 6px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"    margin-bottom: 15px;\n"
"    min-width: 250px;\n"
"}\n"
"\n"
"/* Input Field Placeholder Text */\n"
"QLineEdit::placeholder {\n"
"    color: #adb5bd;\n"
"    font-style: italic;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton#register_btn:hover {\n"
"    background-color: #1765cc;\n"
"}\n"
"\n"
"/* Horizontal Line */\n"
"QFrame#line {\n"
""
                        "    border: 1px solid #e9ecef;\n"
"    margin: 15px 0;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(signwind);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, -1, 8, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 20, 60, 20);
        label_6 = new QLabel(signwind);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;  /* Navy blue */\n"
"    margin-bottom: 20px;\n"
""));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6->setMargin(0);

        verticalLayout->addWidget(label_6);

        label_2 = new QLabel(signwind);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8(" font-size: 13px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;  /* Navy blue */\n"
"    padding: 10px;"));

        verticalLayout->addWidget(label_2);

        name_eidt = new QLineEdit(signwind);
        name_eidt->setObjectName("name_eidt");
        name_eidt->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(name_eidt);

        label_3 = new QLabel(signwind);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8(" font-size: 13px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;  /* Navy blue */\n"
"    padding: 10px;"));

        verticalLayout->addWidget(label_3);

        pass_edit = new QLineEdit(signwind);
        pass_edit->setObjectName("pass_edit");
        pass_edit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(pass_edit);

        label_5 = new QLabel(signwind);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8(" font-size: 13px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;  /* Navy blue */\n"
"    padding: 10px;"));

        verticalLayout->addWidget(label_5);

        cnicedit = new QLineEdit(signwind);
        cnicedit->setObjectName("cnicedit");
        cnicedit->setStyleSheet(QString::fromUtf8(" background: white;\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    margin: 8px 0;\n"
"    min-width: 250px;"));
        cnicedit->setEchoMode(QLineEdit::EchoMode::Normal);

        verticalLayout->addWidget(cnicedit);

        label_4 = new QLabel(signwind);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8(" font-size: 13px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;  /* Navy blue */\n"
"    padding: 10px;"));

        verticalLayout->addWidget(label_4);

        dateEdit = new QDateEdit(signwind);
        dateEdit->setObjectName("dateEdit");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(false);
        font.setItalic(false);
        dateEdit->setFont(font);
        dateEdit->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    color: #000000;  /* Black text */\n"
"    background-color: #ffffff;  /* White background */\n"
"}"));

        verticalLayout->addWidget(dateEdit);

        widget = new QWidget(signwind);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(80, 12, 80, -1);
        createacc_btn = new QPushButton(widget);
        createacc_btn->setObjectName("createacc_btn");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        createacc_btn->setFont(font1);
        createacc_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1a3e8c;  /* Navy blue */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    margin: 10px 0;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0d2b5e;  /* Darker blue */\n"
"}"));

        horizontalLayout->addWidget(createacc_btn);

        sign_back = new QPushButton(widget);
        sign_back->setObjectName("sign_back");
        sign_back->setMinimumSize(QSize(0, 0));
        sign_back->setBaseSize(QSize(0, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(11);
        font2.setBold(true);
        sign_back->setFont(font2);
        sign_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(229, 62, 62);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    margin: 10px 0;\n"
"}\n"
"#sign_back:hover {\n"
"    background-color: #c53030;  \n"
"}"));

        horizontalLayout->addWidget(sign_back);


        verticalLayout->addWidget(widget);

        label = new QLabel(signwind);
        label->setObjectName("label");

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(signwind);

        QMetaObject::connectSlotsByName(signwind);
    } // setupUi

    void retranslateUi(QDialog *signwind)
    {
        signwind->setWindowTitle(QCoreApplication::translate("signwind", "E-Voting SignUp", nullptr));
        label_6->setText(QCoreApplication::translate("signwind", "Sign Up To  Participate", nullptr));
        label_2->setText(QCoreApplication::translate("signwind", "Username", nullptr));
        name_eidt->setPlaceholderText(QCoreApplication::translate("signwind", "Enter your username", nullptr));
        label_3->setText(QCoreApplication::translate("signwind", "Password", nullptr));
        pass_edit->setPlaceholderText(QCoreApplication::translate("signwind", "Password must contain letters and numbers", nullptr));
        label_5->setText(QCoreApplication::translate("signwind", "Cnic Number", nullptr));
        cnicedit->setPlaceholderText(QCoreApplication::translate("signwind", "Without Dashes", nullptr));
        label_4->setText(QCoreApplication::translate("signwind", "Date Of Birth", nullptr));
        createacc_btn->setText(QCoreApplication::translate("signwind", "Register", nullptr));
        sign_back->setText(QCoreApplication::translate("signwind", "Back", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signwind: public Ui_signwind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTER_SIGNIN_H
