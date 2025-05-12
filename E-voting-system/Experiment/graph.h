#ifndef GRAPH_H
#define GRAPH_H


#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QPushButton>  // Include for Back button
#include "candidates_dashboard.h"



QT_USE_NAMESPACE

    class graph : public QWidget
{
    Q_OBJECT  // This macro is required for Qt's meta-object system

public:
    explicit graph(candidates_dashboard *dashboard, QWidget *parent = nullptr);
    ~graph();

private:
    QChartView *chartView;    // The chart view to display the chart
    QChart *chart;            // The actual chart
    QBarSeries *series;       // The bar series (data)
    QPushButton *backButton;  // Back button
    candidates_dashboard *dashboardWindow;
};

#endif // GRAPH_H
