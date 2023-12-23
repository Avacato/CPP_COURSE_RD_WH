#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


void printMenu() {
    std::cout << "1 - Wordle of the day" << std::endl;
    std::cout << "2 - Random wordle" << std::endl;
    std::cout << "0 - Exit" << std::endl;
}

void toLowerCaseWord(std::string& word) {
    for (int i = 0; i < word.size(); ++i) {
        word[i] = std::tolower(word[i]);
    }
}

// Функція перевіряє чи є у слові потрібна буква
bool containsLetter(std::string& word, const char letter) {
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == letter) {
            //            word[i] = '!';
            return true;
        }
    }
    return false;
}

// Функція для вибору випадкового слова
std::string chooseRandomWord() {
    const char* words[] = { "apple", "banana", "orange", "grape", "melon", "peach", "kiwi", "lemon" };
    srand(time(nullptr));
    int index = rand() % (sizeof(words) / sizeof(words[0]));
    return words[index];
}

// Функція порівняння та перевірки
std::string checkGuess(const std::string& secretWord, const std::string& userGuess) {
    std::string tempSecretWord = secretWord;
    std::string result;
    for (int i = 0; i < secretWord.size(); i++) {
        if (tempSecretWord[i] == userGuess[i]) {
            //           result += std::toupper(tempSecretWord[i]);
            tempSecretWord[i] = std::toupper(tempSecretWord[i]);
        }
    }
    for (int i = 0; i < secretWord.size(); i++) {
        if (tempSecretWord[i] >= 'A' && tempSecretWord[i] <= 'Z') {
            result += tempSecretWord[i];
        }
        else if (containsLetter(tempSecretWord, userGuess[i])) {
            result += std::tolower(userGuess[i]);
        }
        else {
            result += '*';
        }
    }

    return result;
}


void playGame(std::string secretWord, int& attempts, int& bestScore) {
    std::string userGuess;
    std::cout << std::endl << "Guess the word: ";
    for (int i = 0; i < secretWord.length(); ++i)
        std::cout << "*";
    std::cout << std::endl;

    do {
        std::cout << "Attempt #" << 1 + attempts << ": ";
        std::cin >> userGuess;
        toLowerCaseWord(userGuess);

        if (userGuess.length() == secretWord.length()) {

            std::cout << "RESULTS: " << checkGuess(secretWord, userGuess) << std::endl << std::endl;

            if (secretWord == userGuess) {
                std::cout << "Congratulations! " << std::endl << std::endl;
            }
            else {
                ++attempts;
            }
        }
        else {
            std::cout << "The entered word must have " << secretWord.length() << " letters." << std::endl;
        }
    } while (userGuess != secretWord);

    std::cout << "You guessed the word in " << ++attempts << " attempts." << std::endl;
    if (attempts < bestScore || bestScore == 0) {
        bestScore = attempts;
        std::cout << "New high score!" << std::endl;
    }
    std::cout << std::endl;
}

void dayGame(std::string secretWord, int& attempts, int& bestScore, bool& dayGamePlayed) {
    if (dayGamePlayed) {
        std::cout << std::endl << "You already played the wordle of the day." << std::endl << std::endl;
        return;
    }

    playGame(secretWord, attempts, bestScore);

    dayGamePlayed = true;
}
