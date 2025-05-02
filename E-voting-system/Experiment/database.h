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
    static bool insertUser(const QString &username, const QString &password,const QString &cnic,const QDate &dob);  // Insert user
    static int loginUser(const QString &cnic, const QString &password);  // Check if user exists
};

#endif // DATABASE_H
