#ifndef KSPUELER_H
#define KSPUELER_H

#include <QThread>

class KSpueler : public QThread
{
    Q_OBJECT
public:
    explicit KSpueler(QObject *parent = nullptr);

signals:

private slots:
    //spülen ...

};

#endif // KSPUELER_H
