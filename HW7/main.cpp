#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

int createRandomNum(const int range);

int main() {
    const int MAX_NUMBER = 50;
    int bestScore = 0;
    bool exitToLoop = false;

    cout << "Welcome to the guessing game! \nGuess a number between 0 and " << MAX_NUMBER << " or type '-1' to give up." << endl << endl;

    while (!exitToLoop) {

        int randomNumber = createRandomNum(MAX_NUMBER);
        int userNum = MAX_NUMBER + 1;
        int userAttempts = 0;

        cout << "The program generates a random number..." << endl;

        while (userNum != randomNumber) {

            cout << "Enter your guess: ";
            std::cin >> userNum;

            if (userNum == -1) {
                cout << endl << "Thanks for playing!" << endl;
                cout << "You use " << userAttempts << " attempts." << endl;
                cout << "Your best high score is: " << bestScore << " tries." << endl << endl << endl;

                exitToLoop = true;
                break;
            }

            if (!(userNum >= 0 && userNum <= MAX_NUMBER)) {
                cout << "Invalid input. Enter a number between '0 - " << MAX_NUMBER << "', or '-1' for give up!" << endl;
                continue;
            }

            userAttempts++;
            if (userNum > randomNumber) {

                if (userNum - randomNumber <= 10) {
                    cout << "Getting closer. Try a little lower." << endl;
                }
                else  if ((userNum - randomNumber >= 10) && (userNum - randomNumber <= 20)) {
                    cout << "Too high. Try lower." << endl;
                }
                else {
                    cout << "Extremely high. Try lower." << endl;
                }
            }
            else if (userNum < randomNumber) {

                if (randomNumber - userNum <= 10) {
                    cout << "Getting closer. Try a little higher." << endl;
                }
                else if ((randomNumber - userNum >= 10) && (randomNumber - userNum <= 20)) {
                    cout << "Too low. Try higher." << endl;
                }
                else {
                    cout << "Extremely low. Try higher." << endl;
                }
            }
            else {
                bestScore = (bestScore == 0) ? userAttempts : bestScore;
                bestScore = (userAttempts > bestScore) ? bestScore : userAttempts;

                cout << "Congratulations! You guessed the correct number in " << userAttempts << " attempts." << endl;
                cout << "Your best score: " << bestScore << " attempts." << endl << endl << endl;
            }
        }
    }
    cout << "Copyright 2023." << endl;
    return 0;
}

int createRandomNum(const int range) {
    srand(time(NULL));
    return rand() % (range + 1);;
}
