/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Adminid;
    QLabel *label_3;
    QLineEdit *adminpass;
    QWidget *widget_log_bac;
    QHBoxLayout *horizontalLayout;
    QPushButton *Admin_log_btn;
    QPushButton *Back_btn;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(589, 427);
        admin->setStyleSheet(QString::fromUtf8("/* ===== Base Dialog Styles ===== */\n"
"#admin {\n"
"    background-color: #f5f5f5;  /* Light mode default */\n"
"    border-radius: 8px;\n"
"    font-family: 'Segoe UI';\n"
"}\n"
"\n"
"/* ===== Dark Mode Support ===== */\n"
"[darkMode=\"true\"] #admin {\n"
"    background-color: #2d3748;  /* Dark slate */\n"
"    color: #e2e8f0;\n"
"}\n"
"\n"
"/* ===== Title Label ===== */\n"
"#label {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: rgb(26, 62, 140);\n"
"    padding: 10px 0 10px 0;\n"
"    qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"#label_2, #label_3 {\n"
"    color: rgb(26, 62, 140);\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"    padding: 0 50px 0px 20px;  /* Reduced bottom padding (from 20px to 2px) */\n"
"    margin-bottom: -25px;        /* Pulls label closer to the input */\n"
"}\n"
"\n"
"/* ===== Input Fields ===== */\n"
"#admin QLineEdit {\n"
"    background: white;\n"
"	color : black;\n"
"    border: 1px solid #cbd5e0;\n"
"    border-radius: 5px;\n"
"    padding: "
                        "10px;\n"
"    margin: 5px 20px;\n"
"    min-width: 250px;\n"
"}\n"
"\n"
"[darkMode=\"true\"] #admin QLineEdit {\n"
"    background: #4a5568;  /* Dark input */\n"
"    border-color: #718096;\n"
"    color: white;\n"
"}\n"
"\n"
"/* ===== Buttons ===== */\n"
"#admin QPushButton {\n"
"    background-color: #1a3e8c;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px 20px;\n"
"    margin: 15px 10px;\n"
"    min-width: 100px;\n"
"}\n"
"\n"
"#admin QPushButton:hover {\n"
"    background-color: #2c5282;  /* Darker hover */\n"
"}\n"
"\n"
"#admin QPushButton#Back_btn {\n"
"    background-color: #e53e3e;  /* Red for cancel */\n"
"}\n"
"#admin QPushButton#Back_btn:hover {\n"
"    background-color: #c53030;  \n"
"}\n"
"\n"
"[darkMode=\"true\"] #admin QPushButton {\n"
"    background-color: #4299e1;  /* Light blue */\n"
"}\n"
"\n"
"/* ===== Layout Spacing ===== */\n"
"#admin QVBoxLayout {\n"
"    spacing: 5px;\n"
"    margin: 15px;\n"
"}\n"
"\n"
"/* ===== Error Message ===== */\n"
""
                        "#admin QLabel#errorLabel {\n"
"    color: #e53e3e;\n"
"    font-size: 12px;\n"
"    qproperty-alignment: AlignCenter;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(admin);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(100, 6, 100, 41);
        label = new QLabel(admin);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(admin);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        Adminid = new QLineEdit(admin);
        Adminid->setObjectName("Adminid");

        verticalLayout->addWidget(Adminid);

        label_3 = new QLabel(admin);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        adminpass = new QLineEdit(admin);
        adminpass->setObjectName("adminpass");

        verticalLayout->addWidget(adminpass);

        widget_log_bac = new QWidget(admin);
        widget_log_bac->setObjectName("widget_log_bac");
        horizontalLayout = new QHBoxLayout(widget_log_bac);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(20, 21, 20, -1);
        Admin_log_btn = new QPushButton(widget_log_bac);
        Admin_log_btn->setObjectName("Admin_log_btn");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        Admin_log_btn->setFont(font);

        horizontalLayout->addWidget(Admin_log_btn);

        Back_btn = new QPushButton(widget_log_bac);
        Back_btn->setObjectName("Back_btn");
        Back_btn->setFont(font);

        horizontalLayout->addWidget(Back_btn);


        verticalLayout->addWidget(widget_log_bac);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Admin Page", nullptr));
        label->setText(QCoreApplication::translate("admin", "Admin Login", nullptr));
        label_2->setText(QCoreApplication::translate("admin", "Admin ID", nullptr));
        Adminid->setPlaceholderText(QCoreApplication::translate("admin", "Enter your ID", nullptr));
        label_3->setText(QCoreApplication::translate("admin", "Password", nullptr));
        adminpass->setPlaceholderText(QCoreApplication::translate("admin", "Enter password", nullptr));
        Admin_log_btn->setText(QCoreApplication::translate("admin", "Login", nullptr));
        Back_btn->setText(QCoreApplication::translate("admin", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
