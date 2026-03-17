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
void input();
```
- 사용자로부터 값을 입력받는 함수의 선언

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
void Rectangle::input() {
```
- `input` 함수를 클래스 외부에서 정의

```
cout << "사각형의 좌측상단좌표(x,y): ";
```
- 좌표 입력을 안내하는 메시지를 출력

```
cin >> x >> y;
```
- 사용자로부터 x와 y 값을 입력받아 저장

```
cout << "사각형의 폭과 높이(width,height): ";
```
- 가로와 세로 길이 입력을 안내하는 메시지를 출력

```
cin >> width >> height;
```
- width와 height 값을 입력받아 저장

```
}
```
- input` 함수의 끝을 의미

```
int Rectangle::getArea() {
```
- `getArea` 함수를 클래스 외부에서 정의

```
return width * height;
```
- 가로 × 세로로 면적을 계산하여 반환

```
}
```
- `getArea` 함수의 끝을 의미

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
}
```
- `getBottomRight` 함수의 끝을 의미

```
int main() {
```
- 메인함수 시작점

```
Rectangle rect;
```
- `Rectangle` 객체 rect를 생성

```
rect.input();
```
- 사용자로부터 사각형의 좌표와 크기를 입력받기 위해 선언

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

<img width="1712" height="410" alt="스크린샷 2026-03-17 152912" src="https://github.com/user-attachments/assets/d652207b-3cdc-4abc-9ab5-2aabecb8aca8" />
