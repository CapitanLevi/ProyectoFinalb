#include "esferagraf.h"
#include "QDebug"



EsferaGraf::EsferaGraf(float x, float y, float r, float m,float v_limit) : escala(1)
{
    esf=new EsferaSim(x,y,r,m);
    setPos(esf->getX()*escala,(v_limit-esf->getY())*escala);
}

EsferaGraf::~EsferaGraf()
{
    delete esf;
}

QRectF EsferaGraf::boundingRect() const
{
        return QRectF(-1*escala*esf->getR(),-1*escala*esf->getR(),2*escala*esf->getR(),2*escala*esf->getR());
}

void EsferaGraf::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::darkGreen);        //asigna el color
    painter->drawEllipse(boundingRect());    //dibuja una elipse encerrada en la boundingRect
}

void EsferaGraf::setEscala(float s)
{
    escala=s;
}

void EsferaGraf::actualizar(float dt, float v_lim)
{
    esf->actualizar(dt);
    setPos(esf->getX()*escala,(v_lim-esf->getY())*escala);
}

void EsferaGraf::actualizar2(float dt, float v_lim)
{
    esf->actualizar2(dt);
    setPos(esf->getX()*escala,(v_lim-esf->getY())*escala);
}

EsferaSim *EsferaGraf::getEsf()
{
    return esf;
}


