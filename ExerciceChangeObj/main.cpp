//
// Created by houssem on 09/05/24.
//
#include <iostream>
using namespace std;

class Point{
private:
    int x,y;
public:
    Point(int x=0,int y=0){
        this->x = x;
        this->y = y;
    }
    Point &setX(int x){
        this->x = x;
        return *this;
    }
    Point &setY(int y){
        this->y = y;
        return *this;
    }
    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }
    void display(){
        cout <<"("<<this->x<<","<<this->y<<")"<<endl;
    }
    void setPoint(Point& p){
        this->x = p.getX();
        this->y = p.getY();
    };
    ~Point(){
    }
};


int main(){
    Point p1;
    p1.display();

    Point p2(5, 10);
    p1.setPoint(p2);
    p1.display();

    return 0;
}
