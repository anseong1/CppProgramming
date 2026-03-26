// Title: IntegerTriangle
// Date: 2026.03.26
// Autjor: 안성일

#include <iostream>     // 입출력 스트림 헤더 파일 포함
using namespace std;    // std 네임스페이스 사용(cout, endl 등을 std:: 없이 사용 가능)

class Triangle {            // Triangle 클래스 정의 시작
private:                   // 외부에서 접근 불가능한 private 영역
    int width;               // 폭 멤버변수 
    int height;              // 높이 멤버변수 
public:
    Triangle(int w, int h);         // 매개변수 있는 생성자 선언
    void setWidth(int w);           // 폭 setter 선언
    void setHeight(int h);          // 높이 setter 선언
    int getWidth();                 // 폭 getter 선언
    int getHeight();                // 높이 getter 선언
    ~Triangle();                    // 소멸자 선언
};                                  // 클래스 정의 끝

Triangle::Triangle(int w, int h) {    // 생성자 정의
    if (w <= 0 || h <= 0) {                 // 폭 또는 높이가 0 이하인 경우
        cout << "길이는 양수여야함, 대신에 폭1,높이1 삼각형생성" << endl; // 경고 메시지 출력
        width = 1;                          // 기본값 1로 설정
        height = 1;                         // 기본값 1로 설정
    } else {                                // 폭과 높이가 모두 양수인 경우
        width = w;                          // 전달받은 w를 width에 저장
        height = h;                         // 전달받은 h를 height에 저장
    }
}

Triangle::~Triangle() {                     // 소멸자 정의: 객체 소멸 시 자동 호출
    cout << "폭" << width << ",높이" << height << " 삼각형소멸" << endl; // 소멸 메시지 출력
}

void Triangle::setWidth(int w) {            // setWidth 정의
    if (w <= 0) cout << "폭은 양수이어야 함" << endl;  // 음수면 경고 출력
    else width = w;                         // 양수면 width에 저장
}

void Triangle::setHeight(int h) {           // setHeight 정의
    if (h <= 0) cout << "높이는 양수이어야 함" << endl; // 음수면 경고 출력
    else height = h;                        // 양수면 height에 저장
}

int Triangle::getWidth()  { return width; }   // width 값을 반환
int Triangle::getHeight() { return height; }  // height 값을 반환

int main() {                                
    Triangle tri(-10, -5);   // Triangle 객체 생성, 음수 전달 → 경고 출력 후 폭1, 높이1로 초기화
    tri.setWidth(-3);        // 음수 전달 → "폭은 양수이어야 함" 출력
    tri.setHeight(-5);       // 음수 전달 → "높이는 양수이어야 함" 출력
    tri.setWidth(3);         // 양수 전달 → width = 3으로 변경
    tri.setHeight(5);        // 양수 전달 → height = 5로 변경
    cout << "삼각형의 폭은 "   << tri.getWidth()  << endl;  // getter로 width 값 출력
    cout << "삼각형의 높이는 " << tri.getHeight() << endl;  // getter로 height 값 출력
    return 0;                // 0을 반환하고 프로그램 종료
}
