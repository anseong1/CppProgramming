# 실습과제


## 소스코드설명

```
#include <iostream>
```
- 입출력 기능을 사용하기 위한 헤더파일 포함

```
#include <string>
```
- 문자열 기능을 사용하기 위한 헤더파일 포함

```
using namespace std;
```
- std:: 접두사 없이 표준 라이브러리 사용

```
string GetLatterString(string a, string b);
```
- 함수를 미리 선언

```
int main() {
```
- 메인함수 시작점

```
string s1("hello");
```
- 문자열 변수 s1에 "hello" 저장

```
string s2("world");
```
- 문자열 변수 s2에 "world" 저장

```
string res;
```
- 결과를 저장할 문자열 변수 res 선언

```
res = GetLatterString(s1, s2);
```
- s1과 s2를 비교해 사전순으로 뒤에 오는 문자열을 res에 저장

```
cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
```
- 결과를 화면에 출력

```
}
```
- main 함수 종료

```
string GetLatterString(string a, string b) {
```
- 두 문자열을 매개변수로 받는 함수 정의 시작

```
if (a > b)
```
- a가 b보다 사전순으로 뒤에 있는지 비교

```
return a;
```
- a가 더 크면 a를 반환

```
else
```
- 그렇지 않은 경우

```
return b;
```
- b를 반환

<br>

## 실행결과

<img width="1726" height="223" alt="스크린샷 2026-05-06 171407" src="https://github.com/user-attachments/assets/c8e8a8d8-d432-4a2c-9796-6788c1165a97" />

