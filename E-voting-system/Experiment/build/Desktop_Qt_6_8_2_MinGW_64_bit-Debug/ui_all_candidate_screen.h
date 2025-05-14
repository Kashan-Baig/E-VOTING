/********************************************************************************
** Form generated from reading UI file 'all_candidate_screen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_CANDIDATE_SCREEN_H
#define UI_ALL_CANDIDATE_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Candidate_screen
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *addCandidateButton;
    QLabel *label;
    QPushButton *pushButton;
    QScrollArea *scrollArea;
    QWidget *canddiateList;
    QVBoxLayout *verticalLayout;
    QWidget *widget;

    void setupUi(QDialog *Candidate_screen)
    {
        if (Candidate_screen->objectName().isEmpty())
            Candidate_screen->setObjectName("Candidate_screen");
        Candidate_screen->resize(709, 587);
        gridLayoutWidget = new QWidget(Candidate_screen);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 691, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(19);
        gridLayout->setContentsMargins(8, 30, 20, 0);
        addCandidateButton = new QPushButton(gridLayoutWidget);
        addCandidateButton->setObjectName("addCandidateButton");
        addCandidateButton->setMinimumSize(QSize(200, 0));
        addCandidateButton->setMaximumSize(QSize(100, 16777215));
        addCandidateButton->setStyleSheet(QString::fromUtf8("#addCandidateButton{\n"
"background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    padding:5px;\n"
"}\n"
"#addCandidateButton:hover {\n"
"    background-color: #303f9f;   /* Darker blue on hover */\n"
"    color: white;\n"
"}\n"
"\n"
"/* Pressed effect */\n"
"#addCandidateButton:pressed {\n"
"    background-color: #0d47a1;   /* Even darker blue when pressed */\n"
"}\n"
"   "));

        gridLayout->addWidget(addCandidateButton, 0, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(" font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;\n"
"    margin-bottom: 10px;"));

        gridLayout->addWidget(label, 1, 0, 1, 3, Qt::AlignmentFlag::AlignHCenter);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(100, 0));
        pushButton->setMaximumSize(QSize(200, 16777215));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 62, 62);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    padding:5px;\n"
"   "));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        scrollArea = new QScrollArea(Candidate_screen);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 140, 681, 421));
        scrollArea->setWidgetResizable(true);
        canddiateList = new QWidget();
        canddiateList->setObjectName("canddiateList");
        canddiateList->setGeometry(QRect(0, 0, 679, 419));
        verticalLayout = new QVBoxLayout(canddiateList);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(canddiateList);
        widget->setObjectName("widget");
        widget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout->addWidget(widget);

        scrollArea->setWidget(canddiateList);

        retranslateUi(Candidate_screen);

        QMetaObject::connectSlotsByName(Candidate_screen);
    } // setupUi

    void retranslateUi(QDialog *Candidate_screen)
    {
        Candidate_screen->setWindowTitle(QCoreApplication::translate("Candidate_screen", "Candidate Screen", nullptr));
        addCandidateButton->setText(QCoreApplication::translate("Candidate_screen", "Add Candidate", nullptr));
        label->setText(QCoreApplication::translate("Candidate_screen", "Candidate List", nullptr));
        pushButton->setText(QCoreApplication::translate("Candidate_screen", "< Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Candidate_screen: public Ui_Candidate_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_CANDIDATE_SCREEN_H
