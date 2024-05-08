//
// Created by houssem on 04/05/24.
//
#include <iostream>
using namespace std;

typedef struct GeekForGeeks {
    int G1;
    char G2;
    float G3;
} GeekForGeeks;

int main(){
    GeekForGeeks geekForGeeks;
    geekForGeeks.G1 = 10;
    geekForGeeks.G2 = 'G';
    geekForGeeks.G3 = 12.23;

    cout << "G1 : " << geekForGeeks.G1 << endl;
    cout << "G2 : " << geekForGeeks.G2 << endl;
    cout << "G3 : " << geekForGeeks.G3 << endl;


    return 0;
}