#include "voter_login.h"
#include "ui_voter_login.h"
#include <QString>
#include <QMessageBox>
#include "database.h"
#include "mainpage.h"
#include "After_voter_login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->setMinimumSize(700, 550);
    // Set application-wide style for QMessageBox
    qApp->setStyleSheet(
        "QMessageBox {"
        "   background-color: #f8f9fa;"
        "   border: 1px solid #dee2e6;"
        "   font-family: 'Segoe UI', Arial, sans-serif;"
        "}"
        "QMessageBox QLabel {"
        "   color: #000000;"  // Pure black text
        "}"
        "QMessageBox QPushButton {"
        "   background-color: #343a40;"
        "   color: white;"
        "   padding: 5px 15px;"
        "   border-radius: 4px;"
        "   min-width: 80px;"
        "}"
        "QMessageBox QPushButton:hover {"
        "   background-color: #23272b;"
        "}"
        );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_btn_clicked()
{
    QString cnic = ui->cnic_field->text();
    QString password = ui->pass_field->text();
    int loginResult = Database::loginUser(cnic, password);

    switch (loginResult) {
    case -1:
        QMessageBox::critical(this, "Error", "Database error occurred.");
        break;
    case 0:
        QMessageBox::warning(this, "Login Failed", "CNIC not found.");
        break;
    case 1:
        QMessageBox::warning(this, "Login Failed", "Incorrect password.");
        break;
    case 2:
        QMessageBox::information(this, "Success", "Login successful!");
        // Proceed to next window
        Login *afterLoginPage = new Login(cnic);
        afterLoginPage->show();
        // hide();
        // Login* l = new Login();
        // l->show();
        break;
    }
}

void MainWindow::on_signup_btn_clicked()
{
    hide();
    sign = new signwind(this);
    sign->show();
}

void MainWindow::on_vote_backbtn_clicked()
{
    hide();
    Mainpage *m = new Mainpage();
    m->show();
}

