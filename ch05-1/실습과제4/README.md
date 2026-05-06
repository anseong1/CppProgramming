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
void SwapString(string* a, string* b);
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
cout << "호출전 s1:" << s1 << " s2:" << s2 << endl;
```
- 함수 호출 전 s1과 s2의 값을 화면에 출력

```
SwapString(&s1, &s2);
```
- s1과 s2의 주소값을 넘겨 SwapString 함수 호출

```
cout << "호출후 s1:" << s1 << " s2:" << s2 << endl;
```
- 함수 호출 후 s1과 s2의 값을 화면에 출력

```
}
```
- main 함수 종료

```
void SwapString(string* a, string* b) {
```
- 문자열 포인터 a, b를 매개변수로 받는 SwapString 함수 정의 시작

```
string temp = *a;
```
- 포인터 a가 가리키는 값을 임시 변수 temp에 저장

```
*a = *b;
```
- 포인터 b가 가리키는 값을 포인터 a가 가리키는 곳에 저장

```
*b = temp;
```
- temp에 저장해둔 값을 포인터 b가 가리키는 곳에 저장

<br>

## 실행결과

<img width="1730" height="253" alt="스크린샷 2026-05-06 171306" src="https://github.com/user-attachments/assets/27cf42ed-44ea-4c72-a74c-a5383a95d589" />

