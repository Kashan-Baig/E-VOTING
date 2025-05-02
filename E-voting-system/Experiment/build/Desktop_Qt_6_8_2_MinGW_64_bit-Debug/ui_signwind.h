/********************************************************************************
** Form generated from reading UI file 'signwind.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNWIND_H
#define UI_SIGNWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signwind
{
public:
    QGridLayout *gridLayout;
    QPushButton *createacc_btn;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *pass_edit;
    QLineEdit *cnicedit;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLineEdit *name_eidt;
    QLabel *label_2;

    void setupUi(QDialog *signwind)
    {
        if (signwind->objectName().isEmpty())
            signwind->setObjectName("signwind");
        signwind->resize(1302, 550);
        signwind->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: #f0f0f0; /* Changed to a solid background color */\n"
"}\n"
"\n"
"/* Central container with glass morphism effect */\n"
"#centralwidget {\n"
"    background: rgba(255, 255, 255, 0.15);\n"
"    border-radius: 15px;\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    padding: 30px;\n"
"    margin: 50px;\n"
"}\n"
"\n"
"/* Title label */\n"
"#welcome_label {\n"
"    font: bold 28px \"Segoe UI\", Arial;\n"
"    color: black; /* Changed to black */\n"
"    letter-spacing: 2px;\n"
"    text-transform: uppercase;\n"
"    qproperty-alignment: 'AlignCenter';\n"
"    margin-bottom: 30px;\n"
"}\n"
"\n"
"/* Form labels */\n"
"QLabel {\n"
"    font: bold 16px \"Segoe UI\";\n"
"    color: black; /* Changed to black */\n"
"    margin-bottom: 8px;\n"
"}\n"
"\n"
"/* Input fields with modern styling */\n"
"QLineEdit {\n"
"    background: rgba(255, 255, 255, 0.25);\n"
"    border: 2px solid rgba(255, 255, 255, 0.4);\n"
"    border-radius: 8px;\n"
"    padding: 12px;\n"
"    color: black"
                        "; /* Changed to black */\n"
"    font-size: 15px;\n"
"    margin-bottom: 15px;\n"
"    selection-background-color: #4facfe;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: rgba(79, 172, 254, 0.8);\n"
"    background: rgba(255, 255, 255, 0.3);\n"
"}\n"
"\n"
"/* Buttons with gradient and animation */\n"
"QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                              stop:0 #4facfe, stop:1 #00f2fe);\n"
"    color: white;\n"
"    font: bold 16px \"Segoe UI\";\n"
"    border-radius: 8px;\n"
"    padding: 14px 24px;\n"
"    border: none;\n"
"    min-width: 120px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                              stop:0 #00f2fe, stop:1 #4facfe);\n"
"}\n"
"\n"
"/* Login container */\n"
"#login_container {\n"
"    background: rgba(255, 255, 255, 0.1);\n"
"    border-radius: 15px;\n"
"    padding: 30px;\n"
"    border: 1px solid rgba(255, 255, 255, 0.15);\n"
"}\n"
"\n"
"/* Logo styling */\n"
""
                        "#logo_label {\n"
"    qproperty-alignment: 'AlignCenter';\n"
"    margin-bottom: 20px;\n"
"    qproperty-pixmap: url(:/icons/app_logo.png);\n"
"}\n"
"\n"
"QDateEdit {\n"
"    background: rgba(255, 255, 255, 0.2);\n"
"    border: 1px solid rgba(255, 255, 255, 0.3);\n"
"    border-radius: 6px;\n"
"    color: black; /* Changed to black */\n"
"    font: 15px \"Segoe UI\";\n"
"    padding: 8px 12px;\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    background: rgba(255, 255, 255, 0.1);\n"
"    border-radius: 0 4px 4px 0;\n"
"}\n"
""));
        gridLayout = new QGridLayout(signwind);
        gridLayout->setObjectName("gridLayout");
        createacc_btn = new QPushButton(signwind);
        createacc_btn->setObjectName("createacc_btn");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        font.setItalic(false);
        createacc_btn->setFont(font);

        gridLayout->addWidget(createacc_btn, 6, 2, 1, 1);

        label_3 = new QLabel(signwind);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_6 = new QLabel(signwind);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6->setMargin(0);

        gridLayout->addWidget(label_6, 0, 0, 1, 3);

        label = new QLabel(signwind);
        label->setObjectName("label");

        gridLayout->addWidget(label, 6, 0, 1, 1);

        label_4 = new QLabel(signwind);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        pass_edit = new QLineEdit(signwind);
        pass_edit->setObjectName("pass_edit");

        gridLayout->addWidget(pass_edit, 3, 2, 1, 1);

        cnicedit = new QLineEdit(signwind);
        cnicedit->setObjectName("cnicedit");
        cnicedit->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(cnicedit, 4, 2, 1, 1);

        label_5 = new QLabel(signwind);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        dateEdit = new QDateEdit(signwind);
        dateEdit->setObjectName("dateEdit");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setBold(false);
        font1.setItalic(false);
        dateEdit->setFont(font1);

        gridLayout->addWidget(dateEdit, 5, 2, 1, 1);

        name_eidt = new QLineEdit(signwind);
        name_eidt->setObjectName("name_eidt");
        name_eidt->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(name_eidt, 1, 2, 1, 1);

        label_2 = new QLabel(signwind);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(signwind);

        QMetaObject::connectSlotsByName(signwind);
    } // setupUi

    void retranslateUi(QDialog *signwind)
    {
        signwind->setWindowTitle(QCoreApplication::translate("signwind", "E-Voting SignUp", nullptr));
        createacc_btn->setText(QCoreApplication::translate("signwind", "Create Account", nullptr));
        label_3->setText(QCoreApplication::translate("signwind", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("signwind", "Sign Up To  Participate", nullptr));
        label->setText(QString());
        label_4->setText(QCoreApplication::translate("signwind", "Date Of Birth", nullptr));
        pass_edit->setPlaceholderText(QCoreApplication::translate("signwind", "Password must contain letters and numbers", nullptr));
        cnicedit->setPlaceholderText(QCoreApplication::translate("signwind", "Without Dashes", nullptr));
        label_5->setText(QCoreApplication::translate("signwind", "Cnic Number", nullptr));
        name_eidt->setPlaceholderText(QCoreApplication::translate("signwind", "Enter your username", nullptr));
        label_2->setText(QCoreApplication::translate("signwind", "Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signwind: public Ui_signwind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNWIND_H
