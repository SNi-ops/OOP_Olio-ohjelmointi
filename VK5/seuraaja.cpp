#include "seuraaja.h"
#include <iostream>
using namespace std;

extern bool DEBUG;

Seuraaja::Seuraaja(){

    if(DEBUG)cout << "Tama on seuraaja DEFAULT konstruktori" << endl;
}

Seuraaja::Seuraaja(string n){
    nimi = n;

    if(DEBUG)cout << "Tama on seuraaja PARAMETRI konstruktori" << endl;

    cout << "Luodaan seuraaja " << nimi << endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    if(DEBUG)cout << "Seuraajan PAIVITYS funktio" << endl;

    cout << nimi << " sai viestin: " << viesti << endl;
}
