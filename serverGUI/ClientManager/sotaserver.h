#ifndef SOTASERVER_H
#define SOTASERVER_H

#include <QObject>
#include <QDebug>
#include <QPoint>
#include <QSysInfo>

class SOTAserver : public QObject
{
    Q_OBJECT
public:
    explicit SOTAserver(QObject *parent = nullptr);

    QList<QObject*> clientList;
    QList<QObject*> softwareList;

    Q_INVOKABLE QString getOS();
    Q_INVOKABLE QString getHost();
    Q_INVOKABLE QString getArchitecture();
    Q_INVOKABLE QString getIP();
    Q_INVOKABLE QString getStatus();
    Q_INVOKABLE QString getUser();
    Q_INVOKABLE QString runCommand(QString command);
    Q_INVOKABLE QString gen_rand(int len);

signals:

private:
};

#endif // SOTASERVER_H
