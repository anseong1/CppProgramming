// Title: Sphere
// Date: 2026.03.24
// Author: 안성일

#include <iostream>
using namespace std;

class Sphere {
    double radius;
public:
    Sphere();
    Sphere(double r);
    ~Sphere();
    double getVolume();
};

Sphere::Sphere() : Sphere(1) {}

Sphere::Sphere(double r) : radius(r) {
    cout << "반지름 " << radius << "인 구 생성" << endl;
}

Sphere::~Sphere() {
    cout << "반지름 " << radius << "인 구 소멸" << endl;
}

double Sphere::getVolume() {
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

int main() {
    Sphere sph1;
    cout << "구의 부피는" << sph1.getVolume() << endl;

    Sphere sph2(3);
    cout << "구의 부피는" << sph2.getVolume() << endl;

    return 0;
}
