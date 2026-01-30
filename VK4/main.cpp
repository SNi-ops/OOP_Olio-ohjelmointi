#include <iostream>
#include "asiakas.h"

using namespace std;

bool DEBUG = false;

int main()
{
    cout << "Hello World!" << endl;

    Asiakas as1("Erkki", 1000);
    as1.talletus(1000);
    as1.showSaldo();

    as1.luotonNosto(800);
    as1.showSaldo();

    as1.luotonMaksu(400);
    as1.showSaldo();

    Asiakas as2("Pena", 1000);
    as2.talletus(200);
    as2.showSaldo();


    as1.tiliSiirto(100,as2);

    as1.showSaldo();
    as2.showSaldo();

    as2.tiliSiirto(400,as1);

    as2.showSaldo();
    as1.showSaldo();


    return 0;
}

