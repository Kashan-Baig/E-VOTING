/********************************************************************************
** Form generated from reading UI file 'candidate.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDIDATE_H
#define UI_CANDIDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Candidate
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Candidate)
    {
        if (Candidate->objectName().isEmpty())
            Candidate->setObjectName("Candidate");
        Candidate->resize(555, 410);
        pushButton = new QPushButton(Candidate);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 190, 75, 24));

        retranslateUi(Candidate);

        QMetaObject::connectSlotsByName(Candidate);
    } // setupUi

    void retranslateUi(QDialog *Candidate)
    {
        Candidate->setWindowTitle(QCoreApplication::translate("Candidate", "Candidate Page", nullptr));
        pushButton->setText(QCoreApplication::translate("Candidate", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Candidate: public Ui_Candidate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATE_H
