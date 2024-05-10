//
// Created by houssem on 08/05/24.
//


#include <iostream>
using namespace std;

class Box{
private:
    static int length;
    static int breath;
    static int height;

public:
    // a static member function
    static void print(){
        cout << "length : " << length << endl;
        cout << "breath : " << breath << endl;
        cout << "height : " << height << endl;
    }
};

int Box::length = 10;
int Box::breath = 20;
int Box::height = 30;


int main(){
    Box box;
    cout << "Static member function is called through the object name : " << endl;
    box.print();
    cout << endl;
    cout << "Static member function is called through the class name : " << endl;
    Box::print();
    cout << endl;
    return 0;
}