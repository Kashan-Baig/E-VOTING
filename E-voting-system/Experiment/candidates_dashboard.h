#ifndef CANDIDATES_DASHBOARD_H
#define CANDIDATES_DASHBOARD_H

#include <QWidget>

namespace Ui {
class candidates_dashboard;
}

class candidates_dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit candidates_dashboard(QWidget *parent = nullptr);
    ~candidates_dashboard();

private slots:
    void on_voters_btn_clicked();



    void on_candidates_btn_clicked();

    void on_stats_btn_clicked();


    void on_logout_clicked();

private:
    Ui::candidates_dashboard *ui;
};

#endif // CANDIDATES_DASHBOARD_H
