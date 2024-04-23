#include "poke.h"
#include <iostream>
#include <string.h>
using namespace std;

//Poke::Poke()


    void Poke::attack(Poke* other, int b){   //sei q nao deveria estar aqui mas....
      switch (b)
      {
        case 1:
          /* code */

            if(other->spd >= spd){
                hp = hp - other->atk;
                cout<<other->name << " atacker for " << other->atk << "damage" << std::endl;
               // cout<<"hp1="<<hp<<endl;
                if(hp <= 0)
                return;

                other->hp = other->hp - atk;
                cout<< name << " atacker for " << atk << "damage" << std::endl;
                //cout<<"hp2="<<other->hp<<endl;
            }
            else if(spd>other->spd){
                other->hp = other->hp - atk;
                std::cout << name << " atacker for " << atk << "damage" << std::endl;

                if(other->hp <= 0)
                return;

                hp = hp - other->atk;
                std::cout<< other->name << " atacker for " << other->atk << "damage" << std::endl;
                //cout<<"hp1="<<hp<<endl;
            }
            break;
        case 2:
            if(other->def >= atk){
                cout<<"ba ba baaaa useless atack"<<endl;
                //break;
            }
            if(atk> other->def){
                other->hp = other->hp - (atk-other->def);
                std::cout  << name <<  " atacker for " << (atk-other->def) << "damage" << std::endl;
                //cout<<"hp2="<<other->hp<<endl;
                }
            break;
        case 3:
            other->hp = other->hp - atk;
            std::cout << name << "atacker for " << atk << "damage" << std::endl;
           // cout<<"hp2="<<other->hp<<endl;
            break;

        case 50:
            other->hp= other->hp-(1.5*atk);
            std::cout << name << "atacker for " << (1.5*atk) << "stun damage" << std::endl;
            //cout<<"hp="<<other->hp<<endl;
            break;

      default:
          break;
      }
    }


        void Poke::ini(int a){
          switch (a)
          {
          case 1:
            this->id=01; this->hp=100;this->def=40; this->atk=40;  this->spd=60; this->ap=50; strcpy(this->name, "Pikachu");
            break;

          case 2:

            this->id=02; this->hp=100; this->def=60; this->atk=60;  this->spd=40; this->ap=30; strcpy(this->name, "Chary");
            break;

          default:
            break;
          }
        }



