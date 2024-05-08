//
// Created by houssem on 25/04/24.
//

#include <iostream>
using namespace std;

int main(){
    const int num = 5;
    cout << "value of num before const casting :" << num << endl;

    // pointer to num
    const int* ptr = &num;

    // const casting
    int* nonConstPtr = const_cast<int*>(ptr);

    *nonConstPtr = 10;
    cout << "value of num after const casting :" << *nonConstPtr << endl;
    return 0;
}