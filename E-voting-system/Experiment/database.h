#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QDate>
#include <QVariantMap>
#include <QList>

class Database {
public:
    static bool initDB(const QString &dbPath);
    static QSqlDatabase getDB();
    static bool createTable();
    static bool insertUser(const QString &username, const QString &password,
                           const QString &cnic, const QDate &dob,
                           const bool voteCasted = false);
    static int loginUser(const QString &cnic, const QString &password);
    static bool castVote(const QString &userCNIC, const QString &candidateId);

    // Candidate operations
    static bool createCandidatesTable();
    static bool insertCandidate(const QByteArray &photoData, const QString &fullName,
                                const QString &partyName, int age,
                                const QString &bio);
    static bool deleteCandidate(int candidateID);

    // Statistics
    static int getTotalCandidates();
    static int getTotalUsers();
    static int getTotalVotesCasted();

    // Data retrieval
    static QList<QVariantMap> getUsersList();
    static QList<QVariantMap> getLatestCandidates(int limit = 2);
    static QList<QVariantMap> getAllCandidates();
    static QMap<QString, int> calculatePartyVotes();

private:
    static QSqlDatabase db;
};

#endif // DATABASE_H
