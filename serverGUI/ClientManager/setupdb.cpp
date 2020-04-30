//#include <iostream>
//#include <sqlite3.h>
//#include <string>

//using namespace std;


//callback function for sql_exec()
//int callback(void *NotUsed, int argc, char **argv, char **azColName){

//    //return successful
//    return 0;

//}


//int main()
//{
//    // Pointer to the SQLite3 connection
//    sqlite3* db;

//    // Save error messages
//    char *ErrMsg = 0;

//    // Save result of opening the file.
//    int res;

//    // Save desired SQL
//    string sql;
//    string sql2;

//    // Save the connection result
//    // If return is 1, an error occured
//    res = sqlite3_open("/home/serveradmin/sota-server/db/sotaserver.db", &db);


//    // Test if there was an error
//    if (res) {

//        cout << "DB Error: " << sqlite3_errmsg(db) << endl;

//    } else { //Opened or created the database

//        cout << "Opened Database Successfully!" << endl;

//    sql = "CREATE TABLE CLIENTS (" \
//      "unique_id	CHAR(16)	NOT NULL	PRIMARY KEY," \
//      "init_id	CHAR(22)," \
//      "software_id	CHAR(16)," \
//      "last_seen	INTEGER," \
//      "last_ip	TEXT," \
//      "status	TEXT," \
//      "group_id	CHAR(16)," \
//      "last_sw_id	CHAR(16)," \
//      "active   TEXT," \
//      "FOREIGN KEY(software_id) REFERENCES SOFTWARE(id)" \
//      ");";

//    sql2 = "CREATE TABLE SOFTWARE (" \
//          "id		CHAR(16)        NOT NULL        PRIMARY KEY," \
//          "name      	TEXT," \
//          "version   	TEXT," \
//          "num_users    INTEGER," \
//          "size      	INTEGER," \
//          "location	TEXT" \
//          ");";

//    }

//    // Run SQL
//    res = sqlite3_exec(db, sql.c_str(), callback, 0, &ErrMsg);
//    res = sqlite3_exec(db, sql2.c_str(), callback, 0, &ErrMsg);


//    // Close the connection
//    sqlite3_close(db);

//    return (0);
//}






