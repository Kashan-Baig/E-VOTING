#include "vote_casting.h"
#include "ui_vote_casting.h"
#include "database.h"
#include "qlabel.h"
#include "QMessageBox"


Vote_Casting::Vote_Casting(const QString &cnic ,QWidget *parent )
    : QDialog(parent)
        , userCNIC(cnic)
    , ui(new Ui::Vote_Casting)

{
    this->setMinimumSize(750, 550);
    ui->setupUi(this);

    // STEP 1: Get the list of candidates from database
    QList<QVariantMap> candidatesList = Database::getAllCandidates();

    // STEP 2: Get the layout inside the ScrollArea (QVBoxLayout on scrollAreaWidgetContents)
    QVBoxLayout *layout = ui->allCandidateContents->findChild<QVBoxLayout *>();

    // Optional clean-up: Clear existing widgets in case you're reloading
    QLayoutItem *child;
    while ((child = layout->takeAt(0)) != nullptr) {
        if (child->widget()) {
            child->widget()->deleteLater();
        }
        delete child;
    }
    // STEP 3: Dynamically add a widget for each candidate
    for (const QVariantMap &candidate : candidatesList) {
        QString name = candidate["full_name"].toString();
        QString party = candidate["party_name"].toString();
        QString bio = candidate["bio"].toString();
        int id = candidate["id"].toInt();
        QByteArray photoData = candidate["photo"].toByteArray();

        // --- Candidate Row Widget ---
        QWidget *candidateWidget = new QWidget;
        QHBoxLayout *candidateLayout = new QHBoxLayout(candidateWidget);
  \
        // --- Apply border to the whole tile (candidateWidget) ---
        candidateWidget->setStyleSheet(
            "border: 1px solid gray; border-radius: 5px; margin-bottom: 8px; padding: 10px;"
            );

        // --- Left side: Text ---
        QLabel *infoLabel = new QLabel;
        QString text = QString(
                           "<span style='font-size:16px; font-weight:bold;'>%1</span><br>"
                           "<span style='font-weight:bold;'>Party:</span> %2<br>"
                           "<i>%3</i>"
                           ).arg(name, party, bio);
        infoLabel->setText(text);
        infoLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

        // --- Remove individual borders from infoLabel ---
        infoLabel->setStyleSheet("border: none;");

        // --- Right side: Photo ---
        QLabel *photoLabel = new QLabel;
        QPixmap pixmap;
        pixmap.loadFromData(photoData);

        QPixmap scaledPixmap = pixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        photoLabel->setPixmap(scaledPixmap);
        photoLabel->setFixedSize(100, 100);

        // --- Remove individual borders from photoLabel ---
        photoLabel->setStyleSheet("border: none;");

        // --- Add to row layout ---
        candidateLayout->addWidget(infoLabel);
        candidateLayout->addWidget(photoLabel);

        // --- Add row to main vertical layout ---
        layout->addWidget(candidateWidget);

        candidateWidget->installEventFilter(this);
        candidateWidget->setProperty("id", id ); // Store CNIC as property
    }




    // STEP 4 (Optional): Add stretch to push everything up
    layout->addStretch();
    connect(ui->submitButton, &QPushButton::clicked, this, [=]() {
        if (selectedCandidateCNIC.isEmpty()) {
            QMessageBox::warning(this, "No Selection", "Please select a candidate before submitting.");
            return;
        }

        QMessageBox::StandardButton confirm = QMessageBox::question(
            this,
            "Confirm Vote",
            "Are you sure you want to cast your vote for this candidate?",
            QMessageBox::Yes | QMessageBox::No
            );

        if (confirm == QMessageBox::Yes) {

            if (Database::castVote(userCNIC, selectedCandidateCNIC)) {
                QMessageBox::information(this, "Vote Cast", "Your vote has been cast successfully.");
                // this->close(); // or disable UI
            } else {
                QMessageBox::critical(this, "Err    or", "Failed to cast vote. Try again.");
            }
        }
    });


}
bool Vote_Casting::eventFilter(QObject *watched, QEvent *event) {
    if (event->type() == QEvent::MouseButtonPress) {
        QWidget *clickedWidget = qobject_cast<QWidget *>(watched);
        if (clickedWidget && clickedWidget->property("id").isValid()) {
            // Un-highlight previous selection
            if (selectedCandidateWidget) {
                selectedCandidateWidget->setStyleSheet(
                    "border: 1px solid gray; border-radius: 5px; margin-bottom: 8px; padding: 10px;"
                    );
            }

            // Highlight current
            clickedWidget->setStyleSheet(
                "border: 2px solid blue; border-radius: 5px; margin-bottom: 8px; padding: 10px;"
                );
            selectedCandidateWidget = clickedWidget;
            selectedCandidateCNIC = clickedWidget->property("id").toString();
        }
    }
    return QObject::eventFilter(watched, event);
}


Vote_Casting::~Vote_Casting()
{
    delete ui;
}
