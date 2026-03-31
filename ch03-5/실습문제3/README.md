# 실습과제

## 소스코드설명(Picture)

```
#include <iostream>
```
- 입출력 스트림 헤더파일 포함 

```
using namespace std;
```
- std 네임스페이스 사용(cout, endl 사용을 위한 헤더파일std:: 없이 사용 가능)

```
class Picture {
```
- Picture 클래스 정의 시작

```
private:
```
- 외부에서 접근 불가능한 Private 영역

```
int width;
```
- 사진 가로 크기

```
int height;
```
- 사진 세로 크기

```
char place[20];
```
- 촬영 장소 (최대 20글자)

```
public:
```
- 외부에서 접근 가능한 Public 영역

```
Picture();
```
- 기본 생성자 선언

```
Picture(int w, int h, const char* p);
```
- 매개변수 생성자 선언

```
int getWidth();
int getHeight();
const char* getPlace();
```
- 가로 크기, 세로 크기, 촬영 장소 반환 함수 선언

```
Picture::Picture() {
```
- 기본 생성자 구현 시작

```
width = 5;
```
- 가로 크기 5로 초기화

```
height = 7;
```
- 세로 크기 7로 초기화

```
const char* temp = "모름";
```
- 복사할 문자열을 임시 포인터에 저장

```
int i = 0;
```
- 인덱스 변수 0으로 초기화

```
while (temp[i] != '\0') {
```
- 문자열 끝(널문자)이 아닐 때까지 반복

```
place[i] = temp[i];
```
- temp의 i번째 문자를 place에 복사

```
i++;
```
- 다음 문자로 이동

```
place[i] = '\0';
```
- 문자열 끝에 널문자 추가

```
Picture::Picture(int w, int h, const char* p) {
```
- w(가로), h(세로), p(장소)를 받는 매개변수 생성자 구현

```
width = w;
```
- 받은 가로 크기 저장

```
height = h;
```
- 받은 세로 크기 저장

```
int i = 0;
```
- 인덱스 변수 0으로 초기화

```
while (p[i] != '\0') {
```
- 문자열 끝까지 반복

```
place[i] = p[i];
```
- p의 i번째 문자를 place에 복사

```
i++;
```
- 다음 문자로 이동

```
place[i] = '\0';
```
- 문자열 끝에 널문자 추가

```
int Picture::getWidth() { return width; }
```
- width 값 반환

```
int Picture::getHeight() { return height; }
```
- height 값 반환

```
const char* Picture::getPlace() { return place; }
```
- place 배열의 주소 반환

```
Picture pic;
```
- 기본 생성자 호출 → width=5, height=7, place="모름"

```
Picture mt(10, 14, "한라산");
```
- 매개변수 생성자 호출 → width=10, height=14, place="한라산"

```
cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
```
- getter를 통해 가로, 세로, 장소 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

## 실행결과

<img width="1722" height="282" alt="스크린샷 2026-03-31 220145" src="https://github.com/user-attachments/assets/2415a2c5-24b5-4ab8-9809-2e657ee27ad4" />

---

## 소스코드설명(CoffeeMachine)

```
#include <iostream>
```
- 압출력 스트림 헤더파일 포함

```
using namespace std;
```
- std 네임스페이스 사용(cout, endl등을 std:: 없이 사용 가능)

```
class CoffeeMachine {
```
- CoffeeMachine 클래스 정의 시작

```
private:
```
- 외부에서 접근 불가능한 Private 영역

```
int coffee;
```
- 커피 잔량 저장

```
int water;
```
- 물 잔량 저장

```
int sugar;
```
- 설탕 잔량 저장

```
public:
```
- 외부에서 접근 가능한 Public 영역

```
CoffeeMachine(int c, int w, int s);
```
- 매개변수 생성자 선언

```
void drinkEspresso();
```
- 에스프레소 음료 함수 선언

```
void drinkAmericano();
```
- 아메리카노 음료 함수 선언

```
void drinkSugarCoffee();
```
- 설탕커피 음료 함수 선언

```
void show();
```
- 현재 상태 출력 함수 선언

```
void fill();
```
- 재료 채우기 함수 선언

```
CoffeeMachine::CoffeeMachine(int c, int w, int s) {
```
- c(커피), w(물), s(설탕)를 받는 매개변수 생성자 구현

```
coffee = c;
```
- 받은 커피 값 저장

```
water = w;
```
- 받은 물 값 저장

```
sugar = s;
```
- 받은 설탕 값 저장

```
void CoffeeMachine::drinkEspresso() {
```
- 에스프레소 함수 구현

```
coffee -= 1;
water -= 1;
```
- 커피 1, 물 1 소비

```
void CoffeeMachine::drinkAmericano() {
```
- 아메리카노 함수 구현

```
coffee -= 1;
water -= 2;
```
- 커피 1, 물 2 소비

```
void CoffeeMachine::drinkSugarCoffee() {
```
- 설탕커피 함수 구현

```
coffee -= 1;
water -= 2;
sugar -= 1;
```
- 커피 1, 물 2, 설탕 1 소비

```
void CoffeeMachine::show() {
```
- 현재 상태 출력 함수 구현

```
cout << "커피:" << coffee << " 물:" << water << " 설탕:" << sugar << endl;
```
- 커피, 물, 설탕 현재 잔량 출력

```
void CoffeeMachine::fill() {
```
- 재료 채우기 함수 구현

```
coffee += 10;
water += 10;
sugar += 10;
```
- 커피, 물, 설탕 각각 10씩 채우기

```
CoffeeMachine java(5, 10, 6);
```
- 매개변수 생성자 호출 → coffee=5, water=10, sugar=6으로 초기화

```
java.drinkEspresso();
```
- 에스프레소 소비 → coffee=4, water=9

```
java.show();
```
- 현재 상태 출력 → 결과: 커피:4 물:9 설탕:6

```
java.drinkAmericano();
```
- 아메리카노 소비 → coffee=3, water=7

```
java.show();
```
- 현재 상태 출력 → 결과: 커피:3 물:7 설탕:6

```
java.drinkSugarCoffee();
```
- 설탕커피 소비 → coffee=2, water=5, sugar=5

```
java.show();
```
- 현재 상태 출력 → 결과: 커피:2 물:5 설탕:5

```
java.fill();
```
- 재료 채우기 → coffee=12, water=15, sugar=15

```
java.show();
```
- 현재 상태 출력 → 결과: 커피:12 물:15 설탕:15

```
return 0;
```
- 0을 반환하고 프로그램 종료

## 실행결과 

<img width="1718" height="324" alt="스크린샷 2026-03-31 213754" src="https://github.com/user-attachments/assets/32c83092-0bb9-492f-9ce5-a5be0289723d" />

---

## 소스코드설명(Storage)

```
#include <iostream>
```
- 입출력 스트림 헤더파일 포함

```
using namespace std;
```
- std 네임스페이스 사용(cout, endl 등을 std:: 없이 사용 가능)

```
class Storage {
```
- Storage 클래스 정의 시작

```
private:
```
- 외부에서 접근 불가능한 Private 영역

```
double data[10];
```
- 체온 값을 저장하는 배열 (최대 10개)

```
int count;
```
- 현재 저장된 체온 개수

```
public:
```
- 외부에서 접근 가능한 Public 영역

```
Storage();
```
- 기본 생성자 선언

```
void put(double temp);
```
- 체온 저장 함수 선언

```
void dump();
```
- 저장된 모든 체온 출력 함수 선언

```
double getAvg();
```
- 평균 체온 반환 함수 선언

```
Storage::Storage() {
```
- 기본 생성자 구현 시작

```
count = 0;
```
- 저장된 개수 0으로 초기화

```
for (int i = 0; i < 10; i++)
    data[i] = 0;
```
- 배열의 모든 값을 0으로 초기화

```
void Storage::put(double temp) {
```
- 체온 저장 함수 구현

```
if (count < 10) {
```
- 저장 공간이 남아있으면

```
data[count] = temp;
```
- 현재 count 위치에 체온 값 저장

```
count++;
```
- 저장 개수 1 증가

```
} else {
    cout << "저장 공간이 가득 찼습니다." << endl;
}
```
- 저장 공간이 가득 찼을 때 경고 출력

```
void Storage::dump() {
```
- 모든 체온 출력 함수 구현

```
for (int i = 0; i < count; i++)
    cout << data[i] << endl;
```
- 저장된 체온을 한 줄씩 출력

```
double Storage::getAvg() {
```
- 평균 체온 반환 함수 구현

```
double sum = 0;
```
- 합계 변수 0으로 초기화

```
for (int i = 0; i < count; i++)
    sum += data[i];
```
- 저장된 모든 체온 값을 합산

```
return sum / count;
```
- 합계를 개수로 나눠 평균 반환

```
Storage a;
```
- 기본 생성자 호출 → count=0, data 배열 전부 0으로 초기화

```
a.put(36.7);
a.put(36.9);
a.put(36.4);
```
- 체온 36.7, 36.9, 36.4 순서대로 저장

```
a.dump();
```
- 저장된 모든 체온 출력

```
cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;
```
- 평균 체온 계산 후 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

## 실행결과

<img width="1723" height="325" alt="스크린샷 2026-03-31 214517" src="https://github.com/user-attachments/assets/4879b0b8-039f-4d7d-a0d2-482c5470f856" />



