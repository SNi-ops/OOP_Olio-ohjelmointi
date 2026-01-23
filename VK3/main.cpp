#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;
bool DEBUG = false;

int main()
{
    Chef chef1("Gordon");
    chef1.getName();

    chef1.makeSalad(10);
    chef1.makeSoup(4);

    cout << endl << "-----------------------------" << endl << endl;

    ItalianChef italianChef1("Luigi");
    italianChef1.getName();

    italianChef1.makeSalad(15);
    italianChef1.makeSoup(9);
    italianChef1.askSecret("pizza", 15, 20);

    cout << endl << "-----------------------------" << endl << endl;

    ItalianChef italianChef2("Mario");
    italianChef2.getName();

    italianChef2.askSecret("pasta", 4, 10);

    return 0;
}
