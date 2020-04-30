#ifndef SOTADB_H
#define SOTADB_H

#include <QObject>
#include <QDebug>
#include <QPoint>

class SOTAdb : public QObject
{
    Q_OBJECT
public:
    explicit SOTAdb(QObject *parent = nullptr);

//    Q_INVOKABLE void test();

signals:

};

#endif // SQLITE3DB_H
