#include "button.h"
#include <QGraphicsTextItem>
#include <QBrush>



button::button(QString name, QGraphicsItem *parent): QGraphicsRectItem(parent){
    // draw the rect
        setRect(0,0,200,50);
        QBrush brush;
        brush.setStyle(Qt::SolidPattern);
        //brush.setColor(Qt::darkCyan);
        brush.setColor(Qt::lightGray);
        setBrush(brush);

        // draw the text
        text = new QGraphicsTextItem(name,this);
        int xPos = rect().width()/2 - text->boundingRect().width()/2;
        int yPos = rect().height()/2 - text->boundingRect().height()/2;
        text->setPos(xPos,yPos);


}

void button::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    emit clicked();
}
