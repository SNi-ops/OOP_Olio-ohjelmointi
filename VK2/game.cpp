#include "game.h"
#include<ctime>
#include <iostream>
#include <cstdlib>

using namespace std;


Game::Game(int maxNum){
    maxNumber = maxNum;

    srand(time(0));
    randomNumber = rand() % maxNumber +1;

    cout << "GAME CONSTRUKTOR: Game initalized with " <<maxNumber<< " as a max value."<<endl;
}

Game::~Game(){
    cout<<"GAME DESTROYED!"<<endl;
}

void Game::play(){
    while(randomNumber != playerGuess){
        numOfGuesses++;

        cout<<"Guess number between 1-"<<maxNumber<<":";
        cin >> playerGuess;

        if (playerGuess < randomNumber){
            cout << "Your guess was too small!" << endl;
        }
        else if(playerGuess > randomNumber){
            cout << "Your guess was too big!" << endl;
        }
        else if(playerGuess == randomNumber){
            cout << "Your guess was RIGHT!" << endl;
        }
    }
    printGameResult();
}

void Game::printGameResult(){
    cout<< "Your guess: "<<playerGuess<< " was right and you guessed: "<<numOfGuesses<<" times."<<endl;
}
