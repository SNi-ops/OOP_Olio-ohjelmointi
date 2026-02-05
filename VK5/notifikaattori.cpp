#include "notifikaattori.h"
#include <iostream>
using namespace std;

extern bool DEBUG;

Notifikaattori::Notifikaattori() {
    if(DEBUG)cout << "Tama on notifikaattorin DEFAULT konstruktori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *uusiSeuraaja){
    cout << "Seuraaja " << uusiSeuraaja->getNimi()<< " lisatty." << endl;

    if(seuraajat == nullptr){
        seuraajat = uusiSeuraaja;
    }
    else{
        uusiSeuraaja->next = seuraajat;
        seuraajat = uusiSeuraaja;
    }
}

void Notifikaattori::poista(Seuraaja *poistaSeuraaja){

    cout<<"Notifikaattori poistaa seuraajan "<<poistaSeuraaja->getNimi()<<endl;
    Seuraaja *edellinen = nullptr;
    Seuraaja *nykyinen = nullptr;
    Seuraaja *seuraava = seuraajat;

    if(poistaSeuraaja == seuraajat){
        seuraajat = seuraajat ->next;
    }
    else {
        while (nykyinen != poistaSeuraaja){
            if(DEBUG)cout<<" loop ";
            edellinen = nykyinen;
            nykyinen = seuraava;
            seuraava = seuraava -> next;
        }
        edellinen ->next = seuraava;

        cout<<" "<<endl;
    }
}

void Notifikaattori::tulosta(){
    if(DEBUG)cout << "Notifikaattorin TULOSTUS funktio" << endl;

    cout << "Seuraajat: " << endl;
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        cout << "Seuraaja " <<alku->getNimi() << endl;
        alku = alku->next;
    }
    cout << " " << endl;
}

void Notifikaattori::postita(string viesti){
    if(DEBUG)cout << "Notifikaattorin POSTITA funktio" << endl;

    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        alku -> paivitys(viesti);
        alku = alku->next;
    }
    cout << " " << endl;
}
