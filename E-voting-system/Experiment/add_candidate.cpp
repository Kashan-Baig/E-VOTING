#include "add_candidate.h"
#include "ui_add_candidate.h"

Candidate::Candidate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Candidate)
{
    ui->setupUi(this);
}

Candidate::~Candidate()
{
    delete ui;
}
