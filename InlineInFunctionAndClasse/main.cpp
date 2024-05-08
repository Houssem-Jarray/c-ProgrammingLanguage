//
// Created by houssem on 26/04/24.
//

#include <iostream>

using namespace std;

class Operation{
    int a, b;
public:
    void get();
    void sum();
    void division();
    void mult();
    void soustraction();
};

inline void Operation::get() {
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
}

inline void Operation::sum() {
    int s = a + b;
    cout << "sum : " << s << endl;
}

inline void Operation::mult() {
    int m = a * b;
    cout << "multi : " << m << endl;
}

inline void Operation::division() {
    double d = a / b;
    cout << "division : " << d << endl;
}

inline void Operation::soustraction() {
    int sous = a - b;
    cout << "soustraction : " << sous << endl;
}

int main(){
    Operation operation;
    operation.get();
    operation.sum();
    operation.mult();
    operation.division();
    operation.soustraction();
    return 0;
}