// Title: InlineTriangle
// Date: 2026.03.30
// Author: 안성일

#include <iostream>
using namespace std;

class Triangle {
private:
    double width;
    double height;

public:
    
    Triangle() : width(1), height(1) {
        cout << "폭" << width << ",높이" << height << "인 삼각형 생성" << endl;
    }

    ~Triangle() {
        cout << "폭" << width << ",높이" << height << "인 삼각형 소멸" << endl;
    }

    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }


    double getWidth() { return width; }
    double getHeight() { return height; }

    double getArea() { return width * height / 2; }
};


int main() {
    Triangle tri;
    tri.setWidth(3);
    tri.setHeight(5);
    cout << "삼각형의 면적은 " << tri.getArea() << endl;
    return 0;
}
