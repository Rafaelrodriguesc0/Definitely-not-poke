#ifndef POKE_H
#define POKE_H
#pragma once // Isto deve estar sempre no .h de uma bibliteca ou declaração de uma classe para evitar que, ao fazeres include, faça cópia várias vezes do código
             // Nota que quando dizemos "#include <iostream>" é uma cópia do ficheiro .h inserido no nosso ficheiro .h

#include <iostream>
#include <string>
using namespace std;


class Poke
{
    public:
    //Poke();
        int id, hp, def, atk, spd, typ, ap;
      //  virtual Poke();
       // string name;
        char name[10];
        void attack(Poke* other, int b);  //funcao a ser usada caso o pokemon atake vai ter o endereco po outro pokemon para ver os stats e codido do movimento q vai fazer)
        void ini( int a);
};

#endif // POKE_H
