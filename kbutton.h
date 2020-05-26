#ifndef KButton_H
#define KButton_H

#include <QObject>
#include <QString>
#include <QPushButton>
#include <QMouseEvent>
#include <QVector>

#include "KEnumType.h"

#include <QDebug>


class KButton : public QPushButton
{
    Q_OBJECT
public:
    explicit KButton(QWidget *parent = nullptr);


    void setImage(QString file, QSize size = QSize(64,64));
//    void setState(QVector<int>);
    void setState(KButtonFunction);

signals:
    void stateChanged(int);


private slots:
    void rollState();


protected:
   void init();

private:
    void mouseReleaseEvent(QMouseEvent *) override;      //touchEvent() on touch screen

    QVector<int> *state;  // button options
    int currentState;    //
};

#endif // KButton_H
