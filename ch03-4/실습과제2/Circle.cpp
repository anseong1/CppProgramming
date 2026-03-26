// Title: Circle
// Date: 2026.03.26
// Author: 안성일

#include <iostream>
using namespace std;

class Circle {
private:
    int radius;          // 외부에서 직접 접근 불가한 멤버변수 (정보은닉)
public:
    Circle();            // 생성자 선언
    void setRadius(int r);   // radius 값을 설정하는 setter 선언
    int getRadius();         // radius 값을 반환하는 getter 선언
};

Circle::Circle() { radius = 1; }        // 초기값 1로 설정
void Circle::setRadius(int r) { radius = r; }   // 전달받은 r을 radius에 저장
int Circle::getRadius() { return radius; }      // radius 값을 반환

int main() {
    Circle moon;            // Circle 객체 생성, 생성자 자동 호출 → radius = 1
    moon.setRadius(5);      // setter를 통해 radius를 5로 변경 
    cout << "원의 반지름은 " << moon.getRadius() << endl;  // getter를 통해 radius 값 출력
    return 0;
}
