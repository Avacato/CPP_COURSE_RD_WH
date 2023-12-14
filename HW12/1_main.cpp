#include <iostream>
#include "1_RegHeader.h"


int main() {
    int arr[] = { 5, 1, 9, 7, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
