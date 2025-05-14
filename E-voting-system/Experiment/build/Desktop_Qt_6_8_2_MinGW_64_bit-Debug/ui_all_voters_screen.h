/********************************************************************************
** Form generated from reading UI file 'all_voters_screen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_VOTERS_SCREEN_H
#define UI_ALL_VOTERS_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_all_voters_screen
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *backButton;
    QScrollArea *scrollArea;
    QWidget *votersList;
    QVBoxLayout *verticalLayout;
    QWidget *widget;

    void setupUi(QWidget *all_voters_screen)
    {
        if (all_voters_screen->objectName().isEmpty())
            all_voters_screen->setObjectName("all_voters_screen");
        all_voters_screen->resize(697, 577);
        gridLayoutWidget = new QWidget(all_voters_screen);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 691, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(19);
        gridLayout->setContentsMargins(8, 30, 20, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(" font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;\n"
"    margin-bottom: 10px;"));

        gridLayout->addWidget(label, 1, 0, 1, 3, Qt::AlignmentFlag::AlignHCenter);

        backButton = new QPushButton(gridLayoutWidget);
        backButton->setObjectName("backButton");
        backButton->setMinimumSize(QSize(100, 0));
        backButton->setMaximumSize(QSize(200, 16777215));
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 62, 62);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    padding:5px;\n"
"   "));

        gridLayout->addWidget(backButton, 0, 1, 1, 1);

        scrollArea = new QScrollArea(all_voters_screen);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 140, 681, 421));
        scrollArea->setWidgetResizable(true);
        votersList = new QWidget();
        votersList->setObjectName("votersList");
        votersList->setGeometry(QRect(0, 0, 679, 419));
        verticalLayout = new QVBoxLayout(votersList);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(votersList);
        widget->setObjectName("widget");
        widget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout->addWidget(widget);

        scrollArea->setWidget(votersList);

        retranslateUi(all_voters_screen);

        QMetaObject::connectSlotsByName(all_voters_screen);
    } // setupUi

    void retranslateUi(QWidget *all_voters_screen)
    {
        all_voters_screen->setWindowTitle(QCoreApplication::translate("all_voters_screen", "Form", nullptr));
        label->setText(QCoreApplication::translate("all_voters_screen", "Voters List", nullptr));
        backButton->setText(QCoreApplication::translate("all_voters_screen", "< Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class all_voters_screen: public Ui_all_voters_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_VOTERS_SCREEN_H
