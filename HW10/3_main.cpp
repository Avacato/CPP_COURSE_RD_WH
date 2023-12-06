#include <iostream>
#include "3_RegHeader.h"

int main() {
    int arr[] = { 2, 0, 8, -4, -1, 6, 1, 8 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int userNum;

    std::cout << "Enter the number you want to find in the array: ";
    std::cin >> userNum;
    bool arrIsNotEmpty = find(arr, arrSize, userNum);

    if (arrIsNotEmpty) {
        std::cout << "The number " << userNum << " was found in the array." << std::endl;
    }
    else {
        std::cout << "Number not found in array." << std::endl;
    }

    return 0;
}
