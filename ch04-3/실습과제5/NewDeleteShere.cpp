// Title : NewDeleteShere
// Date : 2026.04.08
// Author : 안성일

#include <iostream>
#include <cmath>
using namespace std;

class Sphere {
private:
	double radius;
public:
	double getRadius();
	double getVolume();
	void setRadius(double r);

	Sphere(double r);
	Sphere();
};

double Sphere::getRadius() {
	return radius;
}
double Sphere::getVolume() {
	return 4.0 / 3.0 * 3.14 * pow(radius, 3);
}
void Sphere::setRadius(double r) {
	radius = r;
}

Sphere::Sphere(double r) : radius(r) {}
Sphere::Sphere() : Sphere(1) {}

int main(void) {
	int n, r;
	Sphere* arr;

	cout << "생성하고자 하는 구의 개수 : ";
	cin >> n;
	arr = new Sphere[n];

	for (int i = 0; i < n; i++) {
		cout << "구" << i << "의 반지름 : ";
		cin >> r;
		arr[i].setRadius(r);
	}

	for (int i = 0; i < n; i++) cout << "구" << i << "의 크기 : " << arr[i].getVolume() << endl;

	delete[] arr;
  return 0;
}
