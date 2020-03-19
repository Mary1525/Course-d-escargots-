#ifndef ESCARGOT_H
#define ESCARGOT_H

#include <string>

class Escargot{
    private:
        
        std::string _nom;
        int _motiv;
        int _nbr;
        int _km;

    public:

        std::string getNom();

        std::string getLook();

        int getMotiv();
        void setMotiv(int motiv);

        int getNbr();

        int getKm();

        void avancer();
        void motiver();
        void affichePiste();
    
    Escargot(std::string nom,int motiv, int nbr);
};


#endif