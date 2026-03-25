// Title: Circle
// Date: 2026.03.25
// Author: 안성일

#include <iostream>
using namespace std;

class Circle {
private:
    int radius;         
public:
    Circle();
    void setRadius(int r);   
    int getRadius();         
};

Circle::Circle() { radius = 1; }

void Circle::setRadius(int r) { radius = r; }

int Circle::getRadius() { return radius; }

int main() {
    Circle moon;
    moon.setRadius(5); 
    cout << "원의 반지름은 " << moon.getRadius() << endl;
    return 0;
}
