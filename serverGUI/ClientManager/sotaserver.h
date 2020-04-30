#ifndef SOTASERVER_H
#define SOTASERVER_H

#include <QObject>
#include <QDebug>
#include <QPoint>


class SOTAserver : public QObject
{
    Q_OBJECT
public:
    explicit SOTAserver(QObject *parent = nullptr);

    Q_INVOKABLE QString test();
    Q_INVOKABLE void gen_rand(int len);

signals:

};

#endif // SOTASERVER_H
