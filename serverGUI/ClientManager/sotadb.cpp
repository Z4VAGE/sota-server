#include <QString>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <QQuickView>
#include <QQmlContext>
#include "sotadb.h"
#include "client.h"

QSqlDatabase db;

const QString DRIVER("QSQLITE");
const QString dbName("/home/" + qgetenv("USER") + "/sota-server/db/sotaserver.db");

QList<Client*> localClientList;

SOTAdb::SOTAdb(QObject *parent) : QObject(parent)
{
    if(QSqlDatabase::isDriverAvailable(DRIVER)){ //initialize database
        db = QSqlDatabase::addDatabase(DRIVER);
        db.setDatabaseName(dbName);
        if(!db.open()){ //db didn't open
          qWarning() << "ERROR: " << db.lastError();
          emit openFailed();
        }
    }
    getClients();

}

QString SOTAdb::initDB()
{
    if(!db.open()){
      qWarning() << "ERROR: " << db.lastError();
      return QString("Could not create db");
    }

    QSqlQuery sqlClientsTable("CREATE TABLE CLIENTS (" \
      "unique_id	CHAR(16)	NOT NULL	PRIMARY KEY," \
      "init_id	CHAR(22)," \
      "software_id	CHAR(16)," \
      "last_seen	INTEGER," \
      "last_ip	TEXT," \
      "status	TEXT," \
      "group_id	CHAR(16)," \
      "last_sw_id	CHAR(16)," \
      "active   TEXT," \
      "FOREIGN KEY(software_id) REFERENCES SOFTWARE(id)" \
      ");");

    QSqlQuery sqlSoftwareTable("CREATE TABLE SOFTWARE (" \
       "id		CHAR(16)        NOT NULL        PRIMARY KEY," \
       "name      	TEXT," \
       "version   	TEXT," \
       "num_users    INTEGER," \
       "size      	INTEGER," \
       "location	TEXT" \
       ");");

    if(!sqlClientsTable.isActive()){
        qWarning() << "ERROR: " << sqlClientsTable.lastError().text();
        return QString(sqlClientsTable.lastError().text());
    }

    if(!sqlSoftwareTable.isActive()){
        qWarning() << "ERROR: " << sqlSoftwareTable.lastError().text();
        return QString(sqlSoftwareTable.lastError().text());
    }

    return QString("Success");
}// end initDB


void SOTAdb::createClient(QString rand)
{
    // init-12345-abcde-123ab
    QString initID(rand.left(15));
    initID.prepend("init-");
    initID.insert(16, "-");
    initID.insert(10, "-");

    QString uniqueID(rand.right(16));

    if(!db.open()){ // can't open db
      qWarning() << "ERROR: " << db.lastError();
      return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO CLIENTS (unique_id, init_id) "
               "VALUES (:unique_id, :init_id)");
    query.bindValue(":unique_id", uniqueID);
    query.bindValue(":init_id", initID);
    query.exec();

    if(!query.isActive()){
        qWarning() << "ERROR: " << query.lastError().text();
        return;
    }

//    emit newdata();

}


//QString SOTAdb::getClient() // get all info for one client
//{
//    return QString("not done");
//}

void SOTAdb::getClients() // get all info for many clients
{
    if(!db.open()){ // can't open db
      qWarning() << "ERROR: " << db.lastError();
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM CLIENTS");

    if(!query.exec()){
        qWarning() << "ERROR: " << query.lastError().text();
        return;
    }

    while (query.next()){

        Client* newclient = new Client;
        newclient->setProperty("unique_id", query.value(0).toString());
        newclient->setProperty("init_id", query.value(1).toString());
        newclient->setProperty("software_id", query.value(2).toString());
        newclient->setProperty("last_seen", query.value(3).toString());
        newclient->setProperty("last_ip", query.value(4).toString());
        newclient->setProperty("status", query.value(5).toString());
        newclient->setProperty("group_id", query.value(6).toString());
        newclient->setProperty("last_sw_id", query.value(7).toString());
        newclient->setProperty("active", query.value(8).toString());
        localClientList.append(newclient);

        QQuickView view;
        QQmlContext *ctxt = view.rootContext();
        ctxt->setContextProperty("clientList", QVariant::fromValue(localClientList));

    }
    return;
}

int SOTAdb::getnumclients() //might only return number of columns - fix
{
    if(!db.open()){ // can't open db
      qWarning() << "ERROR: " << db.lastError();
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM CLIENTS");

    if(!query.exec()){
        qWarning() << "ERROR: " << query.lastError().text();
        return 0;
    }

    int numclients = query.size();

    return numclients;
}


//QString SOTAdb::updateClient()
//{
//    return QString("not done");
//}

//QString SOTAdb::deleteClient()
//{
//    return QString("not done");
//}

//QString SOTAdb::numActive()
//{

//}

//QString SOTAdb::numInactive()
//{

//}
