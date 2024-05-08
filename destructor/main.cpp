//
// Created by houssem on 08/05/24.
//

#include <iostream>
using namespace std;

class Test{
public:
    Test();
    ~Test();
};

Test::Test() {
    cout << "Constructor executed!" << endl;
}

Test::~Test() {
    cout << "Destructor executed!" << endl;
}
int main(){
    Test t1,t2,t3;
    return 0;
}