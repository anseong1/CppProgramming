# 실습과제

## 소스코드설명

```
#include <iostream>
```
- <iostream> 헤더 파일 포함, 입출력 사용

```
#include <string>
```
- string 클래스와 to_string() 함수 사용을 위해 포함

```
using namespace std;
```
- std 네임스페이스 사용 (cout, endl 등을 std:: 없이 사용 가능)

```
int main() {
```
- 메인함수 정의 시작

```
string result = "";
```
- 지금까지 이어붙인 전체 문자열 저장 변수, 빈 문자열로 초기화

```
string input;
```
- 사용자가 입력한 문자열을 임시 저장하는 변수

```
int count = 0;
```
- 입력 횟수를 세는 변수, 0으로 초기화

```
while (true) {
```
- "quit" 입력 전까지 무한 반복

```
cout << "문자열 입력 : ";
getline(cin, input, '\n');
```
- 입력 요청 후 엔터키('\n')를 구분문자로 한 줄 전체를 input에 저장

```
if (input == "quit")
    break;
```
- 입력값이 "quit"이면 반복문 종료, ==는 string 클래스의 비교 연산자

```
count++;
```
- 입력 횟수 1 증가

```
result = result + "<" + to_string(count) + ">" + input;
```
- 기존 result에 <번호>입력값 형태로 이어붙임, to_string()으로 정수를 문자열로 변환 후 + 연산자로 연결

```
cout << "이어진 문자열: " << result << endl;
```
- 현재까지 이어붙인 전체 문자열 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1713" height="364" alt="스크린샷 2026-04-14 150521" src="https://github.com/user-attachments/assets/e1c85579-0699-4443-a3cc-ac25c656577e" />

