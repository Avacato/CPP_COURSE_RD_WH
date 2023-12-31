#include <iostream>


class Rectangle {
public:
    Rectangle() 
        : length(0.0), height(0.0) {}

    Rectangle(float l, float h) 
        : length(l), height(h) {}

    float getArea() const {
        return length * height;
    }

    float getPerimeter() const {
        return 2 * (length + height);
    }

private:
    float length;
    float height;
};

int main() {
    Rectangle rectangle1;
    Rectangle rectangle2(10, 5);
    Rectangle rectangle3(30, 15);

    std::cout << "Area rectangle 1: " << rectangle1.getArea() << std::endl;
    std::cout << "Perimeter rectangle 1: " << rectangle1.getPerimeter() << std::endl << std::endl;

    std::cout << "Area rectangle 2: " << rectangle2.getArea() << std::endl;
    std::cout << "Perimeter rectangle 2: " << rectangle2.getPerimeter() << std::endl << std::endl;

    std::cout << "Area rectangle 3: " << rectangle3.getArea() << std::endl;
    std::cout << "Perimeter rectangle 3: " << rectangle3.getPerimeter() << std::endl << std::endl;

    return 0;
}
