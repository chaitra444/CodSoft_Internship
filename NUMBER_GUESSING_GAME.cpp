#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;

    // Initialize the number of attempts
    int attempts = 0;

    // Loop until the user guesses the correct number
    while (true) {
        // Ask the user for their guess
        int userGuess;
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> userGuess;

        // Increment the number of attempts
        attempts++;

        // Check if the user's guess is correct
        if (userGuess == numberToGuess) {
            std::cout << " Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            break;
        } else if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    return 0;
}

/*
  Guess a number between 1 and 100: 5
Too low! Try again.
Guess a number between 1 and 100: 56
Too high! Try again.
Guess a number between 1 and 100: 40
Too high! Try again.
Guess a number between 1 and 100: 30
Too low! Try again.
Guess a number between 1 and 100: 35
Too low! Try again.
Guess a number between 1 and 100: 39
Too high! Try again.
Guess a number between 1 and 100: 38
 Congratulations! You guessed the number in 7 attempts.
*/
