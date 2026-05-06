# 실습과제


## 소스코드설명

```
#include <iostream>
```
- 입출력 기능을 사용하기 위한 헤더파일 포함

```
#include <string>
```
- 문자열(string) 기능을 사용하기 위한 헤더파일 포함

```
using namespace std;
```
- std:: 접두사 없이 표준 라이브러리 사용

```
string GetLatterString(string* a, string* b);
```
- 문자열 포인터 두 개를 매개변수로 받는 함수 전방 선언

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
res = GetLatterString(&s1, &s2);
```
- s1과 s2의 주소값을 넘겨 함수 호출, 결과를 res에 저장

```
cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
```
- 결과를 화면에 출력

```
}
```
- main 함수 종료

```
string GetLatterString(string* a, string* b) {
```
- 문자열 포인터 a, b를 매개변수로 받는 함수 정의 시작

```
if (*a > *b)
```
- 포인터 a가 가리키는 값과 포인터 b가 가리키는 값을 사전순으로 비교

```
return *a;
```
- a가 가리키는 값이 더 크면 그 값을 반환

```
else
```
- 그렇지 않은 경우

```
return *b;
```
- b가 가리키는 값을 반환

<br>

## 실행결과

<img width="1721" height="215" alt="스크린샷 2026-05-06 171332" src="https://github.com/user-attachments/assets/b8263155-39ce-403c-8de9-8145dd876217" />

