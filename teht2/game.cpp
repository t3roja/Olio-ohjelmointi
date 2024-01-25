#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNum) // Pelin konstruktori
{
    maxNumber = maxNum;
    playerGuess = 0;
    numOfGuesses = 0;
    srand(time(0));

    cout << "Game constructor: Maximum value is 10" << endl;

}

Game::~Game()
{
    cout << "Game destructor: Game over" << endl; // Pelin destruktori
}

void Game::play()
{
    srand(time(NULL));
    randomNumber = rand() % maxNumber;


    while (playerGuess != randomNumber) // Jos pelaajan arvaus ja arvottu numero eivät ole sama tai ei vielä arvattu
    {
        cout << "Guess which number between 0 and " << maxNumber << " I am thinking of!"  << endl;

        cin >> playerGuess;

        if (playerGuess < randomNumber) // Jos arvaus on liian pieni
        {
            cout << "The number is bigger than that" << endl;
            numOfGuesses++;
        }
        else if (playerGuess > randomNumber)    // Jos arvaus on liian suuri
        {
            cout << "The number is smaller than that" << endl;
            numOfGuesses++;
        }
    }
    printGameResult();
}

void Game::printGameResult() // Ilmoittaa pelin päättyneeksi ja näyttää oikean vastauksen, sekä arvauskerrat
{
    cout << "You guessed correctly!" << endl << "The correct answer is: " << randomNumber << endl;
    cout << "You guessed " << numOfGuesses << " times." << endl;
}
