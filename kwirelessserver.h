#ifndef KWIRELESSSERVER_H
#define KWIRELESSSERVER_H

#include <QThread>
#include <QDebug>

class KWirelessServer : public QThread
{
    Q_OBJECT
public:
    explicit KWirelessServer(QObject *parent = nullptr);

    void run() override;

signals:




};

#endif // KWIRELESSSERVER_H
