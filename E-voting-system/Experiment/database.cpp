#include "database.h"
#include <QDate>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

QSqlDatabase Database::db = QSqlDatabase();

bool Database::initDB(const QString &dbPath) {
    if (QSqlDatabase::contains("main_connection")) {
        db = QSqlDatabase::database("main_connection");
        return true;
    }

    db = QSqlDatabase::addDatabase("QSQLITE", "main_connection");
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qCritical() << "Failed to connect to database:" << db.lastError().text();
        return false;
    }

    qDebug() << "Database connected successfully to:" << dbPath;

    // 🔽 Check and add total_votes column if it doesn't exist
    QSqlQuery columnCheckQuery(db);
    columnCheckQuery.exec("PRAGMA table_info(candidates)");
    bool columnExists = false;
    while (columnCheckQuery.next()) {
        if (columnCheckQuery.value(1).toString() == "total_votes") {
            columnExists = true;
            break;
        }
    }

    if (!columnExists) {
        QSqlQuery alterQuery(db);
        if (!alterQuery.exec("ALTER TABLE candidates ADD COLUMN total_votes INTEGER DEFAULT 0")) {
            qCritical() << "Failed to add total_votes column:" << alterQuery.lastError().text();
            return false;
        } else {
            qDebug() << "Column total_votes added successfully.";
        }
    }

    return true;
}

QSqlDatabase Database::getDB() {
    if (!db.isOpen()) {
        qWarning() << "Database connection is not open!";
    }
    return db;
}

bool Database::createTable() {
    QSqlQuery query(db);
    QString createTableSQL = "CREATE TABLE IF NOT EXISTS users ("
                             "cnic TEXT PRIMARY KEY, "
                             "username TEXT NOT NULL, "
                             "password TEXT NOT NULL, "
                             "date_of_birth TEXT NOT NULL, "
                             "vote_casted INTEGER NOT NULL DEFAULT 0)";

    if (!query.exec(createTableSQL)) {
        qCritical() << "Error creating users table:" << query.lastError().text();
        return false;
    }
    return true;
}

bool Database::insertUser(const QString &username, const QString &password,
                          const QString &cnic, const QDate &dob,
                          const bool voteCasted) {
    QSqlQuery query(db);
    query.prepare("INSERT INTO users (username, password, cnic, date_of_birth, vote_casted) "
                  "VALUES (:username, :password, :cnic, :dob, :vote_casted)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":cnic", cnic);
    query.bindValue(":dob", dob.toString("yyyy-MM-dd"));
    query.bindValue(":vote_casted", voteCasted ? 1 : 0);

    if (!query.exec()) {
        qCritical() << "Error inserting user:" << query.lastError().text();
        return false;
    }
    return true;
}

int Database::loginUser(const QString &cnic, const QString &password) {
    QSqlQuery query(db);
    query.prepare("SELECT password FROM users WHERE cnic = :cnic");
    query.bindValue(":cnic", cnic);

    if (!query.exec()) {
        qCritical() << "Login query error:" << query.lastError().text();
        return -1; // Database error
    }

    if (!query.next()) {
        return 0; // User not found
    }

    if (query.value("password").toString() != password) {
        return 1; // Wrong password
    }

    return 2; // Success
}
bool Database::castVote(const QString &userCNIC, const QString &candidateId) {
    QSqlQuery query(db);
    db.transaction();  // Begin transaction

    // Update the users table (set vote_casted to 1 for the user)
    query.prepare("UPDATE users SET vote_casted = 1 WHERE cnic = :cnic");
    query.bindValue(":cnic", userCNIC);
    if (!query.exec()) {
        db.rollback();
        qCritical() << "Error updating vote_casted in users table:" << query.lastError().text();
        return false;
    }

    // Update the candidates table (increment total_votes for the selected candidate)
    query.prepare("UPDATE candidates SET total_votes = total_votes + 1 WHERE id = :id");
    query.bindValue(":id", candidateId);
    if (!query.exec()) {
        db.rollback();
        qCritical() << "Error updating vote_count in candidates table:" << query.lastError().text();
        return false;
    }

    db.commit();  // Commit the transaction
    return true;
}
bool Database::createCandidatesTable() {
    QSqlQuery query(db);
    QString createTableSQL = "CREATE TABLE IF NOT EXISTS candidates ("
                             "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                             "photo BLOB, "
                             "full_name TEXT NOT NULL, "
                             "party_name TEXT NOT NULL, "
                             "age INTEGER NOT NULL, "
                             "bio TEXT, "
                             "total_votes INTEGER DEFAULT 0"
                             ")";

    if (!query.exec(createTableSQL)) {
        qCritical() << "Error creating candidates table:" << query.lastError().text();
        return false;
    }
    return true;
}


bool Database::insertCandidate(const QByteArray &photoData, const QString &fullName,
                               const QString &partyName, int age, const QString &bio) {
    QSqlQuery query(db);
    query.prepare("INSERT INTO candidates (photo, full_name, party_name, age, bio) "
                  "VALUES (:photo, :full_name, :party_name, :age, :bio)");
    query.bindValue(":photo", photoData);
    query.bindValue(":full_name", fullName);
    query.bindValue(":party_name", partyName);
    query.bindValue(":age", age);
    query.bindValue(":bio", bio);

    if (!query.exec()) {
        qCritical() << "Error inserting candidate:" << query.lastError().text();
        return false;
    }
    return true;
}

QList<QVariantMap> Database::getUsersList() {
    QList<QVariantMap> usersList;
    QSqlQuery query(db);

    if (!query.exec("SELECT * FROM users")) {
        qCritical() << "Error fetching users:" << query.lastError().text();
        return usersList;
    }

    while (query.next()) {
        QVariantMap user;
        user["cnic"] = query.value("cnic").toString();
        user["username"] = query.value("username").toString();
        user["password"] = query.value("password").toString();
        user["date_of_birth"] = query.value("date_of_birth").toString();
        user["vote_casted"] = query.value("vote_casted").toInt();
        usersList.append(user);
    }

    return usersList;
}

QList<QVariantMap> Database::getAllCandidates() {
    QList<QVariantMap> candidatesList;
    QSqlQuery query(db);

    if (!query.exec("SELECT * FROM candidates ORDER BY id DESC")) {
        qCritical() << "Error fetching candidates:" << query.lastError().text();
        return candidatesList;
    }

    while (query.next()) {
        QVariantMap candidate;
        candidate["id"] = query.value("id").toInt();
        candidate["photo"] = query.value("photo").toByteArray();
        candidate["full_name"] = query.value("full_name").toString();
        candidate["party_name"] = query.value("party_name").toString();
        candidate["age"] = query.value("age").toInt();
        candidate["bio"] = query.value("bio").toString();
        candidatesList.append(candidate);
    }

    return candidatesList;
}

QList<QVariantMap> Database::getLatestCandidates(int limit) {
    QList<QVariantMap> latestCandidates;
    QSqlQuery query(db);
    query.prepare("SELECT * FROM candidates ORDER BY id DESC LIMIT :limit");
    query.bindValue(":limit", limit);

    if (!query.exec()) {
        qCritical() << "Error fetching latest candidates:" << query.lastError().text();
        return latestCandidates;
    }

    while (query.next()) {
        QVariantMap candidate;
        candidate["id"] = query.value("id").toInt();
        candidate["photo"] = query.value("photo").toByteArray();
        candidate["full_name"] = query.value("full_name").toString();
        candidate["party_name"] = query.value("party_name").toString();
        candidate["age"] = query.value("age").toInt();
        candidate["bio"] = query.value("bio").toString();
        latestCandidates.append(candidate);
    }

    return latestCandidates;
}

int Database::getTotalCandidates() {
    QSqlQuery query(db);
    if (!query.exec("SELECT COUNT(*) FROM candidates")) {
        qCritical() << "Error counting candidates:" << query.lastError().text();
        return -1;
    }
    return query.next() ? query.value(0).toInt() : 0;
}

int Database::getTotalUsers() {
    QSqlQuery query(db);
    if (!query.exec("SELECT COUNT(*) FROM users")) {
        qCritical() << "Error counting users:" << query.lastError().text();
        return -1;
    }
    return query.next() ? query.value(0).toInt() : 0;
}

int Database::getTotalVotesCasted() {
    QSqlQuery query(db);
    if (!query.exec("SELECT COUNT(*) FROM users WHERE vote_casted = 1")) {
        qCritical() << "Error counting votes casted:" << query.lastError().text();
        return -1;
    }
    return query.next() ? query.value(0).toInt() : 0;
}
bool Database::deleteCandidate(int candidateID) {
    QSqlQuery query(db);
    query.prepare("DELETE FROM candidates WHERE id = :id");
    query.bindValue(":id", candidateID);

    if (!query.exec()) {
        qDebug() << "Delete error:" << query.lastError().text();
        return false;
    }
    return true;
}

QMap<QString, int> Database::calculatePartyVotes() {
    QMap<QString, int> partyVotes;

    // Predefined parties to ensure they all show up (even if no candidates/votes)
    QStringList partyList = {
        "Pak-Muslim league N",
        "Pakistan tehreek-e-Insaaf",
        "Pakistan People's Party",
        "tehreek-e-labbaik",
        "Jamat-e-Islami"
    };

    // Initialize all parties with 0 votes
    for (const QString &party : partyList) {
        partyVotes[party] = 0;
    }

    // Query to get party_name and total_votes from candidates table
    QSqlQuery query(db);
    if (!query.exec("SELECT party_name, total_votes FROM candidates")) {
        qCritical() << "Error fetching party votes:" << query.lastError().text();
        return partyVotes;  // Return zeroed map if query fails
    }

    // Iterate over candidates and sum votes per party
    while (query.next()) {
        QString partyName = query.value("party_name").toString();
        int votes = query.value("total_votes").toInt();

        // Only sum for known parties (skip typos/mistakes if any)
        if (partyVotes.contains(partyName)) {
            partyVotes[partyName] += votes;
        }
    }
    qDebug() << partyVotes;
    return partyVotes;
}
