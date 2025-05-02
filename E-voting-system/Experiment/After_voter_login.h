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
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:


    void on_Logout_btn_clicked();

private:
    Ui::Login *ui;
};

#endif // AFTER_VOTER_LOGIN_H
