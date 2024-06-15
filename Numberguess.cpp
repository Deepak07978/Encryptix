// game.cpp

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        cout << "Guess the number between 1 to 100 :" << endl;
        cin >> guess;
        if (guess > number)
        {
            cout << "Lower Number Please !" << endl;
        }
        else if (guess < number)
        {
            cout << "Higher Number Please !" << endl;
        }
        else
        {
            cout << "The Guess Number Is Correct .." << endl;
            cout << "You Guess The Number In " << nguess << " Attempts " << endl;
        }
        nguess++;
    } while (guess != number);

    return 0;
}