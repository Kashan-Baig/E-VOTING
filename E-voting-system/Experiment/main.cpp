#include "voter_login.h"
#include <QApplication>
#include <QDebug>
#include "database.h"
#include <QMessageBox>
#include <QFile>
#include <QStyleFactory>
#include "mainpage.h"
#include "ui_mainpage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Set application-wide style for consistent look
    a.setStyle(QStyleFactory::create("Fusion"));  // Start with Fusion style as base

    // Apply custom stylesheet
    a.setStyleSheet(
        // Base widget styling
        "QWidget {"
        "   background-color: #f5f5f5;"
        "   font-family: 'Segoe UI';"
        "}"

        // Message box styling (ensures text visibility)
        "QMessageBox {"
        "   background-color: #f5f5f5;"
        "   border: 1px solid #ddd;"
        "}"
        "QMessageBox QLabel {"
        "   color: #333333;"  // Dark text for visibility
        "   font-size: 14px;"
        "}"
        "QMessageBox QPushButton {"
        "   background-color: #1a3e8c;"  // Navy blue
        "   color: white;"
        "   padding: 8px 16px;"
        "   border-radius: 5px;"
        "   min-width: 80px;"
        "}"
        "QMessageBox QPushButton:hover {"
        "   background-color: #0d2b5e;"  // Darker blue
        "}"
        );

    Mainpage w;
    w.show();
    return a.exec();
}
