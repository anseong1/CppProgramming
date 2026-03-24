// Title: Triangle
// Date: 2026.03.24
// Author: 안성일

#include <iostream>  // 입출력 스트림 헤더 파일 포함
using namespace std;  // std 네임스페이스 사용 (cout, endl 등을 std:: 없이 사용 가능)

class Triangle {  // Triangle 클래스 정의 시작
    double width, height;  // 밑변(width)과 높이(height)
public:  // 외부에서 접근 가능한 public 영역
    Triangle();              // 기본 생성자 선언
    Triangle(double a, double b);  // 매개변수 있는 생성자 선언
    ~Triangle();             // 소멸자 선언
    double getArea();        // 넓이를 반환하는 함수 선언
};

// 기본 생성자 - 위임 생성자로 Triangle(1, 1)을 호출
Triangle::Triangle() : Triangle(1, 1) {}

// 매개변수 생성자 - a를 width에, b를 height에 초기화
Triangle::Triangle(double a, double b) : width(a), height(b) {
    // 삼각형이 생성될 때 밑변과 높이를 출력
    cout << "밑변 " << width << "높이 " << height << "인 삼각형 생성" << endl;
}

// 소멸자 - 객체가 메모리에서 해제될 때 자동 호출
Triangle::~Triangle() {
    // 삼각형이 소멸될 때 밑변과 높이를 출력
    cout << "밑변 " << width << "높이 " << height << "인 삼각형 소멸" << endl;
}

// 넓이 계산 함수 - (밑변 × 높이) / 2 반환
double Triangle::getArea() {
    return width * height / 2;
}

int main() {
    Triangle tri1;  // 기본 생성자 호출 → Triangle(1, 1) 위임 → width=1, height=1
    double area1 = tri1.getArea();  // tri1의 넓이 계산 (1*1/2 = 0.5)
    cout << "삼각형의 면적은 " << area1 << endl;  // 면적 출력

    Triangle tri2(2, 4);  // 매개변수 생성자 호출 → width=2, height=4
    double area2 = tri2.getArea();  // tri2의 넓이 계산 (2*4/2 = 4)
    cout << "삼각형의 면적은 " << area2 << endl;  // 면적 출력

    return 0;  // main 함수 종료, 이후 tri2 → tri1 순서로 소멸자 자동 호출
}
