// Title: ThisPointerTriangle
// Date: 2026.04.02
// Author: 안성일

#include <iostream>
using namespace std;

class Triangle {
public:
    double width;
    double height;

    Triangle();
    Triangle(double width);
    Triangle(double width, double height);
    double getArea();
};

Triangle::Triangle() {
    this->width = 1;
    this->height = 1;
}

Triangle::Triangle(double width) {
    this->width = width;
    this->height = 1;
}

Triangle::Triangle(double width, double height) {
    this->width = width;
    this->height = height;
}

double Triangle::getArea() {
    return this->width * this->height * 0.5;
}

int main() {
    Triangle tri1;
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;
    Triangle tri2(10);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
    Triangle tri3(10, 2);
    cout << "삼각형의 면적은 " << tri3.getArea() << endl;

    return 0;
}
