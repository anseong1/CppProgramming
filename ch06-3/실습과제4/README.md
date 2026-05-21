# 실습과제

## 소스코드설명
```
#include <iostream>
#include <string>
```
- 입출력과 string 클래스 사용을 위한 헤더파일 포함

```
using namespace std;
```
- std:: 없이 표준 라이브러리 사용

```
bool equals(string x, string y) {
```
- 매개변수 2개짜리 equals 함수 정의 시작

```
return x == y;
```
- x와 y 전체 문자열이 같으면 true 반환

```
bool equals(string x, string y, int n) {
```
- 매개변수 3개짜리 equals 함수 정의 시작

```
return x.substr(0, n) == y.substr(0, n);
```
- x와 y의 앞 n글자를 잘라 비교, 같으면 true 반환

```
bool equals(string x, string y, int n, string z) {
```
- 매개변수 4개짜리 equals 함수 정의 시작

```
return x.substr(0, n) == y.substr(0, n) &&
       y.substr(0, n) == z.substr(0, n);
```
- x, y, z의 앞 n글자를 모두 비교, 전부 같으면 true 반환

```
int main() {
```
- 메인함수 시작점

```
string x = "Prof. Hwang";
string y = "Prof. Kim";
string z = "Prof. Lee";
```
- 비교할 문자열 3개 초기화

```
if (equals(x, y))       cout << "같음" << endl;
```
- x와 y 전체 비교
```
if (equals(x, y, 3))    cout << "앞 3글자 같음" << endl;
```
- x와 y 앞 3글자 비교
```
if (equals(x, y, 5, z)) cout << "앞 5글자 같음" << endl;
```
- x, y, z 앞 5글자 비교

<br>

## 실행결과

<img width="858" height="129" alt="스크린샷 2026-05-21 223011" src="https://github.com/user-attachments/assets/4a601b0e-f150-41b1-af3c-1e0c5fc2cdf2" />

