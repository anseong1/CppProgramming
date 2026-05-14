# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력 기능을 사용하기 위한 헤더파일 포함

```
using namespace std;
```
- std:: 접두사 없이 표준 라이브러리 사용

```
class MyStack {
```
- MyStack 클래스 정의 시작

```
int* p;
```
- 스택 데이터를 저장할 정수형 포인터 변수 선언

```
int size = 0;
```
- 스택의 최대 크기를 저장하는 변수 선언 및 0으로 초기화

```
int tos = 0;
```
- 스택의 top 위치를 가리키는 변수 선언 및 0으로 초기화

```
public:
```
- 외부에서 접근 가능한 Public 영역

```
MyStack() {
```
- 기본 생성자 정의 시작

```
p = nullptr;
```
- 포인터 p를 nullptr로 초기화

```
size = 0;
```
- size를 0으로 초기화

```
tos = 0;
```
- tos를 0으로 초기화

```
}
```
- 기본 생성자 종료

```
MyStack(int size) {
```
- 스택 크기를 매개변수로 받는 생성자 정의 시작

```
this->size = size;
```
- 매개변수 size를 멤버변수 size에 저장

```
p = new int[size];
```
- size 크기의 정수형 배열을 동적 할당하여 p에 저장

```
tos = 0;
```
- tos를 0으로 초기화

```
}
```
- 매개변수 생성자 종료

```
MyStack(const MyStack& src) {
```
- 복사 생성자 정의 시작 (참조)

```
size = src.size;
```
- 원본 객체의 size를 복사

```
tos = src.tos;
```
- 원본 객체의 tos를 복사

```
p = new int[size];
```
- 새로운 배열을 동적 할당하여 p에 저장

```
for (int i = 0; i < tos; i++) {
```
- tos까지 반복하는 for문 시작

```
p[i] = src.p[i];
```
- 원본 객체의 배열 값을 새 배열에 복사

```
}
```
- for문 종료

```
}
```
- 복사 생성자 종료

```
~MyStack() {
```
- 소멸자 정의 시작

```
if (p != nullptr)
```
- 포인터 p가 nullptr이 아닌지 확인

```
delete[] p;
```
- 동적 할당된 배열 메모리 해제

```
}
```
- 소멸자 종료

```
bool push(int n) {
```
- 정수를 스택에 넣는 push 함수 정의 시작

```
if (tos == size)
```
- 스택이 가득 찼는지 확인

```
return false;
```
- 스택이 가득 찼으면 false 반환

```
p[tos++] = n;
```
- 현재 tos 위치에 n을 저장하고 tos를 1 증가

```
return true;
```
- 성공적으로 push했으면 true 반환

```
}
```
- push 함수 종료

```
bool pop(int& n) {
```
- 스택에서 값을 꺼내는 pop 함수 정의 시작

```
if (tos == 0)
```
- 스택이 비어있는지 확인

```
return false;
```
- 스택이 비어있으면 false 반환

```
n = p[--tos];
```
- tos를 1 감소시키고 해당 위치의 값을 n에 저장

```
return true;
```
- pop했으면 true 반환

```
}
```
- pop 함수 종료

```
int main() {
```
- 메인함수 시작점

```
MyStack a(10);
```
- 크기 10의 MyStack 객체 a 생성

```
a.push(10); a.push(20);
```
- 객체 a에 10과 20을 순서대로 push

```
MyStack b = a;
```
- 복사 생성자를 이용해 a를 복사한 객체 b 생성

```
b.push(30);
```
- 객체 b에 30을 push

```
int n;
```
- pop한 값을 저장할 정수형 변수 n 선언

```
a.pop(n);
```
- 객체 a에서 값을 꺼내 n에 저장

```
cout << "스택 a에서 팝한 값 " << n << endl;
```
- 객체 a에서 팝한 값을 화면에 출력

```
b.pop(n);
```
- 객체 b에서 값을 꺼내 n에 저장

```
cout << "스택 b에서 팝한 값 " << n << endl;
```
- 객체 b에서 팝한 값을 화면에 출력

```
}
```
- main 함수 종료

<br>

## 실행결과

<img width="863" height="122" alt="스크린샷 2026-05-14 203149" src="https://github.com/user-attachments/assets/977232e2-638b-4f21-94e3-e836ce04a680" />

