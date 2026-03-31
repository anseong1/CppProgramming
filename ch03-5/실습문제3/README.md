# 실습과제

## 소스코드설명

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

---

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

---

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

---

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




