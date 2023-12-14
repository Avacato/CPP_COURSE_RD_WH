#include <iostream>

bool binarySearch(int arr[], int size, int x)
{
    int l = 0;
    int r = size - 1;

    while (l <= r) {
        const int m = l + (r - l) / 2;

        if (arr[m] == x)
            return true;

        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return false;
}

// ??? Evaluate algorithmic complexity of this program
int main()
{
    const int ROWS = 20;
    const int COLUMNS = 30;
    int arr[ROWS][COLUMNS] = {};
    const int toFind = 0;

    //time complexity повинна обраховуватись за наступною формулою: O(ROWS * log(COLUMNS))
    //а space complexity: O(ROWS * COLUMNS)

    for (int i = 0; i < ROWS; i++)
    {
        if (binarySearch(arr[i], COLUMNS, toFind))
        {
            std::cout << "FOUND";
            break;
        }
    }
}