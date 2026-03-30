# 실습과제

## 소스코드설명


```
#include <stdio.h>
```
- 입출력 스트림 헤더파일 포함

```
using namespace std;
```
- std 네임스페이스 사용(cout,endl 등을 std:: 없이 사용 가능)

```
class Triangle {
```
- Triangle 클래스 정의 시작

```
private:
```
- 외부에서 접근 불가능한 Private 영역

```
int width, height;
```
- 너비, 높이 변수 생성

```
public:
```
- 외부에서 접근 가능한 Public 영역

```
Triangle(int w, int h);
```
- 매개변수 있는 생성자 생성

```
Triangle();
```
- 기본 생성자 선언

```
~Triangle();
```
- 소멸자 선언

```
void setWidth(int w);  
void setHeight(int h); 
```
- 너비, 높이 설정 함수 선언

```
int getWidth();         
int getHeight();        
double getArea();       
```
- 너비, 높이, 넓이 반환 함수 선언

```
inline Triangle::Triangle(int w, int h) : width(w), height(h) {
    cout << "폭," << w << " 높이" << h << "인 삼각형 생성" << endl;}
```
-  w→width, h→height 초기화 후 메시지 출력(매개변수 생성자)

```
inline Triangle::Triangle() : Triangle(1, 1) {}
```
- 위의 생성자를 (1,1)로 위임 호출(기본 생성자)

```
inline Triangle::~Triangle() {
    cout << "폭," << width << " 높이" << height << "인 삼각형 소멸" << endl;}
```
- 객체가 메모리에서 해제될 때 자동 호출되어 메시지 출력(소멸자)

```
inline void Triangle::setWidth(int w)  { width = w; }   
inline void Triangle::setHeight(int h) { height = h; }  
```
- 너비, 높이 값 변경

```
inline int Triangle::getWidth()        { return width; } 
inline int Triangle::getHeight()       { return height;} 
```
- 너비, 높이 값 반환

```
inline double Triangle::getArea() {
    return width * height / 2.0;
```
- 삼각형 넓이 = (밑변 × 높이) / 2를 계산 후 반환

```
int main(void) {
```
- 메인함수 시작점

```
Triangle tri;
```
- 기본 생성자 호출(1,1)로 생성

```
tri.setWidth(3);       
tri.setHeight(5);      
```
- setter를 통해 너비를 3, 높이를 5로 변경

```
cout << "삼각형의 면적은 " << tri.getArea() << endl;
```
- getter를 통해 삼각형의 면적 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료 

<br>

## 실행결과

<img width="1719" height="285" alt="스크린샷 2026-03-30 223142" src="https://github.com/user-attachments/assets/dec01dfd-3974-4136-8fbd-7e5c7e69ceb3" />

