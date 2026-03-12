# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력을 위한 헤더파일이며 cout, endl 등을 사용하기 위해 필수적

```
using namespace std;
```
- `std::cout`, `std::cin` 처럼 std::를 붙이지 않고 사용하기 위해 namespace 선언

```
int main()
```
- 메인함수 시작점

```
int x;
```
- 저장형 변수 `x` 선언

```
cout << "정수 x를 입력 하시오: ";
```
- 화면에 "정수 x를 입력 하시오:" 라는 문장을 출력

```
cin >> x;
```
- 사용자가 입력한 값을 변수 `x`에 저장

```
int y = x*x + 2*x - 5;
```
- 정수형 변수 `y`를 선언하고 입력받은 `x` 값을 이용해 y = x² + 2x − 5 를 계산하여 `y`에 저장

```
cout << "x=" << x << "일 때 y의 값은 " << y << "입니다." << endl;
```
- x의 값과 계산된 y의 값을 화면에 출력하고 `endl` 은 줄바꿈 의미

```
return 0;
```
- 

<br>

<img width="1604" height="222" alt="스크린샷 2026-03-12 101916" src="https://github.com/user-attachments/assets/13015b6e-9538-4282-b6c5-7b6a04034032" />
