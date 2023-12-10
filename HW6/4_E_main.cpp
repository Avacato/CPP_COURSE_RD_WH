#include <iostream>


int main() {
    int height, width;

    std::cout << "Enter the height: ";
    std::cin >> height;

    std::cout << "Enter the width: ";
    std::cin >> width;

    int binVar = 0;

    for (int i = 0; i < height; i++) {

        for (int j = 0; j <= i && j < width; j++) {
            std::cout << (binVar % 2 == 0);
            binVar++;
        }
        binVar = (i % 2 == 0) ? 1 : 0;
        std::cout << std::endl;
    }

    return 0;
}