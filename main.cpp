#include <iostream>


int add(int a, int b){
    return a + b;
}

class Calculator {
public:
    int x,y;

    int multiply(int a, int b){
        return a * b;
    }
};
int main() {
    int a,b,s,m;
    std::cin>>a;
    std::cin>>b;
    s = add(a,b);
    Calculator calculator;
    m = calculator.multiply(a,b);
    std::cout<<"sum : "<<s<<std::endl;
    std::cout<<"mult : "<<m<<std::endl;
    return 0;
}
