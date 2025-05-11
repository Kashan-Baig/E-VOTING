#include <QApplication>
#include <QDebug>
#include "database.h"
#include <QMessageBox>
#include <QFile>
#include <QStyleFactory>
#include "mainpage.h"
#include "ui_mainpage.h"
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Set application-wide style for consistent look
    a.setStyle(QStyleFactory::create("Fusion"));  // Start with Fusion style as base

    // Apply custom stylesheet
    a.setStyleSheet(
        "QWidget {"
        "   background-color: #f5f5f5;"
        "   font-family: 'Segoe UI';"
        "}"
        "QMessageBox {"
        "   background-color: #f5f5f5;"
        "   border: 1px solid #ddd;"
        "}"
        "QMessageBox QLabel {"
        "   color: #333333;"
        "   font-size: 14px;"
        "}"
        "QMessageBox QPushButton {"
        "   background-color: #1a3e8c;"
        "   color: white;"
        "   padding: 8px 16px;"
        "   border-radius: 5px;"
        "   min-width: 80px;"
        "}"
        "QMessageBox QPushButton:hover {"
        "   background-color: #0d2b5e;"
        "}"
        );

    // Your custom absolute path (Windows-safe with / slashes)
    QString dbPath = "C:/Users/Adnan/Desktop/E-vote2/E-voting-system/database/e-voting.db";


    qDebug() << "Database path:" << dbPath;

    // Ensure the 'database' folder exists (optional safety)

    if (!QFile::exists(dbPath)) {
        QMessageBox::critical(nullptr, "Database Error",
                              "Database folder does not exist!\n\nPlease create:\nC:/Users/Adnan/Desktop/E-vote2/E-voting-system/database");
        return -1;
    }

    if (!Database::initDB(dbPath)) {
        QMessageBox::critical(nullptr, "Database Error",
                              "Failed to initialize database connection!");
        return -1;
    }

    // Create tables
    Database db;
    if (!db.createTable() || !db.createCandidatesTable()) {
        QMessageBox::critical(nullptr, "Database Error",
                              "Failed to create database tables!");
        return -1;
    }

    Mainpage w;
    w.show();
    return a.exec();
}
