#include <iostream>
#include <string>
#include "Wordle.h"


int main() {
    int bestScore = 0;
    bool exitToLoop = false;
    bool dayGamePlayed = false;

    while (!exitToLoop) {
        int attempts = 0;
        int menuOption = 0;
        std::string userGuess;

        std::string secretWord = chooseRandomWord();

        printMenu();
        std::cout << "Enter: ";
        std::cin >> menuOption;

        if (menuOption == 0) {
            std::cout << std::endl << "Thanks for playing!" << std::endl;

            if (bestScore != 0) {
                std::cout << "Your best high score is: " << bestScore << " tries." << std::endl << std::endl << std::endl;
            }

            exitToLoop = true;
            break;
        }
        else if (menuOption == 1) {
            dayGame(secretWord, attempts, bestScore, dayGamePlayed);
        }
        else if (menuOption == 2) {
            playGame(secretWord, attempts, bestScore);
        }
    }

    return 0;
}
