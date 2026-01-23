#include "chef.h"
#include <iostream>
using namespace std;

extern bool DEBUG;

Chef::Chef() {
    if (DEBUG) cout << "Chef Constructor" << endl;
}

Chef::Chef(string nameChef) {
    if (DEBUG) cout << "Input constructor chef" << endl;
    chefName = nameChef;
}

Chef::~Chef(){
    if (DEBUG) cout << "Chef Destructor" << endl;
}

int Chef::makeSalad(int numOfItems){

    if (DEBUG) cout << "Salad function!" << endl;

    cout << "You gave: " << numOfItems << " salad ingredients to the chef." << endl;
    cout << "That will make: " << numOfItems/5 << " portion of salad." << endl << endl;

    return numOfItems/5;
}

int Chef::makeSoup(int numOfItems){

    if (DEBUG) cout << "Soup function" << endl;

    cout << "You gave: " << numOfItems << " soup ingredients to the chef." << endl;
    cout << "That will make: " << numOfItems/3 << " portion of soup." << endl << endl;

    return numOfItems/3;
}

string Chef::getName(){

    if (DEBUG) cout << "Getter"<<endl;
    cout << "Chefs name is: " << chefName << endl;
    return chefName;
}

void Chef::setName(string nameChef){

    if (DEBUG) cout << "Setter"<<endl;
    chefName = nameChef;
}

