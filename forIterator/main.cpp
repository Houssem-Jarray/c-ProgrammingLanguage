//
// Created by houssem on 25/04/24.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    for(int n : v) cout << n << ' ';
    cout << endl;

    string ch = "hello to the c++ programming language";
    for (char c : ch) cout << c << ' ';
    cout << endl;

    // Printing keys and values of a map
    map<int, int> MAP({ { 1, 1 }, { 2, 2 }, { 3, 3 } });
    for (auto i : MAP)
        cout << '{' << i.first << ", " << i.second << "}\n";
    return 0;
}