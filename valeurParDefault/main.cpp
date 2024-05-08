//
// Created by houssem on 26/04/24.
//

#include <iostream>
using namespace std;

int sum(int a, int b, int x=0, int y=0){
    return a+b+x+y;
}

int main(){
    int res1 = sum(10,20);
    cout << "res 1 : " << res1 << endl;

    int res2 = sum(10,20, 30);
    cout << "res 2 : " << res2 << endl;

    int res3 = sum(10,20, 30, 40);
    cout << "res 3 : " << res3 << endl;

    return 0;
}