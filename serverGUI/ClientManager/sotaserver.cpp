#include <QString>
#include <stdlib.h>
#include <time.h>
#include "sotaserver.h"


SOTAserver::SOTAserver(QObject *parent) : QObject(parent)
{

}

QString SOTAserver::test()
{
    QString c = "gg";
    qDebug() << "Hey from C++";
    return c;
}


//function to generate random alphanumeric string of given length <= 250
void SOTAserver::gen_rand(int len)
{
    if (len > 250)
    {
        qDebug() << "length can't be greater than 250";

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

        qDebug() << randstr;

    }//end if len > 250

}
