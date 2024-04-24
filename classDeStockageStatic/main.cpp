//
// Created by houssem on 24/04/24.
//

#include <iostream>

using namespace std;

int staticFunc(){
    cout << "For static variables :";
    static int count = 0;
    count++;
    return count;
}

int nonStaticFunc(){
    cout << "For non static variables :";
    int count = 0;
    count++;
    return count;
}

int main(){
    cout << staticFunc() << endl;
    cout << staticFunc() << endl;

    cout << nonStaticFunc() << endl;
    cout << nonStaticFunc() << endl;
    return 0;
}