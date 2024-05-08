//
// Created by houssem on 03/05/24.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string line = "this is a line of string";
    string word;
    stringstream ss(line);
    vector<string> v;
    while(getline(ss, word, ' ')){
        v.push_back(word);
    }
    for(int i=0; i<v.size();i++){
        cout << v[i] << endl;
    }

}