#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int game(int maxNum);

bool Debug = false; //Debug toiminto jos true tulostaa vastauksen arvausten välissä

int main()
{
    int maxNumMain = 40;
    cout << "Anna maksimi numero johon asti haluat arpoa numeron: ";
    cin >> maxNumMain;

    int nOFg = game(maxNumMain);
    cout << "Kuinka monesti arvasit: "<< nOFg << endl;
    return 0;
}


int game(int maxNum){
    int guessedNumber = 999;
    int numberOfGuesses = 0;

    srand(time(0));
    int randomNumber = rand() % maxNum +1;

    while(guessedNumber != randomNumber){
        numberOfGuesses++;

        cout << "Arvaa luku: ";
        cin >> guessedNumber;

        if(guessedNumber < randomNumber){
            cout << "Arvaamasi numero oli liian pieni!" <<endl;
        }

        else if(guessedNumber > randomNumber){
            cout << "Armaamasi numero oli liian suuri!" << endl;
        }
        else if(guessedNumber == randomNumber){
            cout << "Arvaamasi numero oli oikein!" << endl;
        }

        if(Debug)cout << "Arvottu numero: " << randomNumber << endl;
    }
    return numberOfGuesses;
}
