#include "mainpage.h"
#include "ui_mainpage.h"
#include "voter_login.h"
#include "admin.h"


Mainpage::Mainpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Mainpage)
{
    ui->setupUi(this);
}

Mainpage::~Mainpage()
{
    delete ui;
}


void Mainpage::on_Voter_btn_clicked()
{
    hide();
    MainWindow *voter = new MainWindow();
    voter->show();
}


void Mainpage::on_Admin_btn_clicked()
{
    hide();
    admin *Admin = new admin();
    Admin->show();
}

