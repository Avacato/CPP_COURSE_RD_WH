bool isPalindrom(const char str[]) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            return false;
        }
    }
    return true;
}