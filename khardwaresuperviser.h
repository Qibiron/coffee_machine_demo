#ifndef KHARDWARESUPERVISER_H
#define KHARDWARESUPERVISER_H

#include <QThread>
#include <QDebug>

// Überwachung, falls einige Komponente(z.B.Wassertank) nicht mehr verfügbar

class KHardwareSuperviser : public QThread
{
    Q_OBJECT
public:
    explicit KHardwareSuperviser(QObject *parent = nullptr);

signals:
    //EntkalkenAngefordert  requirement 1
    //SpülenAngefordert     requirement 2
    //...

public slots:
    // error1Solved
    // error2Solved
    // entkalkt
    // milchdüseReinigt
    //...

private:
    void run() override;
};

#endif // KHARDWARESUPERVISER_H
