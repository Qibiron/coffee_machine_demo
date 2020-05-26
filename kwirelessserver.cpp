#include "kwirelessserver.h"

KWirelessServer::KWirelessServer(QObject *parent) : QThread(parent)
{

}

void KWirelessServer::run()
{
    qDebug() << " Server is on ...";
}
