#include "After_voter_login.h"
#include "ui_After_voter_login.h"
#include <QString>

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

void Login::on_pushButton_clicked()
{
    ui->label->setText("Hello welcome user");
}

