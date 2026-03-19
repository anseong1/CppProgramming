// Titele: Triangle
// Date: 2026.03.19
// Author: 안성일

#include <iostream>

using namespace std;

class Triangle {
private:
    double base;
    double height;
    double area;

public:
    Triangle(double b, double h) : base(b), height(h), area(0.5 * b * h) {
    }

    Triangle() : Triangle(1.0, 1.0) {
    }

    double getBase() { return base; }
    double getHeight() { return height; }
    double getArea() { return area; }
};

int main() {
    Triangle tri1;
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;

    Triangle tri2(2, 4);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;

    return 0;
}
