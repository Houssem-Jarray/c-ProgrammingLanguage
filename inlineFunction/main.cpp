//
// Created by houssem on 26/04/24.
//

#include <iostream>
using namespace std;

inline int cube(int s) {return s * s * s ;}

int main(){
    int n;
    cout << "Enter n :" << endl;
    cin>>n;
    cout << "cube of n : " << cube(n) << endl;
    return 0;
}