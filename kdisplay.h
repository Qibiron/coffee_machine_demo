#ifndef KDISPLAY_H
#define KDISPLAY_H

#include <QWidget>
#include "KEnumType.h"

namespace Ui {
class KDisplay;
}

class KDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit KDisplay(QWidget *parent = nullptr);
    ~KDisplay();

public slots:
    void getraenkeChanged(int);
    void kaffeestaerkeChanged(int);
    void tassengroesseChanged(int);

private:
    Ui::KDisplay *ui;
};

#endif // KDISPLAY_H
