# 실습과제

## 소스코드설명

```
#include<iostream>
```
- 표준 입출력 라이브러리 포함

```
#include<string>
```
- string 클래스 사용을 위한 라이브러리 포함

```
using namespace std;
```
- std 네임스페이스 사용 선언

```
class Person {
```
- Person 클래스 선언 시작

```
string name;
```
- 이름을 저장하는 string 멤버변수 (private)

```
int id;
```
- ID를 저장하는 int 멤버변수 (private)

```
public:
```
- 외부에서 접근 가능한 Public 영역

```
Person(int id, const string name);
```
- 생성자 선언

```
void changeName(const string name);
```
- 이름 변경 함수 선언

```
void show() { cout << id << ',' << name << endl; }
```
- id와 name을 콤마로 구분하여 출력하는 함수

```
Person::Person(int id, const string name) {
```
- 생성자 구현 시작

```
this->id = id;
```
- 매개변수 id를 멤버변수 id에 대입

```
this->name = name;
```
- 매개변수 name을 멤버변수 name에 대입

```
void Person::changeName(const string name) {
```
- 이름 변경 함수 구현 시작

```
this->name = name;
```
- 매개변수 name으로 멤버변수 name 교체

```
Person father(1, "Kitae");
```
- father 객체 생성 (id=1, name="Kitae")

```
Person daughter(father);
```
- 복사생성자로 daughter 객체 생성 (father 복사)

```
cout << "daughter 객체 생성 직후 ----" << endl;
```
- 구분 문자열 출력

```
father.show();
```
- father의 id, name 출력

```
daughter.show();
```
- daughter의 id, name 출력

```
daughter.changeName("Grace");
```
- daughter의 이름을 "Grace"로 변경

```
cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
```
- 구분 문자열 출력

```
father.show();
```
- father의 id, name 출력

```
daughter.show();
```
- daughter의 id, name 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="864" height="176" alt="스크린샷 2026-05-13 222123" src="https://github.com/user-attachments/assets/3fd2562e-cccb-4d52-bea2-544bcf4be349" />

