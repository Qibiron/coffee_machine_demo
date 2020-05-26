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
    qDebug() << "To be done!";
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


        break;
        case KButtonFunction::EspressoMacch:


        break;
        case KButtonFunction::CaffeCrema:


        break;
        case KButtonFunction::Cappuccino:


        break;
        case KButtonFunction::LatteMacchiato:


        break;
        case KButtonFunction::Milchkaffee:

        break;
        case KButtonFunction::Milchschaum:

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
        default: ;

    }

    *(this->state) = stateInit;
}

void KButton::mouseReleaseEvent(QMouseEvent *event)
{
    //response to all mousebutton release
    this->rollState();
    return QPushButton::mouseReleaseEvent(event);
}

