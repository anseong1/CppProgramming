// Title: SphereGlovalObject
// Date: 2026.03.24
// Author: 안성일

#include <iostream>      // 입출력 스트림 헤더 파일 포함
using namespace std;     // std 네임스페이스 사용 (cout, endl 등을 std:: 없이 사용 가능)


class Sphere {           // Sphere 클래스 정의 시작
    double radius;       // 반지름(radius)
public:                  // 외부 접근 가능한 public 영역
    Sphere();            // 기본 생성자 선언
    Sphere(double r);    // 매개변수 생성자 선언
    ~Sphere();           // 소멸자 선언
    double getVolume();  // 부피 반환 함수 선언
};

// 기본 생성자 - Sphere(1)에 위임 → 반지름 1로 초기화
Sphere::Sphere() : Sphere(1) {}

// 매개변수 생성자 - r→radius 초기화
Sphere::Sphere(double r) : radius(r) {
    cout << "반지름 " << radius << "인 구 생성" << endl;  // 구 생성 시 반지름 출력
}

// 소멸자 - 객체 소멸 시 자동 호출
Sphere::~Sphere() {
    cout << "반지름 " << radius << "인 구 소멸" << endl;  // 구 소멸 시 반지름 출력
}

// 구의 부피 계산 - 공식: (4/3) × 원주율 × r³
double Sphere::getVolume() {
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;  // 3.14를 원주율로 사용
}

// 전역 객체 선언 - main() 실행 전에 생성됨
Sphere sph1(10);  // 전역 객체 sph1 생성 → radius=10 
Sphere sph2(20);  // 전역 객체 sph2 생성 → radius=20 

int main() {
    cout << "구의 부피는" << sph1.getVolume() << endl;  // sph1 부피 출력
    cout << "구의 부피는" << sph2.getVolume() << endl;  // sph2 부피 출력 

    return 0;  // main 종료 후 전역 객체 소멸 - 선언 역순으로 sph2 → sph1 소멸
}
