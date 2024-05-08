//
// Created by houssem on 25/04/24.
//

#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    int num = 10;
    cout << "num type : " << typeid(num).name() << endl;

    // converting in to double
    auto numDouble = static_cast<double>(num);
    cout << "numDouble : " << typeid(numDouble).name() << endl;

    cout << "typeid(num).name() : " << typeid(num).name() << endl;


    return 0;
}