// Title : NewDeleteTriangle
// Date : 2026.04.08
// Author : 안성일  

#include <iostream>
using namespace std;

class Triangle {
private:
	double w, h;
public:
	Triangle(double _w, double _h);
	~Triangle();

	double getArea();
};

Triangle::Triangle(double _w, double _h) : w(_w), h(_h) {
	cout << "밑변" << _w << " 높이" << _h << "인 삼각형 생성" << endl;
}
Triangle::~Triangle() {
	cout << "밑변" << w << " 높이" << h << "인 삼각형 소멸" << endl;
}
double Triangle::getArea() {
	return w * h / 2;
}

int main(void) {
	Triangle* arr = new Triangle[3]{ {1, 1}, {2, 2}, {3, 3} };

	for (int i = 0; i < 3; i++) cout << i << "번째 삼각형의 넓이는 " << arr[i].getArea() << endl;

	delete[] arr;
  return 0;
}
