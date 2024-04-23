#include "mainwindow.h"
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QString>
#include <QApplication>
#include <QListView>
#include <QLabel>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string
#include <stdio.h>

#include "Poke.h"
#include "game.h"
//#include "button.h"
//#include "typel.h"
//#include "typef.h"
//#include "Pika.h"
//#include "chary.h"


int move(Poke* Pk, int b, int* stun );

Game* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
  //  w.show();

    game = new Game();
    game->show();
    game->displayMainMenu();

/*
    QGraphicsScene * scene = new QGraphicsScene();

    QGraphicsRectItem * placepk1 = new QGraphicsRectItem();
        placepk1->setRect(0,0,100,80);
    QGraphicsRectItem * placepk2 = new QGraphicsRectItem();
        placepk2->setRect(200,500,100,100);

    // add the item to the scene
        scene->addItem(placepk1);
        scene->addItem(placepk2);

    // add a view to visualize the scene
    QGraphicsView * view = new QGraphicsView(scene);

    view->show();

    //string a, b;
    int move_a, move_b, p, p_holder_a, p_holder_b;
    int  stun_a=0,  stun_b=0;
    int *pt1, *pt2;
    pt1= &stun_a;
    pt2= &stun_b;

    Poke* PK1;
    Poke* PK2;
    cout<<"Pls chosse your pokemon player 1"<<endl;
    cin>>p;
    PK1 = new Poke;
    PK1->ini(p);



    cout<<"Pls chosse your pokemon player 2"<<endl;
    cin>>p;
    PK2 = new Poke;
    PK2->ini(p);




     while((PK1->hp>0) && (PK2->hp>0)){                    //move 1= atk 2=def 3=gard_break 4=item 5=special abilit
           // cin.get(); tentar pausar antes
            system("pause");
            system("cls"); //deois por isto entre moves para os player nao saberem o q o outro jogou.
            cout<<"----------------------------\n";

            move_a= move(PK1, 1, pt1);
           // cout<<"your move player 2"<<endl;
            //cin>>move_b;
            move_b= move(PK2, 2, pt2);
            if((move_a==1) || (move_b==1) ){
                if(move_a==1){
                     PK1->attack(PK2, move_b);
                }
                else if((move_b==1) && (move_a!=1)){
                    PK2->attack(PK1 , move_a);
                }
            }
            else if((move_a==2) && (move_b==3)){

                *pt1 = 1;
                cout<<"You have been stun player 1 for "<<stun_a<<" turns \n";  }
            else if((move_b==2) && (move_a==3)){
                *pt2=1;
                cout<<"You have been stun player 2 \n"<<stun_b<<" turns \n";   }
            else {
                cout<<"ainda nao programei istokk\n";
            }

        }


        if(PK2->hp<=0){
            cout<<"Player 1 vencedor"<<endl;
        }
        else if(PK1->hp<=0){
            cout<<"Player 2 vencedor"<<endl;
        }

*/


    return a.exec();
}


int move(Poke* Pk, int b, int* stun ){
   int move, aux=0;


   while (aux==0) {
        if(*stun!=0){
            cout<<"you are stuned :(\n"<<endl;
            *stun=*stun-1;
            cout<<"stun por mais  "<<*stun<<" turnos \n";
            aux=50;
        }


        /*
        if(b==1){
            cout<<"you have "<<Pk->ap<<"ap \n your move player 1:"<<endl;
            cin>>move;}
        else if(b==2){
            cout<<"you have "<<Pk->ap<<"ap \n your move player 2:"<<endl;
            cin>>move;
        }*/
        else{
            cout<<"you have "<<Pk->ap<<"ap and "<<Pk->hp<<"hp  \n your move player"<<b<<": \n";
            cin>>move;
            switch (move){
            case 1:
                if(Pk->ap<10){
                    cout<<"Sory no Ap"<<endl;

                }
                else if(Pk->ap>=10){
                    Pk->ap= Pk->ap-10;
                    aux= 1;
                }

                break;

            case 2:
                Pk->ap=Pk->ap+5;
                aux= 2;
                break;
            case 3:
                if(Pk->ap<5){
                    cout<<"Sory no Ap"<<endl;
                    //return -1;
                }
                else if(Pk->ap>=5){
                    Pk->ap= Pk->ap-5;
                    aux=3;
                }
                break;

            default:
                return -1;
                break;
            }
        }
    }
    move= aux;
   // cout<<"//////o seu move ficou "<<move;
   return move;
}
