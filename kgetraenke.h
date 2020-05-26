#ifndef KGETRAENKE_H
#define KGETRAENKE_H

#include <QObject>

class KGetraenke : public QObject
{
    Q_OBJECT
public:
    explicit KGetraenke(QObject *parent = nullptr);

signals:

private:
    double milchMenge;
    double wasserMenge;
    double bohneMenge;
    //... hardware entsprende Eigenschaft
};

#endif // KGETRAENKE_H
