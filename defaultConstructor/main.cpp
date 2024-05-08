//
// Created by houssem on 08/05/24.
//

#include <iostream>
using namespace std;

class Base {
public:
    // compiler declares constructor
};

class A{
public:
    // User defined constructor
    A(){
        cout << "A constructor" << endl;
    }
    // uninitialized
    int size;
};

class B : public A{
    // compiler defines default constructor of B, and
    // inserts stub to call A constructor

    // compiler won't initialize any data of A
};

class C : public A{
public:
    // User defined default constructor of C
    // Compiler inserts stub to call A's constructor
    C(){
        cout << "C constructor" << endl;
        // compiler won't initialize any data of A
    }
};

class D : public A{
public:
    D(){
        cout << "D constructor"<<endl;
    }
private:
    A a;
};

class AA{
public:
    int sum = 0;
    AA();
    AA(int a, int x = 0){
        sum = a + x;
    }
    void print(){
        cout << "sum = " << sum << endl;
    }
};


int main(){
    Base base;
    cout << "-------------------------------------------" << endl;
    A a;
    cout << "-------------------------------------------" << endl;
    B b;
    cout << "-------------------------------------------" << endl;
    C c;
    cout << "-------------------------------------------" << endl;
    D d;
    cout << "-------------------------------------------" << endl;

    AA aa;
    AA aaa(10,20);
    AA aaaa(10);
    aa.print();
    aaa.print();
    aaaa.print();
    return 0;
}