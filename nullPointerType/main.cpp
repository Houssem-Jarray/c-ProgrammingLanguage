//
// Created by houssem on 01/05/24.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    // create two variable of type nullptr_t and contains nullptr value

    nullptr_t np1, np2;

    // <= and >= comparison always return true
    if (np1 >= np2)
        cout << "can compare" << endl;
    else
        cout << "can not compare" << endl;
    char *x = np1;

    if(x == nullptr)
        cout << "x is null" << endl;
    else
        cout << "x is not null" << endl;

    return 0;
}