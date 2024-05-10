//
// Created by houssem on 08/05/24.
//

#include <iostream>
using namespace std;

class storeVal{
public:
    // constructor
    storeVal(){}
    // Copy Constructor
    storeVal(const storeVal& s){
        cout << "Copy constructor has been called " << endl;
    }
};

storeVal foo(){
    storeVal obj;
    return obj;
}

void foo2(storeVal& sv){
    return;
}

int main(){
    storeVal obj1;

    cout << "Case 1: ";
    foo();
    cout << endl;

    cout << "Case 2: ";
    foo2(obj1);
    cout << endl;

    cout << "Case 3: ";
    storeVal obj2 = obj1;
    return 0;
}