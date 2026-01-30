#include "pankkitili.h"
#include <iostream>

using namespace std;
extern bool DEBUG;

Pankkitili::Pankkitili() {
    if(DEBUG)cout << "Pankkitilin DEFFAULT konstruktori" << endl;
}

Pankkitili::Pankkitili(string om){
    if(DEBUG)cout << "Pankkitilin PARAMETRI konstruktori" << endl;
    omistaja = om;
}

double Pankkitili::getBalance(){
    if(DEBUG)cout << "Olen pankkitilin saldokysely" << endl;
    return saldo;
}

bool Pankkitili::deposit(double sum){
    if(DEBUG)cout << "Olen pankkitilin talletus" << endl;

    if(sum <= 0){
        cout << "Talletus ei mahdollinen" << endl;
        return false;
    }
    saldo +=sum;
    return true;
}

bool Pankkitili::withdraw(double sum){
    if(DEBUG)cout << "Olen pankkitilin nosto" << endl;

    if((sum <= 0) || (saldo - sum) < 0){
        cout << "Nosto ei mahdollinen" << endl;
        return false;
    }
    saldo -= sum;
    return true;
}
