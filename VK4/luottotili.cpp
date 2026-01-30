#include "luottotili.h"
#include <iostream>

using namespace std;
extern bool DEBUG;

Luottotili::Luottotili() {
    if(DEBUG)cout << "Luottotilin DEFFAULT konstruktori" << endl;
}

Luottotili::Luottotili(string om, double lr): Pankkitili(om) {
    if(DEBUG)cout << "Luottotilin PARAMETRI konstruktori" << endl;
    luottoRaja = lr;
}

bool Luottotili::deposit(double sum){
    if(DEBUG)cout << "Luottotilin takaisinmaksu" << endl;

    cout << "Luottosaldo ennen: "<< saldo << endl;

    if((sum > luottoRaja)||( (sum + saldo) > 0 ) ){
        cout << "Luoton maksu ei onnistunut" << endl;
        return false;
    }
    cout << "Luotoa maksetaan: " << sum << endl;
    saldo += sum;
    cout << "Luottosaldo jalkeen: "<< saldo << endl;
    return true;
}

bool Luottotili::withdraw(double sum){
    if(DEBUG)cout << "Luottotilin luoton nosto" << endl;

    cout << "Luottosaldo ennen: "<< saldo << endl;

    if(sum < -luottoRaja || ((saldo - sum) < -luottoRaja)){
        cout << "Luoton nosto ei onnistunut" << endl;
        return false;
    }
    cout << "Luottolta nostetaan: " << sum << endl;
    saldo -=sum;
    cout << "Luottosaldo jalkeen: "<< saldo << endl;
    return true;
}
