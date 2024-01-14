#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomNumber=-1;
int guessedNumber=-1;
int numberMax=0;
int numberOfGuesses=0;


int game(int maxnum);

int main()
{
    cout << "Set the largest possible number to guess:" << endl;

    cin >> numberMax;

    numberOfGuesses = game(numberMax);

    cout << "You guessed " << numberOfGuesses << " times." << endl;

    return 0;
}

int game(int maxnum)
{
    srand(time(NULL));
    randomNumber = rand() % maxnum;


    while (guessedNumber != randomNumber)
    {
        cout << "Guess which number between 0 and " << numberMax << " I am thinking of!"  << endl;

        cin >> guessedNumber;

        if (guessedNumber < randomNumber)
        {
            cout << "The number is bigger than that" << endl;
            numberOfGuesses++;
        }
        else if (guessedNumber > randomNumber)
        {
            cout << "The number is smaller than that" << endl;
            numberOfGuesses++;
        }
    }

    cout << "Correct!" << endl;
    numberOfGuesses++;

    return numberOfGuesses;

}
