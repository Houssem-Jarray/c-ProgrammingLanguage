//
// Created by houssem on 02/05/24.
//

#include <iostream>

using namespace std;

int main(){
    // create string from array of char
    char s1[] = "hello world";
    int n = sizeof(s1) / sizeof(char);
    cout<<n<<endl;
    for(int i=0; i<n-1;i++) cout << s1[i];
    cout << endl;

    // using std::string class
    string str("geeksforgeeks");
    string str1 = "helloworld";
    cout<<str<<endl;
    cout<<str1<<endl;
    string st1,st2;
    getline(cin, st2);
    cout << st2 << endl;

    // working with pointer string
    char* p = &st2[0];

    while(*p != '\0'){
        cout << *p;
        p++;
    }
}