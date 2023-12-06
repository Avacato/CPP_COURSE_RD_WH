bool calculateSum(const double* arr, int arrSize, double& sum) {
    sum = 0.0;

    if (arrSize > 0) {
        for (int i = 0; i < arrSize; i++) {
            sum += arr[i];
        }
        return true;
    }
    return false;
}