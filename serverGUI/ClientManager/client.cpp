#include "client.h"


QString ClientModel::getDataIndex(int n)
{
    switch(n){
    case 0:
        return unique_id();
        break;
    case 1:
        return init_id();
        break;
    case 2:
        return software_id();
        break;
    case 3:
        return last_seen();
        break;
    case 4:
        return last_ip();
        break;
    case 5:
        return status();
        break;
    case 6:
        return group_id();
        break;
    case 7:
        return last_sw_id();
        break;
    case 8:
        return active();
        break;
    }
    return QString("N/A");
}

ClientModel::ClientModel()
{

}
