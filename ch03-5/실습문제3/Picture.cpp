// Title: Picture
// Date: 2026.03.31
// Author: 안성일

#include <iostream>
#include <cstring> 
using namespace std;

class Picture {
private:
    int width;
    int height;
    char place[20]; 

public:
    Picture() {
        width = 5;
        height = 7;
        strcpy(place, "모름");
    }

    
    Picture(int w, int h, const char* p) {
        width = w;
        height = h;
        strcpy(place, p);
    }

  
    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }

    const char* getPlace() {
        return place;
    }
};

int main() {
    Picture pic;
    Picture mt(10, 14, "한라산");

    cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
    cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
}
