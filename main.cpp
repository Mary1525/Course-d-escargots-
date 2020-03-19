#include <iostream>
#include <vector>
#include <string>
#include <random>


#include "Escargot.cpp"
using namespace std;

void afficherPiste(int km,int nbr){

    int i;
    for(i=0;i<10; i++){
            if(i==km) cout<<"@"<<nbr;
            else cout<<"-";
    }

        cout<<endl;
}

int main() {

    Escargot Georges("georges",3,1);
    Escargot David("david",2,2);

    Georges.avancer();
    cout<< Georges.getLook();
    cout <<" distance parcourue :" << Georges.getKm()<<endl;
    afficherPiste(Georges.getKm(), Georges.getNbr());

    return 0;
}