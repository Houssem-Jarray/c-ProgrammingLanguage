//
// Created by houssem on 24/04/24.
//

#include <iostream>
#include <string>
using namespace std;

void Func(){
    static int count = 0;
    cout << "value of count : " << count << endl;
    count ++;
}
int main(){
    for (int i=0; i<5; ++i){
        Func();
    }
    return 0;
}