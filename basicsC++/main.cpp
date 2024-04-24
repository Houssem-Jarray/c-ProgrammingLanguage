//
// Created by houssem on 23/04/24.
//

#include <iostream>
using namespace std;
class Calculator {
public:
    int num1 = 20;
    int num2 = 30;

    void addition(){
        int result = num1 + num2;
        cout << result << endl;
    }
};
int main(){
    Calculator calculator;
    calculator.addition();

    return 0;
}