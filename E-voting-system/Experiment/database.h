#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QDate>

class Database {
public:
    static QSqlDatabase connectDB();
    static bool createTable();  // Function to create the users table
    static bool insertUser(const QString &username, const QString &password,const QString &cnic,const QDate &dob,const bool voteCasted);  // Insert user
    static int loginUser(const QString &cnic, const QString &password);  // Check if user exists
    bool setVoteCasted(const QString &cnic);
    static bool createCandidatesTable();
    static bool insertCandidate(const QByteArray &photoData, const QString &fullName,
                                const QString &partyName, int age,
                                const QString &electionSymbol, const QString &bio);
    static int getTotalCandidates();
    static int getTotalUsers();
    static int getTotalVotesCasted() ;
    static int getLatestCandidates() ;
};

#endif // DATABASE_H
