#include "candidate_screen.h"
#include "ui_candidate_screen.h"
#include "add_candidate.h"
#include "database.h"
#include "QLabel"
#include "candidates_dashboard.h"


Candidate_screen::Candidate_screen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Candidate_screen)
{
    this->setMinimumSize(700, 550);
    ui->setupUi(this);

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
        QByteArray photoData = candidate["photo"].toByteArray();

        // --- Candidate Row Widget ---
        QWidget *candidateWidget = new QWidget;
        QHBoxLayout *candidateLayout = new QHBoxLayout(candidateWidget);
        // candidateLayout->setContentsMargins(0, 0, 0, 0);  // NO margin here
        // candidateLayout->setSpacing(10);  // small space between text & photo

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
    }




    // STEP 4 (Optional): Add stretch to push everything up
    layout->addStretch();


}

Candidate_screen::~Candidate_screen()
{
    delete ui;
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

