#include "graph.h"
#include "database.h"  // So we can call calculatePartyVotes()
#include <QVBoxLayout>


graph::graph(candidates_dashboard *dashboard, QWidget *parent)
    : QWidget(parent), dashboardWindow(dashboard)
    {
    // Get the party votes map from database
    QMap<QString, int> partyVotes = Database::calculatePartyVotes();

    // Create a new bar series
    series = new QBarSeries();

    // For X-axis categories
    QStringList categories;

    // Dynamically create bar sets based on partyVotes map
    for (auto it = partyVotes.begin(); it != partyVotes.end(); ++it) {
        QString partyName = it.key();
        int voteCount = it.value();

        QBarSet *barSet = new QBarSet(partyName);  // Party name as label
        *barSet << voteCount;  // Append the vote count

        series->append(barSet);  // Add set to series
        categories << partyName; // Add party name to X-axis categories
    }

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
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Create the chart view and add it to the widget
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);


    backButton = new QPushButton("Back");
    connect(backButton, &QPushButton::clicked, this, [=]() {
        dashboardWindow->show();   // Now dashboardWindow is valid
        this->close();             // Close graph window
    });

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(chartView);
    layout->addWidget(backButton);
    setLayout(layout);
}






graph::~graph()
{
    // Optional cleanup — Qt cleans up child widgets automatically
}
