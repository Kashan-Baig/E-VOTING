#include "add_candidate.h"
#include "ui_add_candidate.h"
#include <QFileDialog>
#include <QBuffer>
#include <QDebug>
#include "database.h"
#include"QMessageBox"
#include "candidate_screen.h"

Candidate::Candidate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Candidate)
{
    ui->setupUi(this);
}

Candidate::~Candidate()
{
    delete ui;
}


void Candidate::on_save_clicked(){
    QString fullName = ui->nameField->text();
    QString partyName = ui->partyDropDown->currentText();
    int age = ui->ageField->value();

    QString bio = ui->bioFiled->toPlainText();

    if (photoData.isEmpty()) {
        qDebug() << "No photo selected!";
        return;
    }

    Database db;
    if (!db.insertCandidate(photoData, fullName, partyName, age,  bio)) {
        QMessageBox::critical(nullptr, "Some Error occured",
                              "Failed to add candidate!");
        qDebug() << "Error: Could not insert candidate.";
    } else {
        QMessageBox::information(nullptr, "Candidate Added",
                                 "Candidate added successfully to the database.");
        qDebug() << "Candidate inserted successfully!";
    }
}


void Candidate::on_pushButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Select a Photo", "", "Images (*.png *.jpg *.jpeg *.bmp)");

    if (!filePath.isEmpty()) {
        QPixmap pixmap(filePath);
        ui->pictureLabel->setPixmap(pixmap);
        ui->pictureLabel->setScaledContents(true);

        // Convert to QByteArray
        QByteArray byteArray;
        QBuffer buffer(&byteArray);
        buffer.open(QIODevice::WriteOnly);
        pixmap.save(&buffer, "PNG");

        // Store in a class member for later use (like database insertion)
        photoData = byteArray;

    }
}


void Candidate::on_cancel_clicked()
{
    hide();
    Candidate_screen* tocand = new Candidate_screen();
    tocand->show();
}

