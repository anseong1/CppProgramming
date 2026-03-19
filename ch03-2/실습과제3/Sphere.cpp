// Title: Sphere
// Date: 2026.03.19
// Author: 안성일

#include <iostream>
using namespace std;

class Sphere {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}

    Sphere() : Sphere(1.0) {}

    double getVolume() {
        return (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }
};

int main() {

    Sphere sph1;
    cout << "구의 부피는 " << sph1.getVolume() << endl;

    Sphere sph2(3.0);
    cout << "구의 부피는 " << sph2.getVolume() << endl;

    return 0;
}
