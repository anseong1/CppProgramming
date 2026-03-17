// Title: UpgradeRectangle
// Date: 26.03.17
// Author: 안성일

#include <iostream>
using namespace std;

class Rectangle {
public:
    int x, y;
    int width, height;

    void input();

    int getArea();
    int getPerimeter();
    void getBottomRight();
};

void Rectangle::input() {
    cout << "사각형의 좌측상단좌표(x,y): ";
    cin >> x >> y;

    cout << "사각형의 폭과 높이(width,height): ";
    cin >> width >> height;
}

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getPerimeter() {
    return 2 * (width + height);
}

void Rectangle::getBottomRight() {
    int bottomX = x + width;
    int bottomY = y - height;  
    cout << "사각형의 우측하단의 좌표는 (" << bottomX << ", " << bottomY << ")" << endl;
}

int main() {
    Rectangle rect;

    rect.input();  

    cout << "사각형의 면적은 " << rect.getArea() << endl;
    cout << "사각형의 둘레는 " << rect.getPerimeter() << endl;

    rect.getBottomRight();

    return 0;
}
