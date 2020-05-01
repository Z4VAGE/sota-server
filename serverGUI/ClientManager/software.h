#ifndef SOFTWARE_H
#define SOFTWARE_H
#include <QObject>

class Software : public QObject
{
    Q_OBJECT
public:
    QString m_id;
    QString m_name;
    QString m_version;
    QString m_num_users;
    QString m_size;
    QString m_location;

    Q_PROPERTY(QString id MEMBER m_id)

    Q_PROPERTY(QString name MEMBER m_name)

    Q_PROPERTY(QString version MEMBER m_version)

    Q_PROPERTY(QString num_users MEMBER m_num_users)

    Q_PROPERTY(QString size MEMBER m_size)

    Q_PROPERTY(QString location MEMBER m_location);

};

#endif // SOFTWARE_H
