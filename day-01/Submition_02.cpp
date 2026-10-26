
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    int secret, guess;
    int tries = 0;

    // Generate a random number from 1 to 20
    srand(time(0));
    secret = rand() % 20 + 1;

    cout << "I am thinking of a number from 1 to 20."
         << endl;

    do
    {
        cout << "Guess a number from 1 to 20: ";
        cin >> guess;

        tries = tries + 1;

        if (guess == secret)
        {
            cout << "Correct!" << endl;
        }
        else
        {
            if (abs(guess - secret) <= 3)
            {
                cout << "Hot!" << endl;
            }
            else
            {
                cout << "Cold!" << endl;
            }
        }

    } while (guess != secret);

    cout << "Number of tries: " << tries << endl;

    return 0;
}
