#include "database.h"
#include <QDate>
#include <QSqlError>   // Added for better error messages

QSqlDatabase Database::connectDB() {
    const QString connectionName = QSqlDatabase::defaultConnection;

    // Reuse existing connection if available
    if (QSqlDatabase::contains(connectionName)) {
        QSqlDatabase db = QSqlDatabase::database(connectionName);
        if (!db.isOpen()) {
            if (!db.open()) {
                qDebug() << "Error: Could not open existing database connection!";
            }
        }
        return db;
    }

    // Create new connection only once
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Adnan/Desktop/E-vote2/E-voting-system/database/users.db");

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
                             "date_of_birth TEXT NOT NULL, "
                             "vote_casted INTEGER NOT NULL DEFAULT 0)";

    if (!query.exec(createTableSQL)) {
        qDebug() << "Error creating table: " << query.lastError().text();
        return false;
    }

    qDebug() << "Users table created successfully!";
    return true;
}

bool Database::insertUser(const QString &username, const QString &password, const QString &cnic, const QDate &dob, const bool voteCasted) {
    QSqlDatabase db = connectDB();
    QSqlQuery query(db);

    query.prepare("INSERT INTO users (username, password, cnic, date_of_birth) "
                  "VALUES (:username, :password, :cnic, :dob)");
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

int Database::loginUser(const QString &cnic, const QString &password) {
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

bool Database::setVoteCasted(const QString &cnic) {
    QSqlDatabase db = connectDB();
    QSqlQuery query(db);

    query.prepare("UPDATE users SET vote_casted = 1 WHERE cnic = :cnic");
    query.bindValue(":cnic", cnic);

    if (!query.exec()) {
        qDebug() << "Error updating vote_casted:" << query.lastError().text();
        return false;
    }

    if (query.numRowsAffected() == 0) {
        qDebug() << "No user found with CNIC:" << cnic;
        return false; // No user updated
    }

    qDebug() << "Vote casted successfully updated for CNIC:" << cnic;
    return true;
}

// ------------------------ candidates database table ----------------------------------

bool Database::createCandidatesTable() {
    QSqlDatabase db = Database::connectDB();
    QSqlQuery query(db);
    QString createTableSQL = "CREATE TABLE IF NOT EXISTS candidates ("
                             "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                             "photo BLOB, "
                             "full_name TEXT NOT NULL, "
                             "party_name TEXT NOT NULL, "
                             "age INTEGER NOT NULL, "
                             "election_symbol TEXT, "
                             "bio TEXT)";

    if (!query.exec(createTableSQL)) {
        qDebug() << "Error creating candidates table:" << query.lastError().text();
        return false;
    }

    qDebug() << "Candidates table created successfully!";
    return true;
}

bool Database::insertCandidate(const QByteArray &photoData, const QString &fullName,
                               const QString &partyName, int age,
                               const QString &electionSymbol, const QString &bio) {
    QSqlDatabase db = connectDB();
    QSqlQuery query(db);

    query.prepare("INSERT INTO candidates (photo, full_name, party_name, age, election_symbol, bio) "
                  "VALUES (:photo, :full_name, :party_name, :age, :election_symbol, :bio)");
    query.bindValue(":photo", photoData);
    query.bindValue(":full_name", fullName);
    query.bindValue(":party_name", partyName);
    query.bindValue(":age", age);
    query.bindValue(":election_symbol", electionSymbol);
    query.bindValue(":bio", bio);

    if (!query.exec()) {
        qDebug() << "Error inserting candidate:" << query.lastError().text();
        return false;
    }

    qDebug() << "Candidate inserted successfully!";
    return true;
}

// get total candidates
int Database::getTotalCandidates() {
    QSqlDatabase db = connectDB();
    QSqlQuery query(db);

    if (!query.exec("SELECT COUNT(*) FROM candidates")) {
        qDebug() << "Error counting candidates:" << query.lastError().text();
        return -1; // Return -1 if there is an error
    }

    if (query.next()) {
        int count = query.value(0).toInt();
        qDebug() << "Total candidates:" << count;
        return count;
    }

    return 0; // No candidates found
}

int Database::getTotalUsers() {
    QSqlDatabase db = connectDB();
    QSqlQuery query(db);

    if (!query.exec("SELECT COUNT(*) FROM users")) {
        qDebug() << "Error counting users:" << query.lastError().text();
        return -1; // Return -1 if there is an error
    }

    if (query.next()) {
        int count = query.value(0).toInt();
        qDebug() << "Total users:" << count;
        return count;
    }

    return 0; // No users found
}

int Database::getTotalVotesCasted() {
    QSqlDatabase db = connectDB();
    QSqlQuery query(db);

    if (!query.exec("SELECT COUNT(*) FROM users WHERE vote_casted = 1")) {
        qDebug() << "Error counting votes casted:" << query.lastError().text();
        return -1; // Return -1 if there is an error
    }

    if (query.next()) {
        int count = query.value(0).toInt();
        qDebug() << "Total votes casted:" << count;
        return count;
    }

    return 0; // No votes casted
}

int Database::getLatestCandidates() {
    QSqlDatabase db = connectDB();
    QSqlQuery query(db);

    if (!query.exec("SELECT * FROM candidates ORDER BY id DESC LIMIT 2")) {
        qDebug() << "Error fetching latest candidates:" << query.lastError().text();
        return -1; // Return -1 if there is an error
    }

    int count = 0;
    while (query.next()) {
        count++;
    }

    qDebug() << "Latest candidates count (up to 2):" << count;
    return count;
}
