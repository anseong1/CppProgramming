# 실습과제
     
## 소스코드설명

```
#include <iostream>
```
- 입출력 기능을 사용하기 위한 헤더파일 포함

```
using namespace std;
```
- std:: 없이 표준 라이브러리 사용

```
class Triangle {
```
- Triangle 클래스 정의 시작

```
private:
```
- 외부에서 직접 접근 불가한 멤버 영역

```
static int numOfTriangle;
```
- 생성된 삼각형의 개수를 저장하는 static 멤버변수 선언

```
public:
```
- 외부에서 접근 가능한 멤버 영역

```
Triangle() { numOfTriangle++; }
```
- 기본 생성자, 객체가 생성될 때마다 numOfTriangle 1 증가

```
~Triangle() { numOfTriangle--; }
```
- 소멸자, 객체가 소멸될 때마다 numOfTriangle 1 감소

```
static int getNumofTriangle() { return numOfTriangle; }
```
- numOfTriangle 값을 반환하는 static 멤버함수

```
int Triangle::numOfTriangle = 0;
```
- static 멤버변수 외부 정의 및 0으로 초기화

```
int main() {
```
- 메인함수 시작점

```
Triangle* tri1 = new Triangle[5];
```
- 힙 메모리에 Triangle 객체 5개 동적 생성, 생성자 5번 호출

```
cout << "생성된 삼각형의 개수 : " << Triangle::getNumofTriangle() << endl;
```
- 객체 없이 클래스명으로 getNumofTriangle 호출 후 출력

```
delete [] tri1;
```
- tri1이 가리키는 객체 5개 모두 소멸, 소멸자 5번 호출

```
Triangle tri2[15];
```
- 스택 메모리에 Triangle 객체 15개 생성, 생성자 15번 호출

```
cout << "생성된 삼각형의 개수 : " << Triangle::getNumofTriangle() << endl;
```
- 객체 없이 클래스명으로 getNumofTriangle 호출 후 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="862" height="119" alt="스크린샷 2026-05-21 163718" src="https://github.com/user-attachments/assets/e7178daf-dece-47bb-93c0-be5ccec5e9f0" />




