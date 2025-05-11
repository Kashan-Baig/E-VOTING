#ifndef CANDIDATE_SCREEN_H
#define CANDIDATE_SCREEN_H

#include <QDialog>

namespace Ui {
class Candidate_screen;
}

class Candidate_screen : public QDialog
{
    Q_OBJECT

public:
    explicit Candidate_screen(QWidget *parent = nullptr);
    ~Candidate_screen();

private slots:
    void on_addCandidateButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::Candidate_screen *ui;
    void loadCandidates();
};

#endif // CANDIDATE_SCREEN_H
