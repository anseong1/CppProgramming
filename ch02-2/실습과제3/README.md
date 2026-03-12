# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력을 위한 헤더파일이며 `cout`, `endl` 등을 사용하기 위해 필수적

```
#include <string>
```
- 문자열 자료형 사용하기 위한 헤더파일

```
using namespace std;
```
- std::를 붙이지 않고 사용하기 위해 namespace 사용하겠다는 선언

```
int main()
```
- 메인함수 시작점

```
int id;
string name, address;
```
- 각각 정수형 변수, 문자열 변수 선언

```
cout << "학번을 입력하시오: ";
```
- 문장을 화면에 출력

```
cin >> id;
```
- 사용자가 입력한 변수를 `id`에 저장

```
cin.ignore();
```
- `cin` 입력 후 입력 버퍼에 남아있는 줄바꿈 문자(\n)를 제거하는 역할

```
cout << "이름을 입력하시오: ";
```
- 문장을 화면에 출력

```
getline(cin, name);
```
- 한 줄 전체를 입력받아 `name`에 저장

```
cout << "주소를 입력하시오: ";
```
- 문장을 화면에 출력

```
getline(cin, address);
```
- 한 줄 전체를 입력받아 `address`에 저장

```
cout << endl;
```
- 한 줄 띄어서 줄바꿈

```
cout << "1. 학번:" << id << endl;
cout << "2. 이름:" << name << endl;
cout << "3. 주소:" << address << endl;
```
- 입력받은 학번, 이름, 주소를 화면에 출력 `endl`은 줄바꿈 의미

```
return 0;
```
- 프로그램 종료를 알리는 반환값

<br>

## 실행결과

<img width="1712" height="370" alt="스크린샷 2026-03-12 104915" src="https://github.com/user-attachments/assets/30f95007-1f77-4adf-ab85-dc57af84c0e2" />
