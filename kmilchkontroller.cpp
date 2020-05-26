#include "kmilchkontroller.h"

KMilchKontroller::KMilchKontroller(QObject *parent) : QThread(parent)
{

}

void KMilchKontroller::run()
{
    qDebug() << "Milchkontroller Running...";
    qDebug() << "Milchmenge:" <<this->quantity;
}
