#include "kdisplay.h"
#include "ui_kdisplay.h"

KDisplay::KDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KDisplay)
{
    ui->setupUi(this);

    ui->getraenke->setStyleSheet("color: white; font: 15pt");
    ui->getraenke->setAlignment(Qt::AlignCenter);

    ui->kaffeestaerke->setStyleSheet(" color: white;");
    ui->tassengroesse->setStyleSheet("color: white;");
    ui->tassengroesse->setAlignment(Qt::AlignRight);

    // set black background, pretend LED
    QPalette pal = palette();
    pal.setColor(QPalette::Background, QColor(25,20,202));//Qt::black);
    setAutoFillBackground(true);
    setPalette(pal);

}

KDisplay::~KDisplay()
{
    delete ui;
}

void KDisplay::getraenkeChanged(int drink)
{

    // schlechte design, für demo habe ich wenige Zeit redesign
    QString dn;
    switch(drink){

    case 11: dn = "Espresso 1"; break;
    case 12: dn = "Espresso 2"; break;
    case 21: dn = "Espresso Macchiato 1"; break;
    case 22: dn = "Espresso Macchiato 2"; break;
    case 31: dn = "Caffe Crema 1"; break;
    case 32: dn = "Caffe Crema 2"; break;
    case 41: dn = "Cappuccino 1"; break;
    case 42: dn = "Cappuccino 2"; break;
    case 51: dn = "Latte Macchiato 1"; break;
    case 52: dn = "Latte Macchiato 2"; break;
    case 61: dn = "Milch Kaffee 1"; break;
    case 62: dn = "Milch Kaffee 2"; break;
    case 71: dn = "Milch Schaum 1"; break;
    case 72: dn = "Milch Schaum 2"; break;
    case 81: dn = "Flat White"; break;
    case 82: dn = "Heisswasser";break;
    case 83: dn = "Warme Milch";break;
    case 84: dn = "Americano"; break;
    default: dn = "error";
    }

    ui->getraenke->setText(dn);
}

void KDisplay::kaffeestaerkeChanged(int msg)
{
    QString stk;
    Kaffeestaerke ks;
    ks = static_cast<Kaffeestaerke>(msg);
    switch(ks){
    case Kaffeestaerke::schwach: stk = "schwach"; break;
    case Kaffeestaerke::normal: stk = "normal"; break;
    case Kaffeestaerke::stark: stk = "stark"; break;
    //default: stk= "error";
    }

    ui->kaffeestaerke->setText(stk);
}

void KDisplay::tassengroesseChanged(int msg)
{
    QString gr;
    Tassengroesse tg;
    tg = static_cast<Tassengroesse>(msg);
    switch (tg) {
    case Tassengroesse::klein: gr ="klein"; break;
    case Tassengroesse::mittelgross: gr = "mittelgroß"; break;
    case Tassengroesse::gross: gr = "groß"; break;
    //default: gr = "error";
    }
    ui->tassengroesse->setText(gr);
}


