// Titele: Shere
// Date: 2026.03.17
// Author: 안성일

#include <iostream>
using namespace std;

class Sphere {
	public:
	double radius;

    double getVolume() {
        return (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }

    double getSurfaceArea() {
        return (4 * 3.14 * radius * radius);
    }
};
int main(){
    
    Sphere s;
    s.radius = 5;

    cout << "구의 부피는: " << s.getVolume() << endl;
    cout << "구의 표면적은: " << s.getSurfaceArea() << endl;

    return 0;

}
