#ifndef SOTADB_H
#define SOTADB_H

#include <QObject>
#include <QDebug>
#include <string>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <client.h>
#include <client.h>


class SOTAdb : public QObject
{
    Q_OBJECT
public:
    explicit SOTAdb(QObject *parent = nullptr);

    Q_INVOKABLE QString initDB(); // initially create db & tables
    Q_INVOKABLE void createClient(QString initID); // takes an initID
//    Q_INVOKABLE QString getClient();
    Q_INVOKABLE void getClients();
    Q_INVOKABLE int getnumclients();
//    Q_INVOKABLE QString updateClient();
//    Q_INVOKABLE QString deleteClient();
//    Q_INVOKABLE QString strNumActive();
//    Q_INVOKABLE QString strNumInactive();
//    Q_INVOKABLE QString checkID(); // maybe just keep this as private
signals:
    void openFailed();
    void newData();

private:
};




#endif // SQLITE3DB_H
