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
void add2(int &value);
```
- 정수형 참조를 매개변수로 받는 함수 전방 선언 (과제 속 코드는 값에 의한 호출이라 함수 내부에서 값을 변경할 수 없음)

```
int main(void)
```
- 메인함수 시작점    

```
int number;
```
- 정수형 변수 number 선언

```
cout << "정수를 입력하세요 : ";
```
- 입력 안내 문자열을 화면에 출력

```
cin >> number;
```
- 사용자로부터 정수를 입력받아 number에 저장

```
add2(number);
```
- number를 참조로 넘겨 add2 함수 호출

```
cout << "2만큼 증가한 값 :" << number << endl;
```
- 증가된 number 값을 화면에 출력            

```
}
```
- main 함수 종료

```
void add2(int &value)
```
- 정수형 참조를 매개변수로 받는 함수 정의 시작
       
```
value += 2;
```
- 참조로 받은 value에 2를 더함

<br>

## 실행결과

<img width="1729" height="249" alt="스크린샷 2026-05-10 011208" src="https://github.com/user-attachments/assets/fa8d78d6-4384-4e70-8642-f06ccd606940" />

