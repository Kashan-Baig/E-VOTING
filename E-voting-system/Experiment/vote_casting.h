#ifndef VOTE_CASTING_H
#define VOTE_CASTING_H

#include <QDialog>
#include <QButtonGroup>

namespace Ui {
class Vote_Casting;
}

class Vote_Casting : public QDialog
{
    Q_OBJECT


public:
    explicit Vote_Casting(const QString &cnic ,QWidget *parent = nullptr);
    ~Vote_Casting();

protected:
        bool eventFilter(QObject *watched, QEvent *event) override;

private:
    QString userCNIC;  // Store the logged-in user's CNIC
    Ui::Vote_Casting *ui;
    QButtonGroup *buttonGroup;
    QString selectedCandidateCNIC;
    QWidget* selectedCandidateWidget = nullptr;
private slots:
};

#endif // VOTE_CASTING_H
