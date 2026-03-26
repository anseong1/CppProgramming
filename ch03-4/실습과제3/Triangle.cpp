// Title: Triangle
// Date: 2026.03.26
// Author: 안성일

#include <iostream>   // 입출력 스트림 헤더 포함
using namespace std;  // std 네임스페이스 사용(cout, endl 등을 std:: 없이 사용 가능)

class Triangle {      // Triangle 클래스 정의 시작
private:              // 외부에서 접근 불가능한 private 영역
    int width;       // 삼각형의 폭 
    int height;      // 삼각형의 높이
public:
    Triangle();                // 생성자 선언
    void setWidth(int w);      // 폭 setter 선언
    void setHeight(int h);     // 높이 setter 선언
    int getWidth();            // 폭 getter 선언
    int getHeight();           // 높이 getter 선언
    double getArea();          // 면적 반환 함수 선언
    ~Triangle();               // 소멸자 선언
};

Triangle::Triangle() {         // 생성자: 초기값 폭1, 높이1로 설정
    width = 1;
    height = 1;
    cout << "폭" << width << ",높이" << height << " 삼각형생성" << endl;
}

Triangle::~Triangle() {        // 소멸자: 객체 소멸 시 자동 호출
    cout << "폭" << width << ",높이" << height << " 삼각형소멸" << endl;
}

void Triangle::setWidth(int w)  { width = w; }
void Triangle::setHeight(int h) { height = h; }
int Triangle::getWidth()        { return width; }
int Triangle::getHeight()       { return height; }
double Triangle::getArea()      { return width * height * 0.5; }  // 삼각형 넓이 = 폭 * 높이 / 2

int main() {
    Triangle tri;               // 객체 생성 → 생성자 호출: "폭1,높이1 삼각형생성" 출력
    tri.setWidth(3);            // 폭을 3으로 변경
    tri.setHeight(5);           // 높이를 5로 변경
    cout << "삼각형의 폭은 "   << tri.getWidth()  << endl;  // 3 출력
    cout << "삼각형의 높이는 " << tri.getHeight() << endl;  // 5 출력
    cout << "삼각형의 면적은 " << tri.getArea()   << endl;  // 7.5 출력
    return 0;                   // 0을 반환하고 프로그램 종료
}
