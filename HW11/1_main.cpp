#include <iostream>

constexpr unsigned int ROWS = 4;
constexpr unsigned int COLUMNS = 6;

//#1
bool find(int arr_2d[ROWS][COLUMNS], int toFind);

int main()
{
    int arr_2d[ROWS][COLUMNS] = {
      {11, 12, 13, 14, 15, 16 },
      {21, 22, 23, 24, 25, 26 },
      {31, 32, 33, 34, 35, 36 },
      {41, 42, 43, 44, 45, 46 }
    };

    int userNum;
    std::cout << "Enter the number you want to find in the array: ";
    std::cin >> userNum;

    bool found = find(arr_2d, userNum);

    if (found) {
        std::cout << "The number " << userNum << " was found in the array." << std::endl;
    }
    else {
        std::cout << "Number not found in array." << std::endl;
    }


    return 0;
}

bool find(int arr_2d[ROWS][COLUMNS], int toFind) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            if (arr_2d[i][j] == toFind) {
                return true;
            }
        }
    }

    return false;
}
