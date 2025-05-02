/********************************************************************************
** Form generated from reading UI file 'after_admin_login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFTER_ADMIN_LOGIN_H
#define UI_AFTER_ADMIN_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_After_admin_login
{
public:

    void setupUi(QDialog *After_admin_login)
    {
        if (After_admin_login->objectName().isEmpty())
            After_admin_login->setObjectName("After_admin_login");
        After_admin_login->resize(400, 300);

        retranslateUi(After_admin_login);

        QMetaObject::connectSlotsByName(After_admin_login);
    } // setupUi

    void retranslateUi(QDialog *After_admin_login)
    {
        After_admin_login->setWindowTitle(QCoreApplication::translate("After_admin_login", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class After_admin_login: public Ui_After_admin_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFTER_ADMIN_LOGIN_H
