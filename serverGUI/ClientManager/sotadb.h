#ifndef SOTADB_H
#define SOTADB_H

#include <QObject>
#include <QVector>
#include <QDebug>
#include <string>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QQmlListProperty>
#include "client.h"

//struct ClientEntity
//{
//        QString unique_id;
//        QString init_id;
//        QString software_id;
//        QString last_seen;
//        QString last_ip;
//        QString status;
//        QString group_id;
//        QString last_sw_id;
//        QString active;
//};

//Q_DECLARE_METATYPE(ClientEntity)

class SOTAdb : public QObject
{
    Q_OBJECT
    //Q_PROPERTY(QQmlListProperty<ClientEntity> allclients READ allclients)
public:
    explicit SOTAdb(QObject *parent = nullptr);

    bool initialized = false;
    bool open = false;

    QVariantList clientList;
    QList<ClientModel> cList;

//    Q_INVOKABLE QString initDB(); // initially create db & tables
    Q_INVOKABLE void createClient(QString initID); // takes an initID
//    Q_INVOKABLE void getClients();
//    Q_INVOKABLE int getnumclients();
//    Q_INVOKABLE QString updateClient();
//    Q_INVOKABLE QString deleteClient();
//    Q_INVOKABLE QString strNumActive();
//    Q_INVOKABLE QString strNumInactive();
//    Q_INVOKABLE QString checkID(); // maybe just keep this as private
signals:
//    void openFailed();
//    void newData();

private:
    //QVector<ClientEntity> dbClients;

    //QVector<ClientEntity *> m_allclients;
    //static void convert_list(QQmlListProperty<ClientEntity> *list, ClientEntity *client);

    int initDB();
    int queryAllClients();
};




#endif // SQLITE3DB_H
