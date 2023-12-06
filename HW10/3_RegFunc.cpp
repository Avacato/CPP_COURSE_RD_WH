bool find(const int* arr, int size, int elem) {
    const int* arrPtr = arr;
    for (int i = 0; i < size; i++) {
        if (elem == *arrPtr++) {
            return true;
        }
    }
    return false;
}