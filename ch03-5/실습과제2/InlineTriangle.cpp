// Title: InlineTriangle
// Date: 2026.03.30
// Author: 안성일

﻿#include <iostream>
using namespace std;

class Triangle {
private: 
	int width, height;

public:
	Triangle(int w, int h);
	Triangle();
	~Triangle();

	void setWidth(int w);
	void setHeight(int h);

	int getWidth();
	int getHeight();

	double getArea();
};

inline Triangle::Triangle(int w, int h) : width(w), height(h) {
	cout << "폭" << w << " 높이" << h << "인 삼각형 생성" << endl;
}

inline Triangle::Triangle() : Triangle(1, 1) {}

inline Triangle::~Triangle() {
	cout << "폭" << width << " 높이" << height << "인 삼각형 소멸" << endl;
}

inline void Triangle::setWidth(int w) {width = w;}

inline void Triangle::setHeight(int h) {height = h;}

inline int Triangle::getWidth() {
    return width;
}

inline int Triangle::getHeight() {
	return height;
}

inline double Triangle::getArea() {
	return width * height * 2;
}

int main(void) {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
    cout << "삼각형의 면적은" << tri.getArea() << endl;

	return 0;
}
