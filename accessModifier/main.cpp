//
// Created by houssem on 06/05/24.
//

#include <iostream>
#include <math.h>

using namespace std;

class Parent {
protected:
    int id;
};

class Child : public Parent{
public:
    void setId(int newId){
        id = newId;
    }
    void desplayId(){
        cout << "The personal id is : "  << id << endl;
    }
};


class Circle{
public:
    double raduis;
    double computeArea(){
        return M_PI * raduis * raduis;
    }
};
int main(){
    Circle obj;
    obj.raduis = 3;
        double area = obj.computeArea();
    cout << "AREA : " << area << endl;

    Child child;
    child.setId(10);
    child.desplayId();
    return 0;
}