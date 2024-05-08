//
// Created by houssem on 08/05/24.
//

#include <iostream>
using namespace std;

class A{
public:
    int sum = 0;
    A(); // default constructor with no arguments
    // user defined constructor with default argument
    A(int a, int x=0){
        sum = a+x;
    }

    void desplay(){
        cout << "sum : " << sum << endl;
    }
};

int main(){
    A b(10);
    A c(10,20);
    b.desplay();
    c.desplay();
    return 0;
}