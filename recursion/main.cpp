//
// Created by houssem on 26/04/24.
//

#include <iostream>

using namespace std;

int nsum(int n){
    if (n == 0) return 0;
    int res = n + nsum(n-1);
    return res;
}

int main(){
    cout << "enter n :" << endl;
    int n;
    cin >> n;
    cout << "n sum : " << nsum(n) << endl;
    return 0;
}