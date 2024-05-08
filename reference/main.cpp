//
// Created by houssem on 01/05/24.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x =10;

    // ref is a reference to x;
    int& ref = x;

    ref = 20;
    cout << "x = " << x << endl;

    x = 30;
    cout << "ref = " << ref << endl;

    return 0;
}