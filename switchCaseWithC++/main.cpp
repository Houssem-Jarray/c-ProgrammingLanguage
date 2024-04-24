//
// Created by houssem on 23/04/24.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    switch (n) {
        case 1:
            cout << "Go" << endl;
            break;
        case 2:
            cout << "c++" << endl;
            break;
        case 3:
            cout << "rust" << endl;
            break;
        case 4:
            cout << "python" <<endl;
            break;
        default:
            cout << "programming language";
    }

    return 0;
}