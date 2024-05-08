//
// Created by houssem on 05/05/24.
//

#include <bits/stdc++.h>
using namespace std;

typedef std::vector<int> vint;
typedef unsigned long long int ulli;

int main(){
    vint v;
    for(int i=0;i<11;i++){
        v.push_back(i);
    }
    for(auto i : v) cout << v[i] << " ";
    cout << endl;

    cout << "-----------------" << endl;
    ulli n = 124655464645;
    cout << n << endl;
    return 0;
}