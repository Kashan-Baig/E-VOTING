#include "candidates_dashboard.h"
#include "ui_candidates_dashboard.h"
#include "candidate_screen.h"

candidates_dashboard::candidates_dashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::candidates_dashboard)
{
    ui->setupUi(this);
}

candidates_dashboard::~candidates_dashboard()
{
    delete ui;
}

void candidates_dashboard::on_voters_btn_clicked()
{
    hide();
    Candidate_screen* cand = new Candidate_screen();
    cand->show();
}

