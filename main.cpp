#include "widget.h"

// alle hardware threads interfacing with OS layer
#include "khardwaresuperviser.h"
#include "kmilchkontroller.h"
#include "kwasserkontroller.h"
#include "kwirelessserver.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    KHardwareSuperviser HWS;
    KWirelessServer server;

    HWS.start();
    server.start();


    return a.exec();
}
