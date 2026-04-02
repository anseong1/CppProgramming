// Title: ObjectArrayTriangle
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
    cout << "밑변" << this->width << ",높이" << this->height << "인 삼각형 생성" << endl;
}

Triangle::~Triangle() {
    cout << "밑변" << this->width << ",높이" << this->height << "인 삼각형 소멸" << endl;
}

double Triangle::getArea() {
    return this->width * this->height * 0.5;
}

int main() {
    Triangle tri[3];
    int size[3] = {2, 4, 6};

    for (int i = 0; i < 3; i++) {
        tri[i] = Triangle(size[i], size[i]);
    }

    for (int i = 0; i < 3; i++) {
        cout << "삼각형" << i << "의 면적은 " << tri[i].getArea() << endl;
    }

    return 0;
}
