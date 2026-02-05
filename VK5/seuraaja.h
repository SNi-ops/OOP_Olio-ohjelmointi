#ifndef SEURAAJA_H
#define SEURAAJA_H

#include <string>
using namespace std;

class Seuraaja
{
public:
    Seuraaja();
    Seuraaja(string n);

    string getNimi();
    void paivitys(string viesti);

    Seuraaja *next =nullptr;

private:
    string nimi;
};

#endif // SEURAAJA_H
