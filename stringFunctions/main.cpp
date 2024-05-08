//
// Created by houssem on 02/05/24.
//

#include <iostream>
using namespace std;

int main(){
    string s1 = "hello";
    string s2 = "world";

    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;

    // found the length of string
    cout << "length of s1 : " << s1.length() << endl;

    // swap the value of two string
    s1.swap(s2);

    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;

    // find the size of string
    cout << "size of s2 : " << s2.size() << endl;

    // resize a string
    s2.resize(4);
    cout << "s2 after resize : " << s2 << endl;

    // find string into another string
    int pos = s1.find("xr");
    cout << "pos of or is : " << pos << endl;

    // push back a caracter into the s1
    s1.push_back('h');
    cout << s1 << endl;
    s2.pop_back();
    cout << "s2 : " << s2 << endl;

    return 0;
}