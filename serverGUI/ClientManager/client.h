#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>

class ClientModel
{
    Q_GADGET



    Q_PROPERTY(QString unique_id READ unique_id WRITE setUnique_id)
    Q_PROPERTY(QString init_id READ init_id WRITE setInit_id)
    Q_PROPERTY(QString software_id READ software_id WRITE setSoftware_id);
    Q_PROPERTY(QString last_seen READ last_seen WRITE setLast_seen)
    Q_PROPERTY(QString last_ip READ last_ip WRITE setLast_ip)
    Q_PROPERTY(QString status READ status WRITE setStatus)
    Q_PROPERTY(QString group_id READ group_id WRITE setGroup_id)
    Q_PROPERTY(QString last_sw_id READ last_sw_id WRITE setLast_sw_id)
    Q_PROPERTY(QString active READ active WRITE setActive)

    //Q_INVOKABLE QString getDataIndex(int n);


public:

    ClientModel(); //constructor

    QString unique_id() const {return m_unique_id;}
    void setUnique_id(const QString &unique_id) { m_unique_id = unique_id; }

    QString init_id() const {return m_init_id;}
    void setInit_id(const QString &init_id) { m_init_id = init_id; }

    QString software_id() const {return m_software_id;}
    void setSoftware_id(const QString &software_id) { m_software_id = software_id; }

    QString last_seen() const {return m_last_seen;}
    void setLast_seen(const QString &last_seen) { m_last_seen = last_seen; }

    QString last_ip() const {return m_last_ip;}
    void setLast_ip(const QString &last_ip) { m_last_ip = last_ip; }

    QString status() const {return m_status;}
    void setStatus(const QString &status) { m_status = status; }

    QString group_id() const {return m_group_id;}
    void setGroup_id(const QString &group_id) { m_group_id = group_id; }

    QString last_sw_id() const {return m_last_sw_id;}
    void setLast_sw_id(const QString &last_sw_id) { m_last_sw_id = last_sw_id; }

    QString active() const {return m_active;}
    void setActive(const QString &active) { m_active = active; }

    QString getDataIndex(int n);
private:
    QString m_unique_id;
    QString m_init_id;
    QString m_software_id;
    QString m_last_seen;
    QString m_last_ip;
    QString m_status;
    QString m_group_id;
    QString m_last_sw_id;
    QString m_active;
};

Q_DECLARE_METATYPE(ClientModel)

#endif // CLIENT_H
