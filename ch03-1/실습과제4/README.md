# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력을 위한 헤더파일이며 cout, endl등을 사용하기 위해 선언

```
using namespace std;
```
- std namespace에 있는 함수들을 std::없이 사용하기 위해 선언

```
class Rectangle {
```
- 사각형을 표현하는 클래스 정의

```
public:
```
- 접근 지정자를 외부에서도 사용할 수 있게 공개

```
int x, y;
int width;
int height;
```
- 사각형의 좌표, 가로길이, 세로길이를 저장하는 변수

```
Rectangle() {
```
- 객체가 생성될 때 자동으로 실행되는 생성자

```
x = 1;
y = 2;
width = 3;
height = 4;
```
- 왼쪽에 오른쪽 값을 넣기

```
int getArea();
int getPerimeter();
void getBottomRight();
```
- 사각형의 면적, 둘레, 우측 하단 좌표를 출력하는 함수 선언

```
};
```
- `Rectangle` 클래스 정의의 끝을 의미

```
int Rectangle::getArea() {
```
- `getArea` 함수를 클래스 외부에서 정의

```
return width * height;
```
- 가로 × 세로로 면적을 계산하여 반환

```
int Rectangle::getPerimeter() {
```
- `getPerimeter` 함수를 클래스 외부에서 정의

```
return 2 * (width + height);
```
- 둘레 공식으로 계산하여 반환

```
void Rectangle::getBottomRight() {
```
- 우측 하단 좌표를 구하는 함수를 정의

```
int bottomX = x + width;
```
- 우측 x 좌표는 현재 x에 가로 길이를 더해서 계산

```
int bottomY = y - height;
```
- 우측 y 좌표는 현재 y에서 세로 길이를 빼서 계산

```
cout << "사각형의 우측하단의 좌표는 (" << bottomX << ", " << bottomY << ")" << endl;
```
- 계산된 우측 하단 좌표를 화면에 출력

```
int main() {
```
- 메인함수 시작점

```
Rectangle rect;
```
- `Rectangle` 객체 rect를 생성

```
cout << "사각형의 면적은 " << rect.getArea() << endl;
```
- `getArea` 함수를 호출하여 면적을 계산하고 출력

```
cout << "사각형의 둘레길이는 " << rect.getPerimeter() << endl;
```
- `getPerimeter` 함수를 호출하여 둘레를 계산하고 출력

```
rect.getBottomRight();
```
- 우측 하단 좌표를 계산하여 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1722" height="349" alt="스크린샷 2026-03-17 145722" src="https://github.com/user-attachments/assets/c2ef27b7-36b8-4050-9f70-e6899c46eed1" />




