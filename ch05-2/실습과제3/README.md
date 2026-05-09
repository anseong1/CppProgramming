# 실습과제


## 소스코드설명
```
#include<iostream>
```
- 입출력 기능을 사용하기 위한 헤더파일 포함

```
using namespace std;
```
- std:: 접두사 없이 표준 라이브러리 사용

```
void swap(int &a, int &b);
```
- 두 정수형 참조를 매개변수로 받는 swap 함수 전방 선언

```
int main(void)
```
- 메인함수 시작점            

```
int x, y;
```
- 교환할 두 정수형 변수 x, y 선언

```
cout << "정수x를 입력 하시오: ";
```
- x 입력 안내 문자열을 화면에 출력

```
cin >> x;
```
- 사용자로부터 정수를 입력받아 x에 저장

```
cout << "정수y를 입력 하시오: ";
```
- y 입력 안내 문자열을 화면에 출력

```
cin >> y;
```
- 사용자로부터 정수를 입력받아 y에 저장

```
cout << "swap함수 호출 전 x=" << x << ", y=" << y << endl;
```
- swap 함수 호출 전 x, y 값을 화면에 출력

```
swap(x, y);
```
- x와 y를 참조로 넘겨 swap 함수 호출

```
cout << "swap함수 호출 후 x=" << x << ", y=" << y << endl;
```
- swap 함수 호출 후 x, y 값을 화면에 출력

```
}
```
- main 함수 종료

```
void swap(int &a, int &b)
```
- 두 정수형 참조를 매개변수로 받는 swap 함수 정의 시작      

```
int temp;
```
- 임시 저장용 변수 temp 선언

```
temp = a;
```
- a의 값을 temp에 임시 저장

```
a = b;
```
- b의 값을 a에 대입

```
b = temp;
```
- temp에 저장된 원래 a의 값을 b에 대입

<br>

## 실행결과

<img width="1730" height="303" alt="스크린샷 2026-05-10 012235" src="https://github.com/user-attachments/assets/7ed02706-4a82-4ef8-a10b-e7417986a830" />


