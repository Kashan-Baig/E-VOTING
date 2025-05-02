#ifndef VOTER_LOGIN_H
#define VOTER_LOGIN_H

#include <QMainWindow>
#include "After_voter_login.h"
#include "voter_signin.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_btn_clicked();

    void on_signup_btn_clicked();

    void on_vote_backbtn_clicked();

private:
    Ui::MainWindow *ui;
    Login *log;
    signwind *sign;
};
#endif // VOTER_LOGIN_H
