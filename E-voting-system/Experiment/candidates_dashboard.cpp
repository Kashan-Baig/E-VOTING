#include "candidates_dashboard.h"
#include "ui_candidates_dashboard.h"
#include "candidate_screen.h"
#include "database.h"
#include "graph.h"


candidates_dashboard::candidates_dashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::candidates_dashboard)
{
    ui->setupUi(this);
    QList<QVariantMap> latestTwoCandidates =  Database::getLatestCandidates();
    if (latestTwoCandidates.size() > 0) {
        QVariantMap firstcandidate = latestTwoCandidates[0];
        ui->id_1->setText(QString::number(firstcandidate["id"].toInt()));
        ui->name_1->setText(firstcandidate["full_name"].toString());
        ui->party_1->setText(firstcandidate["party_name"].toString());
        ui->bio_1->setText(firstcandidate["bio"].toString());
    } else {
        // No candidate available
        ui->id_1->setText("-");
        ui->name_1->setText("No Candidate");
        ui->party_1->setText("-");
        ui->bio_1->setText("-");
    }

    // Second candidate (optional)
    if (latestTwoCandidates.size() > 1) {
        QVariantMap secondcandidate = latestTwoCandidates[1];
        ui->id_2->setText(QString::number(secondcandidate["id"].toInt()));
        ui->name_2->setText(secondcandidate["full_name"].toString());
        ui->party_2->setText(secondcandidate["party_name"].toString());
        ui->bio_2->setText(secondcandidate["bio"].toString());
    } else {
        // No second candidate
        ui->id_2->setText("-");
        ui->name_2->setText("No Candidate");
        ui->party_2->setText("-");
        ui->bio_2->setText("-");
    }
    ui->total_candidates->setText(QString::number(Database::getTotalCandidates()));
    ui->total_voters->setText(QString::number(Database::getTotalUsers()));
    ui->total_votes_casted->setText(QString::number(Database::getTotalVotesCasted()));
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


void candidates_dashboard::on_cadidates_btn_clicked()
{
    hide();
    graph* chrt = new graph(this);
    chrt->show();
}

