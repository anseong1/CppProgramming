// Title: ArrayAccess
// Date: 2026.04.02
// Author: 안성일

#include <iostream>
using namespace std;

class Triangle {
public:
    double width;
    double height;

    Triangle();
    Triangle(double width, double height);
    ~Triangle();
    double getArea();
};

Triangle::Triangle() {
    this->width = 1;
    this->height = 1;
}

Triangle::Triangle(double width, double height) {
    this->width = width;
    this->height = height;
}

Triangle::~Triangle() {
}

double Triangle::getArea() {
    return this->width * this->height * 0.5;
}

int main() {
    Triangle tri[3];
    Triangle *ptr = tri;  
    int size[3] = {2, 4, 6};

    for (int i = 0; i < 3; i++) {
        (ptr + i)->width = size[i];
        (ptr + i)->height = size[i];
    }

    for (int i = 0; i < 3; i++) {
        cout << "삼각형" << i << "의 면적은 " << (ptr + i)->getArea() << endl;
    }

    return 0;
}
