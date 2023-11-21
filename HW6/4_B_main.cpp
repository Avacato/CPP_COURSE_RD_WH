#include <iostream>


int main() {
    int height, width;

    std::cout << "Enter the height: ";
    std::cin >> height;

    std::cout << "Enter the width: ";
    std::cin >> width;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {

            if (j <= i) {
                std::cout << "*";
            }
            else {
                std::cout << "";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}