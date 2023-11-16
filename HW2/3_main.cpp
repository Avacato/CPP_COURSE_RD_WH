#include <iostream>

int main()
{
    double dVar{ 7.3695488738498 };
    std::cout << "Double var orig:\t\t\t" << dVar << std::endl;
    std::cout.precision(2);
    std::cout << "Double var precision 2:\t\t\t" << dVar << std::endl;
    std::cout.precision(5);
    std::cout << "Double var precision 5:\t\t\t" << dVar << std::endl;
    std::cout.precision(10);
    std::cout << "Double var precision 10:\t\t" << dVar << std::endl;
    std::cout.precision(5); //def precision
    std::cout << std::scientific;
    std::cout << "Double var orig precision (E):\t\t" << dVar << std::endl;
    std::cout.precision(2);
    std::cout << "Double var precision 2(E):\t\t" << dVar << std::endl;
    std::cout.precision(5);
    std::cout << "Double var precision 5(E):\t\t" << dVar << std::endl;
    std::cout.precision(10);
    std::cout << "Double var precision 10(E):\t\t" << dVar << std::endl;
}