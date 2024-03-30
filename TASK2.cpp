#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //srand(time(0));
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!" << endl;

    do {
        
        cout << "Enter your guess: ";
        cin >> userGuess;

        attempts++;

        if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }

    } while (userGuess != secretNumber);

    return 0;
}