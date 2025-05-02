#include "database.h"
#include <QDate>
QSqlDatabase Database::connectDB() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Adnan/Desktop/work/QT-E-voting/database/users.db");
      // Path to your SQLite database

    if (!db.open()) {
        qDebug() << "Error: Could not connect to database!";
    } else {
        qDebug() << "Database connected successfully!";
    }
    return db;
}

// Function to create users table
bool Database::createTable() {
    QSqlDatabase db = Database::connectDB();
    QSqlQuery query(db);

    QString createTableSQL = "CREATE TABLE IF NOT EXISTS users ("
                             "cnic TEXT PRIMARY KEY, "
                             "username TEXT NOT NULL, "
                             "password TEXT NOT NULL, "
                             "date_of_birth TEXT NOT NULL)";

    if (!query.exec(createTableSQL)) {
        qDebug() << "Error creating table: " << query.lastError().text();
        return false;
    }

    qDebug() << "Users table created successfully!";
    return true;
}
bool Database::insertUser(const QString &username, const QString &password  ,const QString &cnic,const QDate &dob) {
    QSqlDatabase db = connectDB();
    QSqlQuery query(db);

    query.prepare("INSERT INTO users (username, password, cnic, date_of_birth) "
                  "VALUES (:username, :password , :cnic, :dob)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":cnic", cnic);
     query.bindValue(":dob", dob.toString("yyyy-MM-dd"));

    if (!query.exec()) {
        qDebug() << "Error inserting user: " << query.lastError().text();
        return false;
    }

    qDebug() << "User inserted successfully!";
    return true;
}
    int Database::loginUser(const QString &cnic, const QString &password){
    QSqlDatabase db = connectDB();
    QSqlQuery query(db);

    // First check if CNIC exists
    query.prepare("SELECT password FROM users WHERE cnic = :cnic");
    query.bindValue(":cnic", cnic);

    if (!query.exec()) {
        qDebug() << "Login query error: " << query.lastError().text();
        return -1;  // Database error
    }

    if (!query.next()) {
        qDebug() << "No user found with this CNIC.";
        return 0;  // CNIC not found
    }

    QString storedPassword = query.value("password").toString();
    if (storedPassword != password) {
        qDebug() << "Incorrect password for CNIC:" << cnic;
        return 1;  // Password incorrect
    }

    qDebug() << "Login successful for CNIC:" << cnic;
    return 2;  // Login successful
}
