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


    int Escargot::getMotiv(){
        return _motiv;
    }
    void Escargot::setMotiv(int motiv){
        _motiv=motiv;
    }

    int Escargot::getSpeed(){
        return _speed;
    }
    void Escargot::setSpeed(int speed){
        _speed=speed;
    }

    int Escargot::getNbr(){
        return _nbr;
    }
    void Escargot::setNbr(int nbr){
        _nbr=nbr;
    }

    int Escargot::getKm(){
        return _km;
    }
    void Escargot::setKm(int km){
        _km=km;
    }

    void Escargot::avancer(){
        _km +=_motiv;
        _motiv -=1;

        if(_motiv<0){_motiv=0;}
    //operateur ternaire
        _motiv<1?_motiv--:_motiv=0;
    }
    
    void Escargot::motiver(){
        _motiv+=3;

    }
    Escargot::Escargot(std::string nom,std::string look, int nbr,int motiv,int speed,int km): _nom(nom), _look(look),_motiv(motiv), _speed(speed), _nbr(nbr),_km(km){}


#endif
