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

private slots:
    void on_save_clicked();

    void on_pushButton_clicked();

private:
    Ui::Candidate *ui;
    QByteArray photoData;
};

#endif // ADD_CANDIDATE_H
