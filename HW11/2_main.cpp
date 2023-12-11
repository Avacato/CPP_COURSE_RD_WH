#include <iostream>


enum class SortingDirection {
    ascending,
    descending
};

bool isSorted(const int* arr, int size, SortingDirection direction) {
    if (size < 2) {
        return true;
    }

    if (direction == SortingDirection::ascending) {
        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
    }
    else if (direction == SortingDirection::descending) {
        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] < arr[i + 1]) {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int ascendingArr[] = { 1, 2, 3, 4, 5 };
    int descendingArr[] = { 5, 4, 3, 2, 1 };
    int size = 5;

    if (isSorted(ascendingArr, size, SortingDirection::ascending)) {
        std::cout << "The array is sorted in ascending order." << std::endl;
    }
    else {
        std::cout << "The array is not in ascending order." << std::endl;
    }

    if (isSorted(descendingArr, size, SortingDirection::descending)) {
        std::cout << "The array is sorted in descending order." << std::endl;
    }
    else {
        std::cout << "The array is not in descending order." << std::endl;
    }
}
