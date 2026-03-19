# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력을 담당하는 표준 라이브러리이며 `cout`, `endl` 등을 사용하기 위해 필수적

```
using namespace std;
```
- `std::` 생략하기 위해 std namespace 선언

```
class Triangle {
```
- Triangle 클래스 선언

```
private:
```
- 외부에서 접근하지 못하도록 캡슐화

```
double base;
double height;
double area;
```
- 삼각형의 밑변, 높이, 면적을 저장할 변수들

```
public:
```
- 클래스 외부에서도 이 함수(생성자)를 사용할 수 있게 공개

```
Triangle(double b, double h) : base(b), height(h), area(0.5 * b * h) {}
```
- `Triangle(double b, double h)`는 타켓 생성자고 객체를 만들 때 밑변과 높이를 직접 전달받음, `: base(b), height(h), area(0.5 * b * h)`는 멤버 초기화 리스트고 여기서 면적 계산까지 완료

```
Triangle() : Triangle(1.0, 1.0) {}
```
- `Triangle()`는 매개변수가 없는 기본 생성자이고 `: Triangle(1.0, 1.0)`는 위임 생성자이며 자기 스스로 초기화하지 않고, 위에서 만든 타겟 생성자에게 일을 맡겨 기본값을 1.0으로 설정

```
double getBase() { return base; }
double getHeight() { return height; }
double getArea() { return area; }
};
```
- `private`으로 보호된 변수들의 값을 외부로 '전달'만 해주는 함수들

```
int main() {
```
- 메인함수 시작점

```
Triangle tri1;
```
- 기본 생성자 호출

```
cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```
- `ri1.getArea(): tri1` 객체에 저장된 값을 출력 후 줄바꿈

```
Triangle tri2(2, 4);
```
- 타겟 생성자를 호출하여 밑변 2.0, 높이 4.0인 객체 생성

```
cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
- `tri2.getArea(): tri(2, 4)` 객체에 저장된 값을 출력 후 줄바꿈

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1721" height="289" alt="스크린샷 2026-03-19 095101" src="https://github.com/user-attachments/assets/a6820147-f246-4ea4-97c6-a4d84a03b117" />


