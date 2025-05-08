#include "admin.h"
#include "ui_admin.h"
#include "mainpage.h"
#include "candidates_dashboard.h"
#include <QMessageBox>

admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
    this->setMinimumSize(600, 400);
}

admin::~admin()
{
    delete ui;
}

void admin::on_Back_btn_clicked()
{
    hide();
    Mainpage *m = new Mainpage();
    m->show();
}


void admin::on_Admin_log_btn_clicked()
{
    QString ID = ui->Adminid->text();
    QString adpas = ui->adminpass->text();

    if((ID=="Kashan178" && adpas=="CT-24178")||(ID=="Hassan185" && adpas=="CT-24185")||(ID=="Saad187" && adpas=="CT-24187")){
        hide();
        candidates_dashboard* log = new candidates_dashboard();
        log->show();
    }
    else if(ID.isEmpty() || adpas.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields are required");
        return;
    }
    else if((ID!="Kashan178" || adpas!="CT-24178")||(ID!="Hassan185" || adpas!="CT-24185")||(ID!="Saad187" || adpas!="CT-24187")){
         QMessageBox::warning(this, "Login Failed", "Admin ID or Password is wrong.");
    }

}
