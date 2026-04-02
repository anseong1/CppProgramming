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
    void setWidth(double w);
    void setHeight(double h);
    double getArea();
```
- 멤버함수 선언

```
void Triangle::setWidth(double w) {
    width = w;
}
```
- 밑변을 설정하는 함수 정의, 매개변수 w를 멤버변수 width에 저장

```
void Triangle::setHeight(double h) {
    height = h;
}
```
- 높이를 설정하는 함수 정의, 매개변수 h를 멤버변수 height에 저장

```
double Triangle::getArea() {
    return width * height * 0.5;
}
```
- 면적을 계산하여 반환하는 함수 정의

```
Triangle tri;
```
- Triangle 클래스의 객체 tri 생성

```
Triangle *ptr = &tri;
```
- 객체 포인터 ptr 선언 및 객체 tri의 주소 대입

```
ptr->setWidth(3);
```
- 포인터로 setWidth 호출, 밑변을 3으로 설정

```
ptr->setHeight(5);
```
- 포인터로 setHeight 호출, 높이를 5로 설정

```
cout << "삼각형의 면적은" << ptr->getArea() << endl;
```
- 포인터로 getArea 호출, 면적 출력 

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1722" height="208" alt="스크린샷 2026-04-02 215620" src="https://github.com/user-attachments/assets/54feb4d8-c4a8-4dd8-87f5-987781a9e442" />

