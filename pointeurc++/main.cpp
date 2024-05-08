//
// Created by houssem on 24/04/24.
//

#include <iostream>
using namespace std;

void func(){
    int var = 10;
    int* ptr;

    ptr = &var;

    cout << "value at ptr :" << ptr << endl;
    cout << "value at var :" << var << endl;
    cout << "value at *ptr :" << *ptr << endl;
}

int main(){
    func();
    return 0;
}