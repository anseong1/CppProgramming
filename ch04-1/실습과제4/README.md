# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력 스트림 헤더파일 포함

```
using namespace std;
```
- std 네임스페이스 사용(cout, endl 등을 std:: 없이 사용 가능)

```
class Triangle {
```
- Triangle 클래스 정의

```
public:
```
- 외부에서 접근 가능한 Public 영역

```
    double width;
    double height;
```
- 밑변과 높이를 저장하는 멤버변수 선언

```
    Triangle();
    Triangle(double width, double height);
    ~Triangle();
    double getArea();
```
- 기본 생성자, 매개변수 생성자, 소멸자, 멤버함수 선언

```
Triangle::Triangle() {
    this->width = 1;
    this->height = 1;
}
```
- 기본 생성자 정의, 밑변과 높이를 1로 초기화

```
Triangle::Triangle(double width, double height) {
    this->width = width;
    this->height = height;
    cout << "밑변" << this->width << ",높이" << this->height << "인 삼각형 생성" << endl;
}
```
- 매개변수 2개 생성자 정의, 밑변과 높이를 초기화하고 생성 메시지 출력

```
Triangle::~Triangle() {
    cout << "밑변" << this->width << ",높이" << this->height << "인 삼각형 소멸" << endl;
}
```
- 소멸자 정의, 객체 소멸 시 소멸 메시지 출력

```
double Triangle::getArea() {
    return this->width * this->height * 0.5;
}
```
- 면적을 계산하여 반환하는 함수 정의

```
Triangle tri[3];
```
- 기본 생성자로 Triangle 객체 배열 3개 생성

```
int size[3] = {2, 4, 6};
```
- 밑변과 높이 값을 저장하는 정수 배열 선언 및 초기화

```
for (int i = 0; i < 3; i++) {
    tri[i] = Triangle(size[i], size[i]);
}
```
- 반복문으로 각 객체를 밑변=높이=2,4,6으로 초기화

```
for (int i = 0; i < 3; i++) {
    cout << "삼각형" << i << "의 면적은 " << tri[i].getArea() << endl;
}
```
- 반복문으로 각 객체의 면적 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1721" height="526" alt="스크린샷 2026-04-02 220938" src="https://github.com/user-attachments/assets/fec2ef38-1658-4065-923c-727611d5e2b1" />
