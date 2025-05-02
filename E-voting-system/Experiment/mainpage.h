#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include "voter_login.h"

namespace Ui {
class Mainpage;
}

class Mainpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mainpage(QWidget *parent = nullptr);
    ~Mainpage();

private slots:

    void on_Voter_btn_clicked();

    void on_Admin_btn_clicked();

private:
    Ui::Mainpage *ui;
    MainWindow *voter;
};

#endif // MAINPAGE_H
