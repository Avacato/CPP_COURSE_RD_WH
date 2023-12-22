#include <iostream>
#include <algorithm>

constexpr unsigned int ROWS = 3;
constexpr unsigned int COLUMNS = 3;

void sort(int arr[ROWS][COLUMNS], SortingDirection direction);
void printArray(int arr[ROWS][COLUMNS]);

enum SortingDirection {
    ByRows,
    ByColumns
};

int main() {
    int arr1[ROWS][COLUMNS] = {
        {1, 5, 4},
        {3, 8, 6},
        {9, 5, 1}
    };
    int arr2[ROWS][COLUMNS] = {
        {1, 5, 4},
        {3, 8, 6},
        {9, 5, 1}
    };

    std::cout << "Original array:" << std::endl;
    printArray(arr1);

    sort(arr1, ByRows);

    std::cout << std::endl << "Array sorted by rows:" << std::endl;
    printArray(arr1);

    sort(arr2, ByColumns);

    std::cout << std::endl << "Array sorted by columns:" << std::endl;
    printArray(arr2);


    return 0;
}


void sort(int arr[ROWS][COLUMNS], SortingDirection direction) {
    if (direction == ByRows) {
        for (int i = 0; i < ROWS; i++) {
            std::sort(arr[i], arr[i] + COLUMNS);
        }
    }
    else if (direction == ByColumns) {
        for (int j = 0; j < COLUMNS; j++) {
            int column[ROWS];
            for (int i = 0; i < ROWS; i++) {
                column[i] = arr[i][j];
            }
            std::sort(column, column + ROWS);
            for (int i = 0; i < ROWS; i++) {
                arr[i][j] = column[i];
            }
        }
    }
}

void printArray(int arr[ROWS][COLUMNS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}