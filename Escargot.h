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

        std::string getLook();

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
        void affichePiste();
    
    Escargot(std::string nom,int motiv,int speed);
};


#endif