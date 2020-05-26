#ifndef KUSERSETTING_H
#define KUSERSETTING_H

#include <QObject>
#include "kgetraenke.h"
#include "KEnumType.h"

class KUserSetting : public QObject
{
    Q_OBJECT
public:
    explicit KUserSetting(QObject *parent = nullptr);

signals:
   // void sendSetting(KGetraenke);

public slots:
   // void wasserChanged();
   // void milchChanged();
   // void staerkeChanged();


private:
    //user settings
    KGetraenke drink;


};

#endif // KUSERSETTING_H
