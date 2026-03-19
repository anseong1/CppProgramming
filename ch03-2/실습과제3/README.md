# 실습과제

## 소스코드설명

```
#include <iostream>
```
입출력 스트림 사용을 위한 헤더파일 포함

```
using namespace std;
```
- `std::`를 생략하기 위해 std namespace 사용 선언

```
class Sphere {
```
- Sphere 클래스 정의 시작

```
private:
```
- 클래스 내부를 비공개

```
double radius;
```
- 반지름을 저장하는 실수형 멤버변수 선언

```
public:
```
- 클래스 외부에서도 접근 가능하게 공개

```
Sphere(double r) : radius(r) {}
```
- 매개변수를 받아 반지름을 초기화하는 타겟 생성자 정의

```
Sphere() : Sphere(1.0) {}
```
- 본값 1.0으로 초기화하는 위임 생성자 정의


