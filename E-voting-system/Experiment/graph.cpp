#include "graph.h"
#include "database.h"  // So we can call calculatePartyVotes()
#include <QVBoxLayout>
#include <QPieSeries>
#include <QPieSlice>
#include <QChartView>
#include <QStringList>
#include <QPushButton>

graph::graph(candidates_dashboard *dashboard, QWidget *parent)
    : QWidget(parent), dashboardWindow(dashboard)
{
    setMinimumSize(800, 600);

    // Get the party votes map from the database
    QMap<QString, int> partyVotes = Database::calculatePartyVotes();

    // Create a single bar set for all party votes
    QBarSet *barSet = new QBarSet("Votes");

    // For X-axis categories
    QStringList categories;

    for (auto it = partyVotes.begin(); it != partyVotes.end(); ++it) {
        categories << it.key();         // Add party to X-axis
        *barSet << it.value();          // Append votes in order
    }

    // Create series and add the bar set
    series = new QBarSeries();
    series->append(barSet);
    // Create the chart
    chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Votes by Party");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Set up the X-axis (party names)
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Set up the Y-axis (votes count) — auto-adjust max value
    int maxVotes = *std::max_element(partyVotes.begin(), partyVotes.end());
    int yAxisMax = (maxVotes < 10) ? 10 : maxVotes + 5;  // Minimum 10, small padding

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, yAxisMax);
    axisY->setTickCount(11);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Create the chart view for bar chart and add it to the widget
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Create a pie chart for total voters vs voted
    QPieSeries *pieSeries = new QPieSeries();
    int totalVoters = Database::getTotalUsers();
    int votedVoters = Database::getTotalVotesCasted();

    pieSeries->append("Voted", votedVoters);
    pieSeries->append("Not Voted", totalVoters - votedVoters);

    // Customize pie chart slices
    for (QPieSlice *slice : pieSeries->slices()) {
        slice->setLabelVisible(true);
        slice->setExploded(true);  // Optional: Makes the slices pop out

        // Set the label to show the percentage and value
        double percentage = (slice->value() / totalVoters) * 100;
        QString label = QString("%1 (%2)").arg(slice->label()).arg(QString::number(slice->value()));
        slice->setLabel(label);  // Setting value on the pie slice
    }

    QChart *pieChart = new QChart();
    pieChart->addSeries(pieSeries);
    pieChart->setTitle("Voter Turnout");

    QChartView *pieChartView = new QChartView(pieChart);
    pieChartView->setRenderHint(QPainter::Antialiasing);

    // Back Button
    backButton = new QPushButton("Back");
    backButton->setStyleSheet(
        "QPushButton { background-color: rgb(229, 62, 62); color: white; border: none; border-radius: 6px; font-size: 14px; font-weight: 600; padding: 5px; min-height: 20px; min-width: 150px; }"
        "QPushButton:hover { background-color: #c9302c; }"
        );
    connect(backButton, &QPushButton::clicked, this, [=]() {
        dashboardWindow->show();   // Now dashboardWindow is valid
        this->close();             // Close graph window
    });
    backButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    // Layout setup
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(backButton, 0, Qt::AlignHCenter);  // Center the button horizontally
    layout->addWidget(chartView);   // Bar chart view
    layout->addWidget(pieChartView); // Pie chart view

    setLayout(layout);
}

graph::~graph()
{
    // Optional cleanup — Qt cleans up child widgets automatically
}
