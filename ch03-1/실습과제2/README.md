# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력 위한 헤더파일이며 cout,endl,cin 등을 사용하기 위해 선언

```
using namespace std;
```
- `std` namespace에 있는 함수들을 std:: 없이 사용하기 위해 선언

```
class Triangle {
```
- `Triangle`이라는 클래스를 선언

```
public:
```
- 접근 지정자를 외부에서도 사용할 수 있게 공개(public)

```
int height;
int width;
```
- 멤버변수 선언

```
int getArea();
```
- 삼각형 넓이를 계산하는 멤버함수 선언

```
};
```
- `Triangle`클래스 정의가 끝났다는 것을 의미
- 클래스 끝에는 세미콜론(;)을 붙임

```
int Triangle::getArea() {
```
- `Triangle` 클래스의 `getArea()` 함수를 클래스 밖에서 정의

```
return height * width / 2;
```
- 삼각형 넓이 공식을 계산해서 결과를 반환

```
int main() {
```
- 메인함수 시작점

```
Triangle t;
```
- `Triangle` 클래스를 이용해 `t`라는 객체 생성

```
t.height = 10;
t.width = 5;
```
- 객체 `t`의 값 설정

```
cout << "삼각형의 면적은 " << t.getArea() << endl;
```
 - "삼각형의 면적은 " 문자열을 출력하고 `t.getArea()`으로 삼각형 넓이를 
 계산해서 출력, `endl`은 줄바꿈 의미

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1724" height="472" alt="스크린샷 2026-03-16 214154" src="https://github.com/user-attachments/assets/50abf69c-7438-4fb4-8074-1f19ce1a3cdf" />



