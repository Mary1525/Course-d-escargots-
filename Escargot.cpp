#ifndef ESCARGOT_CPP
#define ESCARGOT_CPP

#include <iostream>
#include <string>
#include "Escargot.h"

    std::string Escargot ::getNom(){
        return _nom;

   }


    std::string Escargot :: getLook(){

        std::cout<<"@"+_nbr<<std::endl;
        return "@"+std::to_string(_nbr);
    }

    int Escargot::getKm(){
        return _km;
    }

    void Escargot::avancer(){
        _km +=_motiv;
        _motiv --;

        if(_motiv<0){_motiv=0;}
    //operateur ternaire
    //_motiv<1?_motiv--:_motiv=0;
    }
    
    void Escargot::motiver(){
        _motiv+=3;

    }

    Escargot::Escargot(std::string nom,int motiv,int speed): _nom(nom),_motiv(motiv), _speed(speed){}


#endif
