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
    explicit Vote_Casting(QWidget *parent = nullptr);
    ~Vote_Casting();

private:
    Ui::Vote_Casting *ui;
    QButtonGroup *buttonGroup;
private slots:
};

#endif // VOTE_CASTING_H
