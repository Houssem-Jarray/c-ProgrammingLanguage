//
// Created by houssem on 24/04/24.
//

#include <iostream>
using namespace std;

int x = 5;
void externClasseDeSockage(){
    cout << "Demonstrate classe de stockage externe" << endl;
    extern int x;
    cout <<  "Value of the variable x : " << x << endl;
    x = 2;
    cout <<  "Value of the variable x after change : " << x << endl;
}

int main(){
    externClasseDeSockage();
    return 0;
}