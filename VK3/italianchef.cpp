#include "italianchef.h"
#include <iostream>
using namespace std;

extern bool DEBUG;

ItalianChef::ItalianChef() {
    if (DEBUG) cout << "Italian Chef Constructor"<<endl;
}

ItalianChef::ItalianChef(string nameChef) {
    if (DEBUG) cout << "Input Constructor Italian chef"<<endl;
    chefName = nameChef;
}

ItalianChef::~ItalianChef() {
     if (DEBUG) cout << "Italian Chef Destructor"<<endl;

}

bool ItalianChef::askSecret(string passwd, int amountOfWater, int amountOfFlour){

    if(passwd == password){
        cout << "You found pizza in the menu!" << endl;

        water = amountOfWater;
        flour = amountOfFlour;
        makePizza();

        return true;
    }
    else{
        cout << "There no pizza in the menu!" << endl;

        return false;
    }


}

int ItalianChef::makePizza(){

    if (DEBUG) cout << "Make pizza" << endl;
    cout << "Chef have: " << flour << " flour and " << water << " water." << endl;

    int numberOfPizzas = (min((flour/5),(water/5)));

    cout <<"Italian chef made "<< numberOfPizzas << " pizzas" << endl;
    return 0;
}
