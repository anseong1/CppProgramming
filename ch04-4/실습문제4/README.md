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


