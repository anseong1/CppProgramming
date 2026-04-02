# 실습문제

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
    Triangle(double width);
    Triangle(double width, double height);
    double getArea();
```
- 생성자 3개와 멤버함수 선언

```
Triangle::Triangle() {
    this->width = 1;
    this->height = 1;
}
```
- 기본 생성자 정의, 밑변과 높이를 1로 초기화

```
Triangle::Triangle(double width) {
    this->width = width;
    this->height = 1;
}
```
- 매개변수 1개 생성자 정의, 밑변은 매개변수로 높이는 1로 초기화

```
Triangle::Triangle(double width, double height) {
    this->width = width;
    this->height = height;
}
```
- 매개변수 2개 생성자 정의, 밑변과 높이를 매개변수로 초기화

```
double Triangle::getArea() {
    return this->width * this->height * 0.5;
}
```
- 면적을 계산하여 반환하는 함수 정의

```
Triangle tri1;
```
- 기본 생성자 호출, 밑변=1 높이=1로 객체 생성

```
cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```
- tri1의 면적 출력

```
Triangle tri2(10);
```
- 매개변수 1개 생성자 호출, 밑변=10 높이=1로 객체 생성

```
cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
- tri2의 면적 출력

```
Triangle tri3(10, 2);
```
- 매개변수 2개 생성자 호출, 밑변=10 높이=2로 객체 생성

```
cout << "삼각형의 면적은 " << tri3.getArea() << endl;
```
- tri3의 면적 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1724" height="273" alt="스크린샷 2026-04-02 220323" src="https://github.com/user-attachments/assets/7188946f-5597-4096-a391-ce6d087d48aa" />


