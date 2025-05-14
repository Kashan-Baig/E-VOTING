#ifndef ALL_VOTERS_SCREEN_H
#define ALL_VOTERS_SCREEN_H

#include <QWidget>

namespace Ui {
class all_voters_screen;
}

class all_voters_screen : public QWidget
{
    Q_OBJECT

public:
    explicit all_voters_screen(QWidget *parent = nullptr);
    ~all_voters_screen();


private slots:
    void on_backButton_clicked();


private:
    Ui::all_voters_screen *ui;
        void loadVoters();
};

#endif // ALL_VOTERS_SCREEN_H
