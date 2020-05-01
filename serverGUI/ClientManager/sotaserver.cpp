#include <QString>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
#include <QSysInfo>
#include <QHostInfo>
#include <QNetworkInterface>
#include "sotaserver.h"


SOTAserver::SOTAserver(QObject *parent) : QObject(parent)
{

}

QString SOTAserver::getOS()
{
    QString os = QSysInfo::prettyProductName();
    return os;
}

QString SOTAserver::getHost()
{
    QString host = QHostInfo::localHostName();
    return host;
}

QString SOTAserver::getArchitecture()
{
    QString arc = QSysInfo::currentCpuArchitecture();
    return arc;
}

QString SOTAserver::getIP()
{
    const QHostAddress &localhost = QHostAddress(QHostAddress::LocalHost);
    for (const QHostAddress &address: QNetworkInterface::allAddresses()) {
        if (address.protocol() == QAbstractSocket::IPv4Protocol && address != localhost)
             return(address.toString()); //success
    }
    return QString("Not Found"); //fail
}

QString SOTAserver::getStatus()
{
    QString status = "status"; //finish

    return status;
}

QString SOTAserver::getUser()
{
    QString user = qgetenv("USER");
    return user;
}

QString SOTAserver::runCommand(QString command)
{
    return command; //finish
//    exec(const char* cmd) {
//        std::array<char, 128> buffer;
//        std::string result;
//        std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
//        if (!pipe) {
//            throw std::runtime_error("popen() failed!");
//        }
//        while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
//            result += buffer.data();
//        }
//        return result;
//    }

    // or

//    FILE *lsofFile_p = popen("lsof", "r");

//    if (!lsofFile_p)
//    {
//      return -1;
//    }

//    char buffer[1024];
//    char *line_p = fgets(buffer, sizeof(buffer), lsofFile_p);
//    pclose(lsofFile_p);


}


//function to generate random alphanumeric string of given length <= 250
QString SOTAserver::gen_rand(int len)
{
    if (len > 250)
    {
        return QString("length can't be greater than 250");

    }else{

        srand(time(0)); //provide seed for random generator

        static const char alphanum[] =
                "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        char randarray[len];
        const int l = 62;   //length of alphanum[]


        //fill the char array with random
        for (int i = 0; i < len; ++i)
        {
            randarray[i] = alphanum[rand() % l];
        }

        randarray[len] = '\0';  //set last element in char array

        QString randstr(randarray); //save randarray as a QString

        return randstr;

    }//end if len > 250

}
