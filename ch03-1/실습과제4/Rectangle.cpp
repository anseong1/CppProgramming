// Title: Rectangle
// Date: 2026.03.17
// Author: 안성일

#include <iostream>
using namespace std;

class Rectangle {
public:
    int x, y;        
    int width;
    int height;

    Rectangle() {
        x = 1;
        y = 2;
        width = 3;
        height = 4;
    }

    int getArea();             
    int getPerimeter();         
    void getBottomRight();      
};

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getPerimeter() {
    return 2 * (width + height);
}

void Rectangle::getBottomRight() {
    int bottomX = x + width;
    int bottomY = y + height;
    cout << "사각형의 우측하단의 좌표는 (" << bottomX << ", " << bottomY << ")" << endl;
}

int main() {
    Rectangle rect;  

    cout << "사각형의 면적은 " << rect.getArea() << endl;
    cout << "사각형의 둘레길이는 " << rect.getPerimeter() << endl;

    rect.getBottomRight();

    return 0;
}
