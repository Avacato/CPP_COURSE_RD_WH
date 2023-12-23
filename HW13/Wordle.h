#pragma once

void printMenu();
void toLowerCaseWord(std::string& word);
bool containsLetter(std::string& word, const char letter);
std::string chooseRandomWord();
std::string checkGuess(const std::string& secretWord, const std::string& userGuess);
void playGame(std::string secretWord, int& attempts, int& bestScore);
void dayGame(std::string secretWord, int& attempts, int& bestScore, bool& dayGamePlayed);