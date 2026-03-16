// Title: Triangle
// Date: 2026.03.16
// Author: 안성일

#include <iostream>
using namespace std;

class Triangle {
public:
	int height;
	int width;
	int getArea();

};
int Triangle::getArea() {
	return height * width / 2;
}
int main() {
	Triangle t;
	t.height = 10;
	t.width = 5;
	cout << "삼각형의 면적은 " << t.getArea() << endl;
	return 0;
}
