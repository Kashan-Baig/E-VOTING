/********************************************************************************
** Form generated from reading UI file 'vote_casting.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTE_CASTING_H
#define UI_VOTE_CASTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vote_Casting
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *allCandidateContents;
    QVBoxLayout *verticalLayout;
    QPushButton *submitButton;

    void setupUi(QDialog *Vote_Casting)
    {
        if (Vote_Casting->objectName().isEmpty())
            Vote_Casting->setObjectName("Vote_Casting");
        Vote_Casting->resize(698, 373);
        horizontalLayout = new QHBoxLayout(Vote_Casting);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widget = new QWidget(Vote_Casting);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(" font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;\n"
"    margin-bottom: 10px;"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter);

        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        allCandidateContents = new QWidget();
        allCandidateContents->setObjectName("allCandidateContents");
        allCandidateContents->setGeometry(QRect(0, 0, 658, 260));
        verticalLayout = new QVBoxLayout(allCandidateContents);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea->setWidget(allCandidateContents);

        verticalLayout_2->addWidget(scrollArea);

        submitButton = new QPushButton(widget);
        submitButton->setObjectName("submitButton");

        verticalLayout_2->addWidget(submitButton);


        horizontalLayout_2->addWidget(widget);


        horizontalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Vote_Casting);

        QMetaObject::connectSlotsByName(Vote_Casting);
    } // setupUi

    void retranslateUi(QDialog *Vote_Casting)
    {
        Vote_Casting->setWindowTitle(QCoreApplication::translate("Vote_Casting", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Vote_Casting", "Please Selcet One Candidate Below ", nullptr));
        submitButton->setText(QCoreApplication::translate("Vote_Casting", "Submit Vote", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vote_Casting: public Ui_Vote_Casting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTE_CASTING_H
