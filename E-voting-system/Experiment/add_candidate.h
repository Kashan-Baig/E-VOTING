#ifndef ADD_CANDIDATE_H
#define ADD_CANDIDATE_H

#include <QDialog>

namespace Ui {
class Candidate;
}

class Candidate : public QDialog
{
    Q_OBJECT

public:
    explicit Candidate(QWidget *parent = nullptr);
    ~Candidate();

private:
    Ui::Candidate *ui;
};

#endif // ADD_CANDIDATE_H
