//
// Created by houssem on 26/04/24.
//

#include <iostream>
using namespace std;

class Largest{
    int a, b , m;
public:
    void set_data();
    friend void find_max(Largest);
};

void Largest::set_data() {
    cout << "Enter the first number :" << endl;
    cin >> a;
    cout << "Enter the second number :" << endl;
    cin >> b;
}

void find_max(Largest largest) {
    if(largest.a > largest.b) largest.m = largest.a;
    else largest.m = largest.b;
    cout << "Largest value : " << largest.m  << endl;
}

int main(){
    Largest largest;
    largest.set_data();
    find_max(largest);
    return 0;
}