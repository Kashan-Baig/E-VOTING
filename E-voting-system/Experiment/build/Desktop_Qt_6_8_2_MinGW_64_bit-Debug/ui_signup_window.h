/********************************************************************************
** Form generated from reading UI file 'signup_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_WINDOW_H
#define UI_SIGNUP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Signup_window
{
public:
    QLabel *label;

    void setupUi(QDialog *Signup_window)
    {
        if (Signup_window->objectName().isEmpty())
            Signup_window->setObjectName("Signup_window");
        Signup_window->resize(588, 399);
        label = new QLabel(Signup_window);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 170, 181, 131));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        retranslateUi(Signup_window);

        QMetaObject::connectSlotsByName(Signup_window);
    } // setupUi

    void retranslateUi(QDialog *Signup_window)
    {
        Signup_window->setWindowTitle(QCoreApplication::translate("Signup_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Signup_window", "helooLSKJS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup_window: public Ui_Signup_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_WINDOW_H
