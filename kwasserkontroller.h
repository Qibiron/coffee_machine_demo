#ifndef KWASSERKONTROLLER_H
#define KWASSERKONTROLLER_H

#include <QThread>
#include <QDebug>

class KWasserKontroller : public QThread
{
    Q_OBJECT
public:
    explicit KWasserKontroller(QObject *parent = nullptr);

signals:


private:
    void run() override;
    double quantity;

};

#endif // KWASSERKONTROLLER_H
