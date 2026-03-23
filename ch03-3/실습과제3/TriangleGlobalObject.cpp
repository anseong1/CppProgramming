// Title: TriangleGlobalObject
// Date: 2026.03.24
// Author: 안성일

#include <iostream>
using namespace std;

class Triangle {
    double width, height;
public:
    Triangle();
    Triangle(double a, double b);
    ~Triangle();
    double getArea();
};

Triangle::Triangle() : Triangle(1, 1) {}
Triangle::Triangle(double a, double b) : width(a), height(b) {
    cout << "밑변 " << width << "높이 " << height << "인 삼각형 생성" << endl;
}
Triangle::~Triangle() {
    cout << "밑변 " << width << "높이 " << height << "인 삼각형 소멸" << endl;
}
double Triangle::getArea() {
    return width * height / 2;
}

// 전역변수로 선언
Triangle tri1(4, 8);
Triangle tri2(2, 2);

int main() {
    double area1 = tri2.getArea();
    cout << "삼각형의 면적은 " << area1 << endl;
    double area2 = tri1.getArea();
    cout << "삼각형의 면적은 " << area2 << endl;
    return 0;
}
