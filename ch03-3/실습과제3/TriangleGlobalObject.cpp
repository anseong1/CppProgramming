// Title: TriangleGlobalObject
// Date: 2026.03.24
// Author: 안성일

#include <iostream>      // 입출력 스트림 헤더 파일 포함
using namespace std;     // std 네임스페이스 사용

class Triangle {         // Triangle 클래스 정의 시작
    double width, height;  // 밑변(width), 높이(height)
public:                  // 외부 접근 가능한 public 영역
    Triangle();                    // 기본 생성자 선언
    Triangle(double a, double b);  // 매개변수 생성자 선언
    ~Triangle();                   // 소멸자 선언
    double getArea();              // 넓이 반환 함수 선언
};

// 기본 생성자 - Triangle(1,1)에 위임
Triangle::Triangle() : Triangle(1, 1) {}

// 매개변수 생성자 - a→width, b→height 초기화
Triangle::Triangle(double a, double b) : width(a), height(b) {
    cout << "밑변 " << width << "높이 " << height << "인 삼각형 생성" << endl;
}

// 소멸자 - 객체 소멸 시 자동 호출
Triangle::~Triangle() {
    cout << "밑변 " << width << "높이 " << height << "인 삼각형 소멸" << endl;
}

// 넓이 계산 - (밑변 × 높이) / 2
double Triangle::getArea() {
    return width * height / 2;
}

// 전역변수로 선언 - main() 실행 전에 생성됨
Triangle tri1(4, 8);  // 전역 객체 tri1 생성 → width=4, height=8 
Triangle tri2(2, 2);  // 전역 객체 tri2 생성 → width=2, height=2 

int main() {
    double area1 = tri2.getArea();  // tri2 넓이 계산 (2*2/2 = 2)
    cout << "삼각형의 면적은 " << area1 << endl;  // 2 출력

    double area2 = tri1.getArea();  // tri1 넓이 계산 (4*8/2 = 16)
    cout << "삼각형의 면적은 " << area2 << endl;  // 16 출력

    return 0;  // main 종료 후 전역 객체 소멸 - 생성 역순으로 tri2 → tri1 소멸
}

