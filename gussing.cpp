#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (secretNum != guess && !outOfGuesses)
    {
        if (guessCount < guessLimit)
        {
            cout << "enter guess: ";
            cin >> guess;
            guessCount++;
        }
        else
        {
            outOfGuesses = true;
        }
    }
    if (outOfGuesses)
    {
        cout << "you lose" << endl;
    }
    else
    {
        cout << "you win" << endl;
    }

    return 0;
}