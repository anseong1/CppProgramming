# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력 기능을 사용하기 위한 헤더파일 포함

```
using namespace std;
```
- std:: 접두사 없이 표준 라이브러리 사용

```
class Collector {
```
- Collector 클래스 정의 시작

```
int* p;
```
- 데이터를 저장할 정수형 포인터 변수 선언

```
int size = 0;
```
- 데이터 개수를 저장하는 변수 선언 및 0으로 초기화

```
public:
```
- 외부에서 접근 가능한 Public 영역

```
Collector(int size, int values[]) {
```
- 크기와 정수형 배열을 매개변수로 받는 생성자 정의 시작

```
this->size = size;
```
- 매개변수 size를 멤버변수 size에 저장

```
p = new int[size];
```
- size 크기의 정수형 배열을 동적 할당하여 p에 저장

```
for (int i = 0; i < size; i++)
```
- 0부터 size-1까지 반복하는 for문 시작

```
p[i] = values[i];
```
- values 배열의 값을 p 배열에 복사

```
}
```
- 생성자 종료

```
~Collector() {
```
- 소멸자 정의 시작

```
delete[] p;
```
- 동적 할당된 배열 메모리 해제

```
}
```
- 소멸자 종료

```
void show() {
```
- 데이터를 출력하는 show 함수 정의 시작

```
cout << "데이터 수 " << size << ": ";
```
- 데이터 개수 출력

```
for (int i = 0; i < size; i++)
```
- 0부터 size-1까지 반복하는 for문 시작

```
cout << p[i] << " ";
```
- 배열의 각 값을 출력

```
cout << endl;
```
- 줄바꿈 출력

```
}
```
- show 함수 종료

```
int getSize() { return size; }
```
- size 값을 반환하는 getter 함수

```
int get(int index) { return p[index]; }
```
- 인덱스에 해당하는 배열 값을 반환하는 getter 함수

```
};
```
- Collector 클래스 정의 종료

```
double calcAvg(Collector& c) {
```
- Collector 객체를 참조로 받아 평균을 계산하는 함수 정의 시작

```
double sum = 0;
```
- 합계를 저장할 변수 sum을 0으로 초기화

```
for (int i = 0; i < c.getSize(); i++)
```
- 0부터 데이터 개수-1까지 반복하는 for문 시작

```
sum += c.get(i);
```
- 각 데이터 값을 sum에 누적

```
return sum / c.getSize();
```
- sum을 데이터 개수로 나눠 평균값 반환

```
}
```
- calcAvg 함수 종료

```
int main() {
```
- 메인함수 시작점

```
int temp[] = { 69, 70, 71, 72, 74 };
```
- 정수형 배열 temp에 5개의 값 저장

```
Collector weight(4, temp);
```
- 크기 4와 temp 배열로 Collector 객체 weight 생성

```
double avg = calcAvg(weight);
```
- weight 객체의 평균값을 계산하여 avg에 저장

```
weight.show();
```
- weight 객체의 데이터 출력

```
cout << "평균은 " << avg << endl;
```
- 평균값 출력

```
}
```
- main 함수 종료

<br>

## 실행결과


<img width="869" height="116" alt="스크린샷 2026-05-14 203932" src="https://github.com/user-attachments/assets/0a44066b-eead-4054-837c-44b86193c32c" />

