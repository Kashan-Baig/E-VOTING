#include "candidate_screen.h"
#include "ui_candidate_screen.h"
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
        QPixmap scaledPixmap = pixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        photoLabel->setPixmap(scaledPixmap);
        photoLabel->setFixedSize(100, 100);
        photoLabel->setStyleSheet("border: none;");

        // --- Top-right side: Delete button ---
        QPushButton *deleteButton = new QPushButton("Delete");
        deleteButton->setStyleSheet(
            "QPushButton { background-color: #d9534f; color: white; padding: 8px 12px; border-radius: 5px;min-height: 18px;min-width: 70px;font-weight: bold; }"
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

        // --- Add widgets to grid layout ---
        // Row 0: Delete button (top-right)
        candidateLayout->addWidget(deleteButton, 0, 2, Qt::AlignRight | Qt::AlignTop);
        // Row 1: Info (spanning 2 columns) and photo
        candidateLayout->addWidget(infoLabel, 1, 0, 1, 2);
        candidateLayout->addWidget(photoLabel, 1, 2);

        // Set row stretch so delete button stays at top
        candidateLayout->setRowStretch(0, 0); // Don't stretch delete button row
        candidateLayout->setRowStretch(1, 1); // Stretch content row

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
