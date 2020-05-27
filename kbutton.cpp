#include "KButton.h"

KButton::KButton(QWidget *parent) : QPushButton(parent)
{
    state = new QVector<int>();
    init();

}

void KButton::rollState()
{
    //rotate state
    if(!(this->state->empty()))
    {
        this->state->push_back(this->state->at(0));
        this->state->erase(this->state->begin());
        qDebug() << "State Number:" << QString::number(this->state->length());
        qDebug() << "Current State:" << QString::number(this->state->at(0));

        emit stateChanged(this->state->at(0));
    }
    else qDebug() << "To be done!";
}


//init with stateNumber, image filePath
void KButton::init()
{
    // init default button image
    this->setImage(":/image/default.png");

}


//void KButton::setState(QVector<int> s)
//{
//   *(this->state) = s;
//}


void KButton::setImage(QString file, QSize size)
{
    QPixmap img;
    img.load(file);
    this->setFixedSize(size);
    this->setIcon(img);
    this->setIconSize(QSize(70,70));
}

void KButton::setState(KButtonFunction f)
{
    QVector<int> stateInit;

    switch(f){
        case KButtonFunction::Espresso:
        stateInit = {static_cast<int>(Espresso::Espresso1),
                     static_cast<int>(Espresso::Espresso2)};
        break;
        case KButtonFunction::EspressoMacch:
        stateInit = {static_cast<int>(EspressoMacch::EspressoMacch1),
                     static_cast<int>(EspressoMacch::EspressoMacch2)};

        break;
        case KButtonFunction::CaffeCrema:
        stateInit = {static_cast<int>(CaffeCrema::CaffeCrema1),
                     static_cast<int>(CaffeCrema::CaffeCrema2)};
        break;
        case KButtonFunction::Cappuccino:
        stateInit = {static_cast<int>(Cappuccino::Cappuccino1),
                     static_cast<int>(Cappuccino::Cappuccino2)};

        break;
        case KButtonFunction::LatteMacchiato:
        stateInit = {static_cast<int>(LatteMacchiato::LatteMacchiato1),
                     static_cast<int>(LatteMacchiato::LatteMacchiato2)};

        break;
        case KButtonFunction::Milchkaffee:        
            stateInit = {static_cast<int>(Milchkaffee::Milchkaffee1),
                         static_cast<int>(Milchkaffee::Milchkaffee2)};
        break;
        case KButtonFunction::Milchschaum:
            stateInit = {static_cast<int>(Milchschaum::Milchschaum1),
                         static_cast<int>(Milchschaum::Milchschaum2)};
        break;
        case KButtonFunction::SpezielleGetraenke:
            stateInit = {static_cast<int>(SpezielleGetraenke::Flat_White),
                         static_cast<int>(SpezielleGetraenke::Heisswasser),
                         static_cast<int>(SpezielleGetraenke::Warme_Milch),
                         static_cast<int>(SpezielleGetraenke::Americano)};
        break;
        case KButtonFunction::StartStop:
            stateInit = {static_cast<int>(StartStop::stop),
                         static_cast<int>(StartStop::start)};
            break;
        case KButtonFunction::Zweitassen:

        break;
        case KButtonFunction::Kaffeestaerke:
            stateInit = {static_cast<int>(Kaffeestaerke::normal),
                         static_cast<int>(Kaffeestaerke::stark),
                         static_cast<int>(Kaffeestaerke::schwach)};
        break;
        case KButtonFunction::Tassengroesse:
            stateInit = {static_cast<int>(Tassengroesse::mittelgross),
                         static_cast<int>(Tassengroesse::gross),
                         static_cast<int>(Tassengroesse::klein)};

        break;
       // default: ;

    }

    *(this->state) = stateInit;
}

void KButton::mouseReleaseEvent(QMouseEvent *event)
{
    //response to all mousebutton release
    this->rollState();
    return QPushButton::mouseReleaseEvent(event);
}

