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
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vote_Casting
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QScrollArea *scrollArea;
    QWidget *allCandidateContents;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *Vote_Casting)
    {
        if (Vote_Casting->objectName().isEmpty())
            Vote_Casting->setObjectName("Vote_Casting");
        Vote_Casting->resize(710, 560);
        verticalLayoutWidget = new QWidget(Vote_Casting);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 30, 681, 511));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(verticalLayoutWidget);
        widget->setObjectName("widget");
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 40, 671, 471));
        scrollArea->setWidgetResizable(true);
        allCandidateContents = new QWidget();
        allCandidateContents->setObjectName("allCandidateContents");
        allCandidateContents->setGeometry(QRect(0, 0, 669, 469));
        verticalLayout = new QVBoxLayout(allCandidateContents);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea->setWidget(allCandidateContents);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 10, 261, 21));

        verticalLayout_2->addWidget(widget);


        retranslateUi(Vote_Casting);

        QMetaObject::connectSlotsByName(Vote_Casting);
    } // setupUi

    void retranslateUi(QDialog *Vote_Casting)
    {
        Vote_Casting->setWindowTitle(QCoreApplication::translate("Vote_Casting", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Vote_Casting", "Candidates List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vote_Casting: public Ui_Vote_Casting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTE_CASTING_H
