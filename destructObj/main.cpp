//
// Created by houssem on 08/05/24.
//


#include <iostream>
using namespace std;

class Parent{
private:
    ~Parent(){
        cout << "Execute destructor!" << endl;
    }
public:
    Parent(){
        cout << "Execute constrcutor!" << endl;
    }
    void destruct(){
        delete this;
    }
};

int main(){
    Parent* parent = new Parent;
    parent->destruct();
    return 0;
}