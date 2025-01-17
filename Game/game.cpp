#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int maxNum) {
    cout<<"konstruktori"<<endl;
    srand(time(NULL));
    maxNumber = maxNum;
    playerGuess = 0;
    randomNumber = rand() % maxNumber;
    numOfGuesses = 1;

}

Game::~Game()
{
    cout<<"destruktori"<<endl;
}

void Game::play(){

    do{
        //  cout<<"arvottu luku on "<<randomNumber<<endl; //satunnaisluvun tulostus näkyviin

        cout<<"arvauksesi? "<<endl;

        cin>>playerGuess;

        cout<<"arvauksesi on " <<playerGuess<<endl; //tarkistus, että arvaus tallentuu oikein
        if (playerGuess < randomNumber){
            cout<<"luku on isompi"<<endl<<endl;

            numOfGuesses++;
        }
        if(playerGuess>randomNumber){
            cout<<"luku on pienempi"<<endl<<endl;
            numOfGuesses++;
        }
    }

    while (playerGuess != randomNumber);

    if (playerGuess == randomNumber){
        cout<<"oikein arvattu"<<endl<<endl;
        printGameResult();

    }
}

void Game::printGameResult()
{
    cout << "arvauksien maara "<<numOfGuesses<<endl;
}












