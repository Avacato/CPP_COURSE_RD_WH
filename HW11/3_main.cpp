#include <iostream>

constexpr unsigned int ROWS = 4;
constexpr unsigned int COLUMNS = 6;


//#3_1
void traverseTopDownRightLeftByColumns(int arr_2d[ROWS][COLUMNS])
{
    for (int i = COLUMNS - 1; 0 <= i; i--) {
        for (int j = 0; j < ROWS; j++) {
            std::cout << arr_2d[j][i] << " ";
        }
        std::cout << std::endl;
    }
}

//#3_2
void traverseLeftRightDownTopSwitchingByRows(int arr_2d[ROWS][COLUMNS])
{
    for (int i = ROWS - 1; 0 <= i; i--) {
        if (i % 2 == 0) {
            for (int j = COLUMNS - 1; 0 <= j; j--) {
                std::cout << arr_2d[i][j] << " ";
            }
        }
        else {
            for (int j = 0; j < COLUMNS; j++) {
                std::cout << arr_2d[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}


int main()
{
    int arr_2d[ROWS][COLUMNS] = {
      {11, 12, 13, 14, 15, 16 },
      {21, 22, 23, 24, 25, 26 },
      {31, 32, 33, 34, 35, 36 },
      {41, 42, 43, 44, 45, 46 }
    };


    traverseTopDownRightLeftByColumns(arr_2d);
    std::cout << std::endl;

    traverseLeftRightDownTopSwitchingByRows(arr_2d);
    std::cout << std::endl;

    return 0;
}