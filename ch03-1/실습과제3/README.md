# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력을 위한 헤더파일이며 cout,endl 등을 사용하기 위해 선언

```
using namespace std;
```
- std namespce에 있는 함수들을 std::없이 사용하기 위해 선언

```
class Sphere {
```
- 구라는 클래스를 선언

```
public:
```
- 접근 지정자를 외부에서도 사용할 수 있게 공개

```
double radius;
```
- 구의 반지름을 저장하는 실수형 변수

```
double getVolume() {
```
- 구의 부피를 계산하는 멤버함수 정의

```
return (4.0 / 3.0) * 3.14 * radius * radius * radius;
```
- 구의 부피공식을 이용하여 계산한 값을 반환

```
double getSurfaceArea() {
```
- 구의 표면적을 계산하는 멤버함수 정의

```
return (4 * 3.14 * radius * radius);
```
- 구의 표면적 공식을 이용하여 계산한 값을 반환

```
};
```
- Sphere 클래스 정의의 끝을 의미

```
int main(){
```
- 메인함수 시작점

```
Sphere s;
```
- `Sphere` 클래스의 객체s 생성

```
s.radius = 5;
```
- 객체 s의 반지름 값을 5로 설정

```
cout << "구의 부피는: " << s.getVolume() << endl;
```
- `getVolume` 함수를 호출하여 구의 부피를 계산하고 화면에 출력

```
cout << "구의 표면적은: " << s.getSurfaceArea() << endl;
```
- `getSurfaceArea` 함수를 호출하여 구의 표면적을 계산하고 화면에 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1720" height="340" alt="스크린샷 2026-03-17 140735" src="https://github.com/user-attachments/assets/3520dad0-845f-4893-abac-33bb5b35da57" />
