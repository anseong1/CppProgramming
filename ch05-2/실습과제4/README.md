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
void get_parts(double num, int &integer, double &decimal);
```
- 실수, 정수부 참조, 소수부 참조를 매개변수로 받는 get_parts 함수 전방 선언

```
int main(void)
```
- 메인함수 시작점

```
double num;
```
- 입력받을 실수형 변수 num 선언

```
int integer;
```
- 정수부를 저장할 정수형 변수 integer 선언

```
double decimal;
```
- 소수부를 저장할 실수형 변수 decimal 선언

```
cout << "실수를 입력하시오 : ";
```
- 입력 안내 문자열을 화면에 출력

```
cin >> num;
```
- 사용자로부터 실수를 입력받아 num에 저장

```
get_parts(num, integer, decimal);
```
- num과 integer, decimal을 참조로 넘겨 get_parts 함수 호출

```
cout << "정수부 : " << integer << endl;
```
- 정수부를 화면에 출력

```
cout << "소수부 : " << decimal << endl;
```
- 소수부를 화면에 출력

```
}
```
- main 함수 종료

```
void get_parts(double num, int &integer, double &decimal)
```
- 실수, 정수부 참조, 소수부 참조를 매개변수로 받는 get_parts 함수 정의 시작

```
integer = (int)num;
```
- num을 int형으로 강제 형변환하여 정수부만 integer에 저장

```
decimal = num - integer;
```
- num에서 정수부를 빼서 소수부만 decimal에 저장

<br>

## 실행결과

<img width="1732" height="278" alt="스크린샷 2026-05-10 013002" src="https://github.com/user-attachments/assets/2c6f5912-925a-4fb6-94c7-b13a0bc583ee" />

