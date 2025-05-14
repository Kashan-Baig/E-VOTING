#include "all_candidate_screen.h"
#include "ui_all_candidate_screen.h"
#include "add_candidate.h"
#include "database.h"
#include "QLabel"
#include "QPushButton"
#include "QMessageBox"
#include "candidates_dashboard.h"

Candidate_screen::Candidate_screen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Candidate_screen)
{
    this->setMinimumSize(700, 550);
    ui->setupUi(this);

    loadCandidates();  // Load candidates on startup
}

Candidate_screen::~Candidate_screen()
{
    delete ui;
}

void Candidate_screen::loadCandidates()
{
    // STEP 1: Get the list of candidates from database
    QList<QVariantMap> candidatesList = Database::getAllCandidates();

    // STEP 2: Get the layout inside the ScrollArea (QVBoxLayout on scrollAreaWidgetContents)
    QVBoxLayout *layout = ui->canddiateList->findChild<QVBoxLayout *>();

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
        int id = candidate["id"].toInt();  // Important for delete
        QByteArray photoData = candidate["photo"].toByteArray();

        // --- Candidate Row Widget ---
        QWidget *candidateWidget = new QWidget;
        QGridLayout *candidateLayout = new QGridLayout(candidateWidget);

        // --- Apply border to the whole tile ---
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
        infoLabel->setStyleSheet("border: none;");

        // --- Middle: Photo ---
        QLabel *photoLabel = new QLabel;
        QPixmap pixmap;
        pixmap.loadFromData(photoData);
        QPixmap scaledPixmap = pixmap.scaled(150, 150, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        photoLabel->setPixmap(scaledPixmap);
        photoLabel->setFixedSize(150, 150);
        photoLabel->setStyleSheet("border: none;");

        // --- Top-right side: Delete button ---
        QPushButton *deleteButton = new QPushButton("Del");
        deleteButton->setStyleSheet(
            "QPushButton { background-color: #d9534f; color: white; border-radius: 5px;min-height: 10px;min-width: 15px; font-size: 10px;  }"
            "QPushButton:hover { background-color: #c9302c; }"
            );
        deleteButton->setProperty("candidate_id", id);  // Store id
        deleteButton->setFixedSize(deleteButton->sizeHint()); // Make button compact

        connect(deleteButton, &QPushButton::clicked, this, [=]() {
            int candidateID = deleteButton->property("candidate_id").toInt();
            QMessageBox::StandardButton confirm = QMessageBox::question(
                this,
                "Confirm Delete",
                "Are you sure you want to delete this candidate?",
                QMessageBox::Yes | QMessageBox::No
                );

            if (confirm == QMessageBox::Yes) {
                if (Database::deleteCandidate(candidateID)) {
                    QMessageBox::information(this, "Deleted", "Candidate deleted successfully.");
                    loadCandidates();  // Reload updated list
                } else {
                    QMessageBox::critical(this, "Error", "Failed to delete candidate.");
                }
            }
        });

        candidateLayout->addWidget(infoLabel, 0, 0);                          // Left: Info
        candidateLayout->addWidget(photoLabel, 0, 1, Qt::AlignVCenter);       // Middle: Photo
        candidateLayout->addWidget(deleteButton, 0, 2, Qt::AlignRight | Qt::AlignTop); // Right-top: Delete button

        // Stretch settings: let info take most space
        candidateLayout->setColumnStretch(0, 5); // Info text
        candidateLayout->setColumnStretch(1, 1); // Image
        candidateLayout->setColumnStretch(2, 0); // Delete button
        // --- Add row to main layout ---
        layout->addWidget(candidateWidget);
    }

    layout->addStretch();
}

void Candidate_screen::on_addCandidateButton_clicked()
{
    hide();
    Candidate* addcandidateScreen = new Candidate();
    addcandidateScreen->show();
}

void Candidate_screen::on_pushButton_clicked()
{
    hide();
    candidates_dashboard* tocanddash = new candidates_dashboard();
    tocanddash->show();
}
