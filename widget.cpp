#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // init cafe image
    ui->espresso->setImage(":/image/espresso.png");
    ui->espressomacch->setImage(":/image/espressomacch.png");
    ui->caffecrema->setImage(":/image/caffeecrema.png");
    ui->cappuccino->setImage(":/image/cappuccino.png");
    ui->lattemacchiato->setImage(":/image/latte_macchiato.png");
    //ui->milchkaffee->setImage(":/image/milchkaffee.png");
    ui->milchschaum->setImage(":/image/milchschaum.png");
    ui->spezielleGetraenke->setImage(":/image/tasse.jpg");

    // init function buttons images
    ui->startStop->setImage(":/image/startstop.png");
    ui->zurueck->setImage(":/image/zurueck.png");
    ui->menu->setImage(":/image/menu.png");
    ui->zweitassen->setImage(":image/zweitassen.png");
    ui->ok->setImage(":/image/ok.png");
    ui->kaffeestaerke->setImage(":/image/kaffeestaerke.png");
    ui->tassegroesse->setImage(":/image/tassengroesse.png");
    ui->favorit->setImage(":/image/favorit.png");



    // init cafe button states
//    ui->espresso->setState(KButtonFunction::Espresso);
//    ui->espressomacch->setState(KButtonFunction::EspressoMacch);
//    ui->caffecrema->setState(KButtonFunction::CaffeCrema);
    ui->cappuccino->setState(KButtonFunction::Cappuccino);
    ui->lattemacchiato->setState(KButtonFunction::LatteMacchiato);
    ui->milchkaffee->setState(KButtonFunction::Milchkaffee);
    ui->milchschaum->setState(KButtonFunction::Milchschaum);
    ui->spezielleGetraenke->setState(KButtonFunction::SpezielleGetraenke);





    // init function button states
    ui->startStop->setState(KButtonFunction::StartStop);


    ui->kaffeestaerke->setState(KButtonFunction::Kaffeestaerke);


    ui->tassegroesse->setState(KButtonFunction::Tassengroesse);




//    connect(ui->kaffeestaerke, &KButton::stateChanged, [this](){
//        ui->textBrowser->append("Kaffestaerke update");
//    });

}

Widget::~Widget()
{
    delete ui;
}

