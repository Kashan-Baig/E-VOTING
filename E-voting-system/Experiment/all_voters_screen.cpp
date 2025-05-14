#include "all_voters_screen.h"
#include "ui_all_voters_screen.h"
#include "database.h"
#include "QLabel"
#include "QPushButton"
#include "QMessageBox"
#include "candidates_dashboard.h"


all_voters_screen::all_voters_screen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::all_voters_screen)
{
    ui->setupUi(this);
    this->setMinimumSize(700, 550);
    loadVoters();

}


void all_voters_screen::loadVoters()
{
    // STEP 1: Get the list of candidates from database
    QList<QVariantMap> votersList = Database::getUsersList();

    // STEP 2: Get the layout inside the ScrollArea (QVBoxLayout on scrollAreaWidgetContents)
    QVBoxLayout *layout = ui->votersList->findChild<QVBoxLayout *>();

    // Optional clean-up: Clear existing widgets in case you're reloading
    QLayoutItem *child;
    while ((child = layout->takeAt(0)) != nullptr) {
        if (child->widget()) {
            child->widget()->deleteLater();
        }
        delete child;
    }


    // STEP 3: Dynamically add a widget for each candidate
    for (const QVariantMap &voters : votersList) {
        QString cnic = voters["cnic"].toString();
        QString username = voters["username"].toString();
        QString dob = voters["date_of_birth"].toString();
        int vote_casted = voters["vote_casted"].toInt();  // Important for delete


        // --- Voter Row Widget ---
        QWidget *voterWidget = new QWidget;
        QGridLayout *voterLayout = new QGridLayout(voterWidget);

        // --- Apply border to the whole tile ---
        voterWidget->setStyleSheet(
            "border: 1px solid gray; border-radius: 5px; margin-bottom: 8px; padding: 10px;"
            );

        // --- Left side: Text ---
        QLabel *infoLabel = new QLabel;
        QString text = QString(
                           "<span style='font-size:16px; font-weight:bold;'>%1</span><br>"
                           "<span style='font-weight:bold;'>Party:</span> %2<br>"
                           "<i>%3</i>"
                           ).arg(username, dob, cnic);
        infoLabel->setText(text);
        infoLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        infoLabel->setStyleSheet("border: none;");

        QLabel *isVotedLabel = new QLabel;
        isVotedLabel->setText("Voted");
          isVotedLabel->setStyleSheet("font-weight: bold; border: none;");

        QLabel *voteStatusLabel = new QLabel;
        QString imagePath = vote_casted == 1 ? ":/New folder/tick.png" : ":/New folder/cross.png";
        voteStatusLabel->setPixmap(QPixmap(imagePath).scaled(32, 32, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        voteStatusLabel->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        voteStatusLabel->setStyleSheet("border: none;");

        QHBoxLayout *votedLayout = new QHBoxLayout;
        votedLayout->addWidget(isVotedLabel);   // Add "Voted" label
        votedLayout->addWidget(voteStatusLabel); // Add vote status image

        QWidget *votedWidget = new QWidget;
        votedWidget->setLayout(votedLayout);

        voterLayout->addWidget(infoLabel, 0, 0);
      voterLayout->addWidget(votedWidget, 0, 1);   // Right: Voted icon


        // Stretch settings: let info take most space
        voterLayout->setColumnStretch(0, 5); // Info text
        voterLayout->setColumnStretch(1, 1);

        // --- Add row to main layout ---
        layout->addWidget(voterWidget);
    }

    layout->addStretch();
}



all_voters_screen::~all_voters_screen()
{
    delete ui;
}



void all_voters_screen::on_backButton_clicked()
{
    hide();
    candidates_dashboard* tocanddash = new candidates_dashboard();
    tocanddash->show();
}

