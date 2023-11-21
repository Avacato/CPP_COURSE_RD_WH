#include <iostream>


int main() {
    int height, width;

    std::cout << "Enter the height: ";
    std::cin >> height;

    std::cout << "Enter the width: ";
    std::cin >> width;

    int binVar = 1;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j <= i) {
                binVar++;
                if (binVar % 2 == 0) {
                    std::cout << "1";
                }
                else {
                    std::cout << "0";
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}