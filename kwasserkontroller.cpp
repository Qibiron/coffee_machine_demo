#include "kwasserkontroller.h"

KWasserKontroller::KWasserKontroller(QObject *parent) : QThread(parent)
{

}

void KWasserKontroller::run()
{
    qDebug() << "Wasserkontroller Running...";
    qDebug() << "Wassermenge:" << this->quantity;

}
