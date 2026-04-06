# 실습과제

## 소스코드설명


```
#include <iostream>
```
- 입출력 스트림 헤더파일 포함

```
using namespace std;
```
- std 네임스페이스 사용 (cout, endl 등을 std:: 없이 사용 가능)

```
int main() {
```
- main 함수 정의

```
int n;
```
- 저장할 문자열의 크기를 저장할 변수 n 선언

```
cout << "저장할 문자열의 크기를 입력하세요: ";
cin >> n;
```
- 문자열 크기 안내 후 사용자로부터 n 입력

```
cin.ignore();
```
- 입력 버퍼에 남아있는 개행문자 제거

```
char* p = new char[n + 1];
```
- n+1개의 문자를 저장할 메모리를 힙에 동적 할당하고 포인터 p가 가리키게 함 (null 문자 공간 포함)

```
cout << "문자열을 입력하시오: ";
cin.getline(p, n + 1);
```
- 문자열 입력 안내 후 공백 포함 문자열을 p에 저장

```
cout << "입력한 문자열은 " << p << "입니다." << endl;
```
- 입력한 문자열 출력

```
delete[] p;
```
- 동적 할당한 배열 메모리 해제하여 메모리 누수 방지

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1728" height="263" alt="스크린샷 2026-04-06 202911" src="https://github.com/user-attachments/assets/d6438078-84e9-410f-bf64-8dddfcf43422" />

