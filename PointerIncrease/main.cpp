//
// Created by houssem on 30/04/24.
//

#include <bits/stdc++.h>
using namespace std;

void increase(void* data, int ptrSize){
    if(ptrSize == sizeof(char)){
        char* ptrChar;

        // typecase data to ptrchar
        ptrChar = (char*) data;
        (*ptrChar)++;
        cout << "*data pointes to an char" << endl;
    }else if(ptrSize == sizeof(int)){
        int* ptrInt;

        // typecase data to ptrInt
        ptrInt = (int*) data;
        (*ptrInt)++;
        cout << "*data pointes to an int" << endl;
    }
}

void geek(){
    // declare a char variable c
    char c = 'x';

    // declare a int variable i
    int i = 10;

    // increase the address of char variable
    increase(&c, sizeof(c));
    cout << "the content of c is " << c << endl;

    // increase the address of int variable
    increase(&i, sizeof(i));
    cout << "the content of i is " << i << endl;
}

int main(){
    geek();
    return 0;
}