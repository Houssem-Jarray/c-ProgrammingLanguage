//
// Created by houssem on 22/04/24.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    // variables
    auto an_int = 26;
    auto a_bool = true;
    auto a_float = 26.42;
    auto ptr = &a_float;

    // print typeid
    cout << typeid(a_float).name() << endl;
    cout << typeid(a_bool).name() << endl;
    return 0;
}