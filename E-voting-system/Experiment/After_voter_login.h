#ifndef AFTER_VOTER_LOGIN_H
#define AFTER_VOTER_LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(const QString &cnic, QWidget *parent = nullptr); // 👈 constructor with CNIC
    ~Login();

private slots:
    void on_Logout_btn_clicked();

    void on_Votenow_btn_clicked();

private:
    Ui::Login *ui;
    void loadVoterInfo(const QString &cnic); // 👈 function to load user info
};

#endif // AFTER_VOTER_LOGIN_H
