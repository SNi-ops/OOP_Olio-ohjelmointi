#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int game(int maxNum);

bool Debug = true; //Debug toiminto jos true tulostaa vastauksen arvausten välissä

int main()
{
    int maxNumMain = 40;
    cout << "Anna maksimi numero johon asti haluat arvpoa numeron: ";
    cin >> maxNumMain;

    int nOFg = game(maxNumMain);
    cout << nOFg << endl;
    return 0;
}


int game(int maxNum){
    int guessedNumber = 999;
    int numberOfGuesses = 0;

    srand(time(0));
    int randomNumber = rand() % maxNum;

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
