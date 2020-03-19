#include <iostream>
#include <vector>
#include <string>
#include <random>


#include "Ennemy.cpp"
using namespace std;

int main {
    int i;
    Escargot georges("georges",3,1);
    Escargot david("david",2,2);

    george.avancer();
    
    cout <<"distance parcourue :" << georges.getKm()<<endl;
    for (i;i<10;i++){
        if(i==georges.getKm()) cout<<georges.getLook();
        else cout <<"-";
    }

    cout << endl;

    return 0;
}