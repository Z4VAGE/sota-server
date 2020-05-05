#include <QString>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <QQuickView>
#include <QQmlContext>
#include "sotadb.h"

QSqlDatabase db;

const QString DRIVER("QSQLITE");
const QString dbName("/home/" + qgetenv("USER") + "/sota-server/db/sotaserver.db");
QVariantList clientList;
int numclients = 0;

SOTAdb::SOTAdb(QObject *parent) : QObject(parent)
{
    numclients = 0;
    qDebug() << "creating db object";

    if(QSqlDatabase::isDriverAvailable(DRIVER)){ //check for database driver
        db = QSqlDatabase::addDatabase(DRIVER);
        db.setDatabaseName(dbName);
        if(!db.open()){ //db didn't open
            qWarning() << "ERROR: " << db.lastError();
            //emit openFailed();
        }else{//opened db

            open = true;
            qDebug() << "opened/created database";

            //need set initialized after checking if tabels exist
            if(!initialized){ //db tables haven't been created


                initDB(); //will either create tables, or they already exist

                //successfully created tables
                initialized = true;
                queryAllClients();

            }else{

                //db tables exist
                queryAllClients();
            }//end check initialized

        }//end try open

    }else{
        //driver not available
        qWarning() << "QSQLITE database driver unavailable";
    }//end check driver

}


int SOTAdb::initDB()
{
    if(!open || initialized){//db didn't open on object creation OR tables already created
      qWarning() << "ERROR: " << db.lastError();
      return 0;
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

    if(!sqlClientsTable.isActive()){ //something went wrong creating Clients table
        qWarning() << "ERROR: " << sqlClientsTable.lastError().text();
        return 0;
    }

    if(!sqlSoftwareTable.isActive()){ //something went wrong creating Software table
        qWarning() << "ERROR: " << sqlSoftwareTable.lastError().text();
        return 0;
    }

    return 1; //success

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
    }else{ //insert successful

//    emit newdata();


        ClientModel tempclient;
        tempclient.setUnique_id(uniqueID);
        tempclient.setInit_id(initID);
        tempclient.setSoftware_id("");
        tempclient.setLast_seen("");
        tempclient.setLast_ip("");
        tempclient.setStatus("");
        tempclient.setGroup_id("");
        tempclient.setLast_sw_id("");
        tempclient.setActive("");

        cList.append(tempclient);
    }
}




int SOTAdb::queryAllClients() // get all info for many clients
{
    qDebug() << "starting loadAllClients()";

    if (!open){ //db isn't open, try to open
        if(!db.open()){ // can't open db
          qWarning() << "ERROR opening db in SOTAdb::loadAllClients: " << db.lastError();
          return 0;
        }
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM CLIENTS");

    if(!query.exec()){ //error executing query
        qWarning() << "ERROR executing query in SOTAdb::loadAllClients: " << query.lastError().text();
        return 0;
    }

    qDebug() << "successfully ran select * from clients";

    while (query.next()){

        //create new ClientEntity type and set values
//        ClientEntity dbclient =
//        {
//            query.value(0).toString(),
//            query.value(1).toString(),
//            query.value(2).toString(),
//            query.value(3).toString(),
//            query.value(4).toString(),
//            query.value(5).toString(),
//            query.value(6).toString(),
//            query.value(7).toString(),
//            query.value(8).toString()
//        };

       QString uniqueid = query.value(0).toString();
       QString initid = query.value(1).toString();
       QString softwareid = query.value(2).toString();
       QString lastseen = query.value(3).toString();
       QString lastip = query.value(4).toString();
       QString status = query.value(5).toString();
       QString groupid = query.value(6).toString();
       QString lastswid = query.value(7).toString();
       QString active = query.value(8).toString();

       ClientModel tempclient;
       tempclient.setUnique_id(uniqueid);
       tempclient.setInit_id(initid);
       tempclient.setSoftware_id(softwareid);
       tempclient.setLast_seen(lastseen);
       tempclient.setLast_ip(lastip);
       tempclient.setStatus(status);
       tempclient.setGroup_id(groupid);
       tempclient.setLast_sw_id(lastswid);
       tempclient.setActive(active);


       cList.append(tempclient);
//       dbclient << query.value(0).toString();
//       dbclient << query.value(1).toString();
//       dbclient << query.value(2).toString();
//       dbclient << query.value(3).toString();
//       dbclient << query.value(4).toString();
//       dbclient << query.value(5).toString();
//       dbclient << query.value(6).toString();
//       dbclient << query.value(7).toString();
//       dbclient << query.value(8).toString();


        //conver client to QVariant
        //QVariant qclient;
        //qclient.setValue(dbclient);
        //qclient.setValue(tempclient);

        //clientList.append(qclient);
        qDebug() << "loaded client uniqueid: " + query.value(0).toString();

    }

    numclients = cList.size();
    qDebug() << "loaded All clients";
    qDebug() << "Num clients: " << numclients;

    return 1;
}//end constructor


/*
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
*/

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
