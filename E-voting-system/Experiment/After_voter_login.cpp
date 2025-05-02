#include "After_voter_login.h"
#include "ui_After_voter_login.h"
#include <QString>
#include "voter_login.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}




void Login::on_Logout_btn_clicked()
{
    hide();
    MainWindow *voter = new MainWindow();
    voter->show();
}

