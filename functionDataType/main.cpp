//
// Created by houssem on 24/04/24.
//

#include <iostream>
using namespace std;

int max(int a, int b){
    if (a>b) return a;
    return b;
}
int main(){
    int a = 10;
    int b = 20;
    int m = max(a,b);
    cout << "max : " << m <<endl;
    return 0;
}