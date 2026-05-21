# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력 사용을 위한 헤더파일 포함

```
using namespace std;
```
- std:: 없이 표준 라이브러리 사용

```
class Vector {
```
- Vector 클래스 정의 시작

```
int* mem;
int size;
```
- mem : 동적 배열의 주소를 저장하는 포인터

```
public:
```
- 외부에서 접근 가능한 멤버 영역

```
Vector();
```
- 매개변수 없는 생성자 선언

```
Vector(int size, int val);
```
- 크기와 초기값을 받는 생성자 선언

```
void show();
```
- 전체 원소를 출력하는 함수 선언

```
void show(int n);
```
- 앞 n개 원소를 출력하는 함수 선언

```
Vector::Vector() {
```
- 매개변수 없는 생성자 정의 시작

```
size = 5;
mem = new int[size];
```
- 크기를 5로 설정하고 동적 배열 할당

```
for (int i = 0; i < size; i++)
    mem[i] = 0;
```
- 배열의 모든 원소를 0으로 초기화

```
Vector::Vector(int size, int val) {
```
- 크기와 초기값을 받는 생성자 정의 시작

```
this->size = size;
mem = new int[size];
```
- 매개변수 size를 멤버 size에 저장하고 동적 배열 할당

```
for (int i = 0; i < size; i++)
    mem[i] = val;
```
- 배열의 모든 원소를 val로 초기화

```
void Vector::show() {
```
- 전체 원소 출력 함수 정의 시작

```
for (int i = 0; i < size; i++)
    cout << mem[i] << " ";
cout << endl;
```
- 배열의 모든 원소를 공백으로 구분하여 출력

```
void Vector::show(int n) {
```
- 앞 n개 원소 출력 함수 정의 시작

```
for (int i = 0; i < n; i++)
    cout << mem[i] << " ";
cout << endl;
```
- 배열의 앞 n개 원소를 공백으로 구분하여 출력

```
int main() {
```
- 메인함수 시작점

```
Vector x;
```
- 매개변수 없는 생성자 호출, 크기 5 배열을 0으로 초기화

```
Vector y(10, 8);
```
- 크기 10, 초기값 8로 배열 초기화

```
x.show();
```
- x의 전체 원소 출력

```
y.show();
```
- y의 전체 원소 출력

```
y.show(3);
```
- y의 앞 3개 원소 출력

<br>

<img width="857" height="119" alt="스크린샷 2026-05-21 223839" src="https://github.com/user-attachments/assets/abb7aaf4-f6a1-4726-a7fb-93e8331e6393" />

