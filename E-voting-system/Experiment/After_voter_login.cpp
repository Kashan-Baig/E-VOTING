#include "After_voter_login.h"
#include "ui_After_voter_login.h"
#include "database.h"
#include "voter_login.h"
#include "vote_casting.h"

Login::Login(const QString &cnic, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    loadVoterInfo(cnic);
}

Login::~Login()
{
    delete ui;
}

void Login::loadVoterInfo(const QString &cnic)
{
    QList<QVariantMap> users = Database::getUsersList();
    for (const QVariantMap &user : users) {
        if (user["cnic"].toString() == cnic) {
            ui->namelabel->setText(user["username"].toString());
            ui->cniclabel->setText(user["cnic"].toString());
            QString status = (user["vote_casted"].toInt() == 1) ? "Voted" : "Not Voted";
            ui->statuslabel->setText(status);
            if (status == "Voted") {
                ui->Votenow_btn->setEnabled(false);
                ui->Votenow_btn->setStyleSheet("background-color: gray; color: white;");
            } else {
                ui->Votenow_btn->setEnabled(true);
            }
            break;
        }
    }
}



void Login::on_Logout_btn_clicked()
{
    hide();
    MainWindow *voter = new MainWindow();
    voter->show();
}


void Login::on_Votenow_btn_clicked()
{
    hide();
    Vote_Casting *v = new Vote_Casting();
    v->show();
}

