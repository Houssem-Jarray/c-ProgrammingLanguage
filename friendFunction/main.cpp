//
// Created by houssem on 06/05/24.
//
#include <iostream>
using namespace std;

class base;

class anthorClass{
public:
    void memberFunction(base& obj);
};

class base{
private:
    int private_variable;
protected:
    int protected_variable;
public:
    base(){
        this->private_variable = 10;
        this->protected_variable = 20;
    }

    friend void anthorClass::memberFunction(base &obj);
};

void anthorClass::memberFunction(base &obj) {
    cout << "private variable ==> " << obj.private_variable << endl;
    cout << "protected variable ==> " << obj.protected_variable << endl;}
int main(){
    base b;
    anthorClass a;
    a.memberFunction(b);
    return 0;
}