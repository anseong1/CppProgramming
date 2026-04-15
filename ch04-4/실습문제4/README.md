# 실습과제

## 2번 문제 소스코드설명

```
#include <iostream>
```
- 헤더 파일 포함, 입출력 사용

```
using namespace std;
```
- std 네임스페이스 사용 (cout, endl 등을 std:: 없이 사용 가능)

```
int main() {
```
- 메인함수 정의 시작

```
int n;
```
- 물품 개수를 저장할 정수형 변수 n 선언

```
cout << "구입할 물품의 개수>>";
```
- 물품 개수 입력을 안내하는 문자열 출력

```
cin >> n;
```
- 사용자로부터 물품 개수를 입력받아 n에 저장

```
int* prices = new int[n];
```
- n개의 정수를 저장할 동적 배열 생성 후 포인터 prices에 주소 저장

```
cout << "물품 " << n << "개의 가격 입력>>";
```
- 가격 입력을 안내하는 문자열 출력

```
for (int i = 0; i < n; i++) {
```
- 0부터 n-1까지 반복하는 for문

```
    cin >> prices[i];
```
- 가격을 하나씩 입력받아 배열 prices[i]에 저장

```
int minPrice = prices[0];
```
- 최솟값 변수를 배열 첫 번째 요소로 초기화

```
int maxPrice = prices[0];
```
- 최댓값 변수를 배열 첫 번째 요소로 초기화

```
for (int i = 1; i < n; i++) {
```
- 두 번째 요소부터 마지막까지 반복 

```
    if (prices[i] < minPrice) minPrice = prices[i];
```
- 현재 요소가 최솟값보다 작으면 최솟값 갱신

```
    if (prices[i] > maxPrice) maxPrice = prices[i];
```
- 현재 요소가 최댓값보다 크면 최댓값 갱신

```
cout << "제일 싼 가격은 " << minPrice << endl;
```
- 최솟값 출력

```
cout << "제일 비싼 가격은 " << maxPrice << endl;
```
- 최댓값 출력

```
delete[] prices;
```
- 동적으로 할당한 배열 메모리 해제

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1723" height="284" alt="스크린샷 2026-04-15 192953" src="https://github.com/user-attachments/assets/75cb9d48-04e6-43db-abed-927eb9c5160d" />

---

## 4번 문제 소스코드설명

```
#include <iostream>
```
- 헤더 파일 포함, 입출력 사용

```
#include <string>
```
- 헤더 파일 포함, string 클래스 사용

```
using namespace std;
```
- std 네임스페이스 사용 (cout, endl 등을 std:: 없이 사용 가능)

```
int main() {
```
- 메인함수 정의 시작

```
string str;
```
- 입력받을 문자열을 저장할 string 변수 선언

```
string result;
```
- 결과 문자열을 저장할 string 변수 선언

```
cout << "텍스트 입력(한글 안 됨)>>";
```
- 텍스트 입력을 안내하는 문자열 출력

```
getline(cin, str);
```
- 공백 포함 한 줄을 입력받아 str에 저장

```
for (int i = 0; i < str.length(); i++) {
```
- 문자열 길이만큼 반복하는 for문

```
char ch = str[i];
```
- 현재 인덱스의 문자를 ch에 저장

```
if (isalpha(ch) || ch == ' ') {
```
- ch가 알파벳이거나 공백인지 확인

```
result += ch;
```
- 조건을 만족하면 result에 ch 추가

```
cout << result << endl;
```
- 완성된 결과 문자열 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료


<br>

## 실행결과

<img width="1723" height="240" alt="스크린샷 2026-04-15 193442" src="https://github.com/user-attachments/assets/7c6cd383-95ed-4914-9e87-825adf04cca3" />

---

## 5번 문제 소스코드설명

```
// Title: no.5Practice
// Date: 2026.04.15
// Author: 안성일
```
- 프로그램 제목, 날짜, 작성자 주석

```
#include <iostream>
```
- 헤더 파일 포함, 입출력 사용

```
using namespace std;
```
- std 네임스페이스 사용 (cout, endl 등을 std:: 없이 사용 가능)

```
class Container {
```
- Container 클래스 정의 시작

```
int* p;
```
- 정수 배열을 가리킬 포인터 변수 선언

```
int size;
```
- 배열의 크기를 저장할 정수형 변수 선언

```
public:
```
- 외부에서 접근 가능하도록 public 선언

```
Container(int size);
```
- 생성자 선언

```
~Container();
```
- 소멸자 선언

```
void read();
```
- 배열에 정수를 입력받는 함수 선언

```
void write();
```
- 배열의 정수를 출력하는 함수 선언

```
void rotate();
```
- 배열을 오른쪽으로 회전하는 함수 선언

```
double avg();
```
- 배열의 평균을 반환하는 함수 선언

```
Container::Container(int size) {
```
- 생성자 정의 시작

```
this->size = size;
```
- 매개변수 size를 멤버변수 size에 저장

```
p = new int[size];
```
- size 크기의 정수형 동적 배열 생성 후 p에 주소 저장

```
Container::~Container() {
```
- 소멸자 정의 시작

```
delete[] p;
```
- 동적으로 할당한 배열 메모리 해제

```
void Container::read() {
```
- read 함수 정의 시작

```
cout << "정수 " << size << "개 입력>>";
```
- 정수 입력을 안내하는 문자열 출력

```
for (int i = 0; i < size; i++)
    cin >> p[i];
```
- size만큼 반복하며 정수를 입력받아 배열에 저장

```
void Container::write() {
```
- write 함수 정의 시작

```
for (int i = 0; i < size; i++)
    cout << p[i] << " ";
```
- 배열의 모든 요소를 공백으로 구분하여 출력

```
cout << endl;
```
- 출력 후 줄바꿈

```
void Container::rotate() {
```
- rotate 함수 정의 시작

```
int last = p[size - 1];
```
- 배열의 마지막 요소를 last에 저장

```
for (int i = size - 1; i > 0; i--)
    p[i] = p[i - 1];
```
- 뒤에서부터 앞 요소를 한 칸씩 오른쪽으로 이동

```
p[0] = last;
```
- 저장해둔 마지막 요소를 배열의 첫 번째 자리에 삽입

```
double Container::avg() {
```
- avg 함수 정의 시작

```
double sum = 0;
```
- 합계를 저장할 변수 sum을 0으로 초기화

```
for (int i = 0; i < size; i++)
    sum += p[i];
```
- 배열의 모든 요소를 더해 sum에 누적

```
return sum / size;
```
- 합계를 배열 크기로 나눠 평균 반환

```
int main() {
```
- 메인함수 정의 시작

```
Container c(10);
```
- 정수 10개를 저장할 Container 객체 c 생성

```
c.read();
```
- 정수 10개 입력받아 배열에 저장

```
c.write();
```
- 배열의 정수 출력

```
c.rotate();
```
- 배열을 오른쪽으로 한 칸 회전

```
c.write();
```
- 회전된 배열의 정수 출력

```
cout << "평균은 " << c.avg() << endl;
```
- 배열의 평균값 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과 

<img width="1729" height="281" alt="스크린샷 2026-04-15 193713" src="https://github.com/user-attachments/assets/f99f0271-c13d-4c62-8a3e-e3b93a386702" />

---

## 11번 문제 소스코드설명


