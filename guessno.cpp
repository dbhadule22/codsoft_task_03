#include <iostream>
#include <cstdlib>
#include <ctime>

void guessNumber() {
    std::srand(std::time(0)); 
    int numberToGuess = std::rand() % 100 + 1; 
    int userGuess = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?" << std::endl;

    while (userGuess != numberToGuess) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (std::cin.fail()) {
            std::cin.clear(); 
            std::cin.ignore(1000, '\n'); 
            std::cout << "Please enter a valid number." << std::endl;
            continue;
        }

        if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number!" << std::endl;
        }
    }
}

int main() {
    guessNumber();
    return 0;
}
