#ifndef ESCARGOT_H
#define ESCARGOT_H

#include <string>

class Escargot{
    private:
        
        std::string _nom;
        std::string _look;
        int _motiv;
        int _speed;
        int _nbr;
        int _km;

    public:

        std::string getNom();
        void setNom(std::string nom);

        std::string getLook();
        void setLook(std::string look);

        int getMotiv();
        void setMotiv(int motiv);

        int getSpeed();
        void setSpeed(int speed);

        int getNbr();
        void setNbr(int nbr);

        int getKm();
        void setKm(int km);

        void avancer();
        void motiver();
        void victoire();
    
    Escargot(std::string nom,std::string look,int nbr,int motiv,int speed,int km);
};


#endif