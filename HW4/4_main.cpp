//«м≥нив умови перев≥рки трикутника

#include <iostream>

void getNum(int& a);
void isTriangle(int a, int b, int c);

int main() {
    int sideA, sideB, sideC;

    std::cout << "Enter positive values for the lengths of the three sides of the triangle.\n";
    std::cout << "Side A: ";
    getNum(sideA);
    std::cout << "Side B: ";
    getNum(sideB);
    std::cout << "Side C: ";
    getNum(sideC);

    isTriangle(sideA, sideB, sideC);

    return 0;
}

void getNum(int& a) {
    std::cin >> a;
}

void isTriangle(int a, int b, int c) {

    if (a <= 0 || b <= 0 || c <= 0) {
        std::cout << "Invalid side lengths (must be positive values)." << std::endl;
        return;
    }

    bool firstRequirement = (a + b + c == 180);
    bool secondRequirement = (a + b != 180 && a + c != 180 && c + b != 180);

    if (firstRequirement && secondRequirement) {
        std::cout << "Congratulations! It's a triangle!" << std::endl;
    }
    else {
        std::cout << "Check the entered triangle side lengths and try again." << std::endl;

    }
}