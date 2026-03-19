# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력 스트림 사용을 위한 헤더파일 포함

```
using namespace std;
```
- std::를 생략하기 위해 std namespace 사용 선언

```
class Rectangle {
```
- Rectangle 클래스 정의 시작

```
public:
```
- 외부 접근 가능한 영역 선언

```
int x, y;
```
- 좌측상단 좌표를 저장하는 멤버변수

```
int width, height;
```
- 사각형의 크기를 저장하는 멤버변수

```
Rectangle();
```
- 기본 생성자 선언

```
Rectangle(int x, int y);
```
- 좌표만 초기화하는 생성자 선언

```
Rectangle(int x, int y, int w, int h);
```
- 좌표와 크기를 모두 초기화하는 생성자 선언

```
int getArea();
```
- 면적 반환 함수

```
int getPerimeter();
```
- 둘레 반환 함수

```
void getBottomRight();
```
- 우측하단 좌표 출력 함수

```
bool isSquare();
```
- 정사각형 여부 판단 반환 함수

```
};
```
- 클래스 정의 종료

```
Rectangle::Rectangle(int x, int y, int w, int h)
```
- 매개변수를 이용한 타켓 생성자 정의 시작

```
: x(x), y(y), width(w), height(h) {
```
- 멤버 초기화 리스트를 이용해서 모든 변수 초기화

```
Rectangle::Rectangle(int x, int y)
```
- 두개의 매개변수를 받는 생성자 정의 시작

```
: Rectangle(x, y, 1, 1) {
```
- 타겟 생성자를 호출하는 위임 생성자

```
Rectangle::Rectangle()
```
- 기본 생성자 정의 시작

```
: Rectangle(1, 1, 1, 1) {
```
- 기본값으로 초기화하는 위임 생성자

```
int Rectangle::getArea() {
```
- 면적 계산 함수 정의 시작

```
return width * height;
```
- 가로와 세로의 곱을 반환

```
int Rectangle::getPerimeter() {
```
- 둘레 계산 함수 정의 시작

```
return 2 * (width + height);
```
- 둘레 공식 계산 후 반환

```
void Rectangle::getBottomRight() {
```
- 우측 하단 좌표 출력 함수 정의 시작

```
cout << "(" << x + width << ", " << y - height << ")" << endl;
```
- 우측하단 좌표를 계산 후 출력

```
bool Rectangle::isSquare() {
```
- 정사각형 여부 판별 함수 정의 시작

```
return width == height;
```
- 가로와 세로 비교 결과 반환

```
int main() {
```
- 메인함수 시작점

```
Rectangle rect1;
```
- 기본 생성자를 이용해 객체 생성

```
Rectangle rect2(3, 5);
```
- 좌표를 초기화하는 생성자를 이용한 객체 생성

```
Rectangle rect3(3, 5, 2, 4);
```
- 모든 값을 초기화하는 생성자를 이용한 객체 생성

```
cout << "rect1의 면적은 " << rect1.getArea() << endl;
```
- `rect1` 객체의 면적을 계산하고 출력 후 줄바꿈

```
cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;
```
- `rect2` 객체의 둘레를 계산하고 출력 후 줄바꿈

```
cout << "rect3의 우측하단의 좌표는 ";
```
- `rect3`의 좌표 출력 안내문 출력

```
rect3.getBottomRight();
```
- `rect3` 객체의 우측하단 좌표 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1719" height="350" alt="스크린샷 2026-03-19 123538" src="https://github.com/user-attachments/assets/f7aca41c-197b-4c94-a872-ad6a94b75e79" />
