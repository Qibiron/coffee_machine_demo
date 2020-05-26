#ifndef KMILCHKONTROLLER_H
#define KMILCHKONTROLLER_H

#include <QThread>
#include <QDebug>

class KMilchKontroller : public QThread
{
    Q_OBJECT
public:
    explicit KMilchKontroller(QObject *parent = nullptr);

signals:
    // aufhören ...
    // ausgeben ...
    // schaum ...



private:
    void run() override;
    double quantity;
    // ...
};

#endif // KMILCHKONTROLLER_H
