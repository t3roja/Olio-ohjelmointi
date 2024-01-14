#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randomNumber=-1;
    int guessedNumber=-1;

    srand(time(NULL));
    randomNumber = rand() % 20;


    while (guessedNumber != randomNumber)
    {
        cout << "Guess which number between 0 and 20 I am thinking of!" << endl;

        cin >> guessedNumber;

        if (guessedNumber < randomNumber)
        {
            cout << "The number is bigger than that" << endl;
        }
        else if (guessedNumber > randomNumber)
        {
            cout << "The number is smaller than that" << endl;
        }
    }

    cout << "Correct!" << endl;

    return 0;
}
