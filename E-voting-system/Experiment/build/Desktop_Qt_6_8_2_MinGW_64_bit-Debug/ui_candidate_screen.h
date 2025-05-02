/********************************************************************************
** Form generated from reading UI file 'candidate_screen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDIDATE_SCREEN_H
#define UI_CANDIDATE_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Candidate_screen
{
public:

    void setupUi(QDialog *Candidate_screen)
    {
        if (Candidate_screen->objectName().isEmpty())
            Candidate_screen->setObjectName("Candidate_screen");
        Candidate_screen->resize(400, 300);

        retranslateUi(Candidate_screen);

        QMetaObject::connectSlotsByName(Candidate_screen);
    } // setupUi

    void retranslateUi(QDialog *Candidate_screen)
    {
        Candidate_screen->setWindowTitle(QCoreApplication::translate("Candidate_screen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Candidate_screen: public Ui_Candidate_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATE_SCREEN_H
