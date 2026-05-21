// Title: TriangleStaticCount
// Date: 2026.05.21
// Author: 안성일

#include <iostream>
using namespace std;

class Triangle {
private:
    static int numOfTriangle;
public:
    Triangle() { numOfTriangle++; }
    ~Triangle() { numOfTriangle--; }
    static int getNumofTriangle() { return numOfTriangle; }
};

int Triangle::numOfTriangle = 0;

int main() {
    Triangle* tri1 = new Triangle[5];
    cout << "생성된 삼각형의 개수 : " << Triangle::getNumofTriangle() << endl;
    delete[] tri1;
    Triangle tri2[15];
    cout << "생성된 삼각형의 개수 : " << Triangle::getNumofTriangle() << endl;
    return 0;
}
