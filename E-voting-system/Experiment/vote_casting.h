#ifndef VOTE_CASTING_H
#define VOTE_CASTING_H

#include <QDialog>

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
};

#endif // VOTE_CASTING_H
