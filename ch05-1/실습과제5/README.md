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
string GetLastString(string arr[], int size);
```
- 문자열 배열과 크기를 매개변수로 받는 함수 전방 선언

```
int main() {
```
- 메인함수 시작점

```
string names[5];
```
- 문자열 배열 names를 크기 5로 선언

```
for (int i = 0; i < 5; i++) {
```
- 0부터 4까지 5번 반복하는 for문 시작

```
cout << "이름 >> ";
```
- 이름 입력을 요청하는 문자열 출력

```
getline(cin, names[i], '\n');
```
- 한 줄을 입력받아 names[i]에 저장

```
}
```
- for문 종료

```
string res = GetLastString(names, 5);
```
- names 배열과 크기 5를 넘겨 함수 호출, 결과를 res에 저장

```
cout << "사전에서 가장 뒤에 나오는 문자열은 " << res << endl;
```
- 결과를 화면에 출력

```
}
```
- main 함수 종료

```
string GetLastString(string arr[], int size) {
```
- 문자열 배열 arr과 크기 size를 매개변수로 받는 함수 정의 시작

```
string last = arr[0];
```
- 비교 기준값으로 배열의 첫 번째 값을 last에 저장

```
for (int i = 1; i < size; i++) {
```
- 1부터 size-1까지 반복하는 for문 시작

```
if (arr[i] > last)
```
- 현재 배열 요소가 last보다 사전순으로 뒤에 있는지 비교

```
last = arr[i];
```
- 현재 배열 요소가 더 크면 last에 저장

```
}
```
- for문 종료

```
return last;
```
- 가장 사전순으로 뒤에 있는 문자열 반환

<br>

## 실행결과

<img width="1723" height="335" alt="스크린샷 2026-05-06 171229" src="https://github.com/user-attachments/assets/e049c74c-db69-4843-9686-c928c47e089c" />

