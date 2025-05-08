#include "voter_signin.h"
#include "ui_voter_signin.h"
#include "voter_login.h"
#include <QString>
#include <QDate>
#include <QMessageBox>
#include "database.h"

signwind::signwind(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signwind)
{
    ui->setupUi(this);
    this->setMinimumSize(700, 680);
}

signwind::~signwind()
{
    delete ui;
}

void signwind::on_createacc_btn_clicked()
{
    QString name = ui->name_eidt->text().trimmed();
    QString pass = ui->pass_edit->text();
    QString cnic = ui->cnicedit->text().remove('-'); // Remove dashes
    QDate date = ui->dateEdit->date();

    // Simple validation
    if(name.isEmpty() || pass.isEmpty() || cnic.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields are required");
        return;
    }

    int age = QDate::currentDate().year() - date.year();
    if(age < 18) {
        QMessageBox::warning(this, "Error", "You must be at least 18 years old");
        return;
    }

    if(cnic.length() != 13) {
        QMessageBox::warning(this, "Error", "CNIC must be 13 digits");
        return;
    }

    // Now try inserting the user
    if (Database::insertUser(name, pass,cnic,date,false)) {
        QMessageBox::information(this, "Success", "Account created successfully!");
        hide();
        MainWindow* againlog = new MainWindow();
        againlog->show();
    } else {
        QMessageBox::critical(this, "Error", "Username already exists or could not create account.");
    }
}

void signwind::on_sign_back_clicked()
{
    hide();
    MainWindow* bck = new MainWindow();
    bck->show();
}

