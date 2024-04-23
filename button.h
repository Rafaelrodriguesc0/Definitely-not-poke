#ifndef BUTTON_H
#define BUTTON_H


#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class button: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    button(QString name, QGraphicsItem* parent=NULL);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
signals:
    void clicked();
private:
    QGraphicsTextItem* text;
};


#endif // BUTTON_H
