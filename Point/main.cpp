//
// Created by houssem on 09/05/24.
//

#include <iostream>
using namespace std;

class Point{
private:
    int x,y;
public:
    Point(){}
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    int getX() const {return this->x;}
    int getY() const {return this->y;}

    // setter with resend the reference of the object;
    Point &setX(int a) {this->x = a; return *this;}
    Point &setY(int a) {this->y = a; return *this;}
    void displayPoint(){
        cout << "Point : " << "(" << x << "," << y << ")"<< endl;
    }
    Point& pointRef(){
        return *this;
    }
    ~Point(){
        delete this;
    }

    Point & getPoint();
};


Point & Point::getPoint() {
    return *this;
}


int main(){
    Point p1;
    p1.displayPoint();
    Point p2(2,2);
    p2.displayPoint();
    p1.setX(1).setY(2);
    p1.displayPoint();

    Point p3 = p2.getPoint();
    p3.displayPoint();
    return 0;
}