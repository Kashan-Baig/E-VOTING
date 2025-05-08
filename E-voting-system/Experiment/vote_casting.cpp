#include "vote_casting.h"
#include "ui_vote_casting.h"
#include "database.h"
#include "qlabel.h"
#include <QRadioButton>   // ADD THIS
#include <QButtonGroup>   // ADD THIS
#include <QMessageBox>    // For submit warning (optional)
#include <QSqlQuery>
#include <QSqlError>

Vote_Casting::Vote_Casting(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Vote_Casting)
{
    ui->setupUi(this);

    // STEP 1: Get the list of candidates from database
    QList<QVariantMap> candidatesList = Database::getAllCandidates();

    // STEP 2: Get the layout inside the ScrollArea (QVBoxLayout on allCandidateContents)
    QVBoxLayout *layout = ui->allCandidateContents->findChild<QVBoxLayout *>();

    // Optional clean-up: Clear existing widgets in case you're reloading
    QLayoutItem *child;
    while ((child = layout->takeAt(0)) != nullptr) {
        if (child->widget()) {
            child->widget()->deleteLater();
        }
        delete child;
    }

    // STEP 3: Create a button group to ensure only one radio button is selectable
    buttonGroup = new QButtonGroup(this);  // NOTE: buttonGroup is made member variable (declare in header)
    buttonGroup->setExclusive(true);

    // STEP 4: Dynamically add a widget for each candidate
    for (const QVariantMap &candidate : candidatesList) {
        QString name = candidate["full_name"].toString();
        QString party = candidate["party_name"].toString();
        QString bio = candidate["bio"].toString();
        QByteArray photoData = candidate["photo"].toByteArray();
        int candidateId = candidate["id"].toInt();  // Ensure 'id' column exists

        // --- Candidate Row Widget ---
        QWidget *candidateWidget = new QWidget;
        QHBoxLayout *candidateLayout = new QHBoxLayout(candidateWidget);

        candidateWidget->setStyleSheet(
            "border: 1px solid gray; border-radius: 5px; margin-bottom: 8px; padding: 10px;"
            );

        // --- Radio Button ---
        QRadioButton *radioButton = new QRadioButton;
        buttonGroup->addButton(radioButton, candidateId);  // map radio to candidateId

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

        // --- Right side: Photo ---
        QLabel *photoLabel = new QLabel;
        QPixmap pixmap;
        pixmap.loadFromData(photoData);
        QPixmap scaledPixmap = pixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        photoLabel->setPixmap(scaledPixmap);
        photoLabel->setFixedSize(100, 100);
        photoLabel->setStyleSheet("border: none;");

        // --- Add to row layout ---
        candidateLayout->addWidget(radioButton);  // add radio FIRST
        candidateLayout->addWidget(infoLabel);
        candidateLayout->addWidget(photoLabel);

        // --- Add row to main vertical layout ---
        layout->addWidget(candidateWidget);
    }

    // STEP 5 (Optional): Add stretch to push everything up
    layout->addStretch();

    // STEP 6: Connect your submit button (You must have one in UI named 'submitButton')
    connect(ui->submitButton, &QPushButton::clicked, this, &Vote_Casting::submitVote);
}

void Vote_Casting::submitVote()
{
    QAbstractButton *selectedButton = buttonGroup->checkedButton();
    if (selectedButton) {
        int selectedCandidateId = buttonGroup->id(selectedButton);
        qDebug() << "Selected Candidate ID:" << selectedCandidateId;

        // Save vote in database here
        QSqlQuery query;
        query.prepare("INSERT INTO votes (candidate_id) VALUES (:candidate_id)");
        query.bindValue(":candidate_id", selectedCandidateId);

        if (query.exec()) {
            QMessageBox::information(this, "Vote Cast", "Your vote has been successfully submitted!");
            this->accept();  // Close the dialog
        } else {
            QMessageBox::critical(this, "Database Error", "Failed to submit vote.\n" + query.lastError().text());
        }

    } else {
        QMessageBox::warning(this, "No Selection", "Please select a candidate before submitting your vote.");
    }

}
    Vote_Casting::~Vote_Casting()
{
    delete ui;
}
