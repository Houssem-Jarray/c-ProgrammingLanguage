//
// Created by houssem on 05/05/24.
//

#include <bits/stdc++.h>

using namespace std;

class A{
    int* ptr;
public:
    A(){
        cout << "Constructor was called !" << endl;
    }
    ~A(){
        cout << "Destructor was called !" << endl;
    }
};
int main(){

    // Create an object of class A
    // using new operator
    A* a = new A;
    cout << "Object of class A was "
         << "created using new operator!"
         << endl;
    delete (a);

    A* b = (A*) malloc(sizeof(A));
    cout << "Object of class A was "
         << "created using malloc()!"
         << endl;
    free(b);

    cout << "Object of class A was "
         << "deleted using free()!"
         << endl;
    return 0;
}