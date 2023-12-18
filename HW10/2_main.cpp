#include <iostream>
#include "2_RegHeader.h"

int main() {
    double arr[] = { 2.5, 0, -3.1, 7, 4, -8, 6.2, 3, 0, -2.2 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    double arrSum = 0.0;
    bool arrIsNotEmpty = calculateSum(arr, arrSize, arrSum);

    if (arrIsNotEmpty) {
        std::cout << "Array sum: " << arrSum << std::endl;
    }
    else {
        std::cout << "The array is empty." << std::endl;
    }

    return 0;
}
