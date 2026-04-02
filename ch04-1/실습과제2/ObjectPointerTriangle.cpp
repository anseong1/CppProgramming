// Title: ObjectPointerTriangle
// Date: 2026.04.02
// Author: 안성일

#include <iostream>
using namespace std;

class Triangle {
public:
    double width;
    double height;

    void setWidth(double w);
    void setHeight(double h);
    double getArea();
};

void Triangle::setWidth(double w) {
    width = w;
}

void Triangle::setHeight(double h) {
    height = h;
}

double Triangle::getArea() {
    return width * height * 0.5;
}

int main() {
    Triangle tri;
    Triangle *ptr = &tri;

    ptr->setWidth(3);
    ptr->setHeight(5);
    cout << "삼각형의 면적은" << ptr->getArea() << endl;

    return 0;
}
