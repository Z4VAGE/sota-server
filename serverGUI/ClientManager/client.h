#ifndef CLIENT_H
#define CLIENT_H
#include <QObject>


class Client : public QObject
{
    Q_OBJECT
public:

    QString m_unique_id;
    QString m_init_id;
    QString m_software_id;
    QString m_last_seen;
    QString m_last_ip;
    QString m_status;
    QString m_group_id;
    QString m_last_sw_id;
    QString m_active;

    Q_PROPERTY(QString unique_id MEMBER m_unique_id)
    Q_PROPERTY(QString init_id MEMBER m_init_id)
    Q_PROPERTY(QString software_id MEMBER m_software_id);
    Q_PROPERTY(QString last_seen MEMBER m_last_seen)
    Q_PROPERTY(QString last_ip MEMBER m_last_ip)
    Q_PROPERTY(QString status MEMBER m_status)
    Q_PROPERTY(QString group_id MEMBER m_group_id)
    Q_PROPERTY(QString last_sw_id MEMBER m_last_sw_id)
    Q_PROPERTY(QString active MEMBER m_active)

};

#endif // CLIENT_H
