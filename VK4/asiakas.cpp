#include "asiakas.h"
#include <iostream>

using namespace std;
extern bool DEBUG;

Asiakas::Asiakas() {
    if(DEBUG)cout << "Asiakas DEFFAULT konstruktori" << endl;
}

Asiakas::Asiakas(string nimet, double lr) : kayttotili(nimet), luottotili(nimet, lr){
    if(DEBUG)cout << "Asiakas PARAMETRI konstruktori" << endl;
    nimi = nimet;
    cout << "Asiakkuus luotu: " << nimi <<endl;
}

bool Asiakas::tiliSiirto(double sum, Asiakas &kohde){
    if(sum < 0){
        cout << "Tilisirto ei onnistunut" << endl;
        return false;
    }
    if(!kayttotili.withdraw(sum) ){
        cout << "Tilisirto ei onnistunut" << endl;
        return false;
    }
    if(!kohde.talletus(sum)){
        cout << "Tilisirto ei onnistunut" << endl;
        kayttotili.deposit(sum);
        return false;
    }
    return true;
}

string Asiakas::getNimi(){
    return nimi;
}

void Asiakas::showSaldo(){
    cout << endl << nimi << " TILIT: " << endl;
    cout << "Kayttotilin saldo on: "<< kayttotili.getBalance() <<endl<< " Luottotilin saldo on: " << luottotili.getBalance() << endl<<endl;
}

bool Asiakas::talletus(double sum){
    kayttotili.deposit(sum);
    return true;
}

bool Asiakas::nosto(double sum){
    kayttotili.withdraw(sum);
    return true;
}

bool Asiakas::luotonMaksu(double sum){
    luottotili.deposit(sum);
    return true;
}

bool Asiakas::luotonNosto(double sum){
    luottotili.withdraw(sum);
    return true;
}

