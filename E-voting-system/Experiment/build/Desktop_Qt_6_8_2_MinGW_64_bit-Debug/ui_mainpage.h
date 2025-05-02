/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainpage
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QWidget *widget_btn3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Admin_btn;
    QPushButton *Voter_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Mainpage)
    {
        if (Mainpage->objectName().isEmpty())
            Mainpage->setObjectName("Mainpage");
        Mainpage->resize(984, 514);
        Mainpage->setStyleSheet(QString::fromUtf8("/* Main Window: Clean background with no margins */\n"
"QMainWindow {\n"
"    background: #f0f2f5;\n"
"    margin: 0;\n"
"    padding: 0;\n"
"    border: none;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"/* Central Widget */\n"
"QWidget#centralwidget {\n"
"    background: transparent;\n"
"    border: none;\n"
"    margin: 0;\n"
"    padding: 20px;\n"
"}\n"
"\n"
"/* ---- Text Hierarchy ---- */\n"
"/* Main Title: \"VOTE\" */\n"
"QLabel#mainTitle {\n"
"    font-size: 32px;\n"
"    font-weight: bold;\n"
"    color: #1a237e;\n"
"    qproperty-alignment: AlignCenter;\n"
"    margin-bottom: 0;\n"
"}\n"
"\n"
"/* Subtitle: \"The\" */\n"
"QLabel#subtitleSecondary {\n"
"    font-size: 14px;\n"
"    color: #666;\n"
"    qproperty-alignment: AlignCenter;\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"/* Body Text: \"Be a part of decision\" */\n"
"QLabel#subtitleLabel {\n"
"    font-size: 16px;\n"
"    color: #555;\n"
"    qproperty-alignment: AlignCenter;\n"
"    \n"
"    font-style: italic;\n"
"}\n"
"\n"
"/* CTA:"
                        " \"Vote Today\" */\n"
"QLabel#ctaLabel {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #1a237e;\n"
"    qproperty-alignment: AlignCenter;\n"
"\n"
"    border-bottom: 1px solid #d0d0d0;\n"
"\n"
"}\n"
"\n"
"/* ---- Buttons ---- */\n"
"QPushButton {\n"
"    background: #1a237e;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 20px;\n"
"    font-size: 14px;\n"
"    min-width: 120px;\n"
"    margin: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: #303f9f; /* Hover color only (no transform) */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: #0d47a1;\n"
"}\n"
"\n"
"/* Button Layout */\n"
"QHBoxLayout {\n"
"    spacing: 10px;\n"
"    margin: 0px 0 0 0;\n"
"    qproperty-alignment: AlignCenter;\n"
"}\n"
"/* Main Window */\n"
"QMainWindow {\n"
"    background: #f0f2f5;\n"
"    margin: 0;\n"
"    padding: 0;\n"
"}\n"
"\n"
"/* Central Widget - Critical for spacing control */\n"
"QWidget#centralWidget {\n"
"    background: transparent;\n"
""
                        "    padding: 20px;\n"
"    margin: 0;\n"
"}\n"
"\n"
"/* Title: \"VOTE\" */\n"
"QLabel#titleLabel {\n"
"    font-size: 32px;\n"
"    font-weight: bold;\n"
"    color: #1a237e;\n"
"    qproperty-alignment: AlignCenter;\n"
"    margin: 0;\n"
"    padding: 0;\n"
"}\n"
"\n"
"/* Subtitle: \"Be a part of decision\" */\n"
"QLabel#subtitleLabel {\n"
"    font-size: 16px;\n"
"    color: #555;\n"
"    qproperty-alignment: AlignCenter;\n"
"    margin: 0;  /* Zero margin/padding */\n"
"    padding: 0;\n"
"}\n"
"\n"
"/* CTA: \"Vote Today\" */\n"
"QLabel#ctaLabel {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #1a237e;\n"
"    qproperty-alignment: AlignCenter;\n"
"    margin: 0;  /* Zero margin/padding */\n"
"    padding: 0;\n"
"}\n"
"\n"
"/* Table Styling */\n"
"QTableWidget {\n"
"    margin-top: 15px; /* Space above table only */\n"
"}"));
        centralwidget = new QWidget(Mainpage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/New folder/Main_btn (1).png")));

        horizontalLayout->addWidget(label_2);

        widget_btn3 = new QWidget(centralwidget);
        widget_btn3->setObjectName("widget_btn3");
        verticalLayout_2 = new QVBoxLayout(widget_btn3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 99, -1, 184);
        label = new QLabel(widget_btn3);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 0));
        label->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: rgb(167, 89, 176);\n"
"    qproperty-alignment: AlignCenter;"));
        label->setMargin(1);

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(widget_btn3);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font-size: 40px;\n"
"    font-weight: bold;\n"
"    color: rgb(85, 60, 216);\n"
"    qproperty-alignment: AlignCenter;"));

        verticalLayout_2->addWidget(label_3);

        widget = new QWidget(widget_btn3);
        widget->setObjectName("widget");
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 16, -1, 0);
        Admin_btn = new QPushButton(widget);
        Admin_btn->setObjectName("Admin_btn");
        QFont font;
        font.setBold(true);
        Admin_btn->setFont(font);

        horizontalLayout_3->addWidget(Admin_btn);

        Voter_btn = new QPushButton(widget);
        Voter_btn->setObjectName("Voter_btn");
        Voter_btn->setMinimumSize(QSize(170, 0));
        Voter_btn->setFont(font);

        horizontalLayout_3->addWidget(Voter_btn);


        verticalLayout_2->addWidget(widget);


        horizontalLayout->addWidget(widget_btn3);


        horizontalLayout_2->addLayout(horizontalLayout);

        Mainpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Mainpage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 984, 22));
        Mainpage->setMenuBar(menubar);
        statusbar = new QStatusBar(Mainpage);
        statusbar->setObjectName("statusbar");
        Mainpage->setStatusBar(statusbar);

        retranslateUi(Mainpage);

        QMetaObject::connectSlotsByName(Mainpage);
    } // setupUi

    void retranslateUi(QMainWindow *Mainpage)
    {
        Mainpage->setWindowTitle(QCoreApplication::translate("Mainpage", "MainWindow", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("Mainpage", "Be a part of decesion ", nullptr));
        label_3->setText(QCoreApplication::translate("Mainpage", "Vote Today", nullptr));
        Admin_btn->setText(QCoreApplication::translate("Mainpage", "Admin", nullptr));
        Voter_btn->setText(QCoreApplication::translate("Mainpage", "Voter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mainpage: public Ui_Mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
