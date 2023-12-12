#include <iostream>

void parseStringLetters(const char str[], int& vowelsCount, int& consonantsCount) {
    vowelsCount = 0;
    consonantsCount = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        char currentChar = std::tolower(str[i]);

        if (isalpha(currentChar)) {
            if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
                currentChar == 'o' || currentChar == 'u') {
                ++vowelsCount;
            }
            else {
                ++consonantsCount;
            }
        }
    }
}