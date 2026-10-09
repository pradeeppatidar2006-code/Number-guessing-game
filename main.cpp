#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    srand(static_cast<unsigned int>(time(0)));
    //random number generator with the current time
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
     cout << "--------------------------------------\n";
     cout << "   WELCOME TO THE GUESSING GAME  \n";
     cout << "_______________________________________\n";
     cout << "I have chosen a number between 1 and 100.\n";
     cout << "Can you guess what it is?\n\n";

     // Loop continues until the player guesses the correct number
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "too high: Try again.\n\n";
        } else if (guess < secretNumber) {
            cout << "too low: Try again.\n\n";
        } else {
            cout << "\n Congratulations! You guessed it right!\n";
            cout << "It took you " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}
