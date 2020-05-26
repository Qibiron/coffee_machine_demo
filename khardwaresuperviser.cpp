#include "khardwaresuperviser.h"

KHardwareSuperviser::KHardwareSuperviser(QObject *parent) : QThread(parent)
{

}

void KHardwareSuperviser::run()
{
    qDebug() << "Interacting with  lower HW/OS Layer";
    qDebug() << "Monitoring Device...";
}

