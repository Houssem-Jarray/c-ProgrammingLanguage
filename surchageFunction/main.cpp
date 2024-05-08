//
// Created by houssem on 26/04/24.
//

#include <iostream>
using namespace std;

class Calc{
public:
    int add(int a, int b){
        return a + b;
    }
    int add(int a, int b, int c){
        return a + b + c;
    }

    int mul(int a, int b){
        return a * b;
    }

    float mul(double a, int b){
        return a * b;
    }

    float mul(int a, double b){
        return a * b * b;
    }
};

int main(){
    Calc calc;
    int res1 = calc.add(10, 20);
    int res2 = calc.add(10, 20, 30);
    cout << "res1 : " << res1  << endl;
    cout << "res2 : " << res2  << endl;

    cout << "-----------------" << endl;

    int m1 = calc.mul(10,20);
    cout << "m1 : " << m1 << endl;

    float m2 = calc.mul(2.0, 10);
    cout << "m2 :" << m2 << endl;

    float m3 = calc.mul(2, 10.2);
    cout << "m3 :" << m3 << endl;

}