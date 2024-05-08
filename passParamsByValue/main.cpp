//
// Created by houssem on 26/04/24.
//

#include <iostream>
using namespace std;


// pass params by value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 10;
    int y = 20;
    cout << "before swap :" << endl;
    cout << "x :" << x << endl;
    cout << "y :" << y << endl;
    swap(x, y);

    cout << "after swap :" << endl;
    cout << "x :" << x << endl;
    cout << "y :" << y << endl;
    return 0;
}