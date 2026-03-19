// Title: Sphere
// Date: 2026.03.19
// Author: 안성일

#include <iostream>
using namespace std;

class Rectangle {
public:
    int x, y;
    int width, height;

    Rectangle();
    Rectangle(int x, int y);
    Rectangle(int x, int y, int w, int h);

    int getArea();
    int getPerimeter();
    void getBottomRight();
    bool isSquare();
};

Rectangle::Rectangle(int x, int y, int w, int h)
    : x(x), y(y), width(w), height(h) {
}

Rectangle::Rectangle(int x, int y)
    : Rectangle(x, y, 1, 1) {
}

Rectangle::Rectangle()
    : Rectangle(1, 1, 1, 1) {
}

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getPerimeter() {
    return 2 * (width + height);
}

void Rectangle::getBottomRight() {
    cout << "(" << x + width << ", " << y - height << ")" << endl;
}

bool Rectangle::isSquare() {
    return width == height;
}

int main() {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3, 5, 2, 4);

    cout << "rect1의 면적은 " << rect1.getArea() << endl;
    cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;
    cout << "rect3의 우측하단의 좌표는 ";
    rect3.getBottomRight();

    return 0;
}
