#include "candidate_screen.h"
#include "ui_candidate_screen.h"

Candidate_screen::Candidate_screen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Candidate_screen)
{
    ui->setupUi(this);
}

Candidate_screen::~Candidate_screen()
{
    delete ui;
}
