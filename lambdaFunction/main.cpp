//
// Created by houssem on 30/04/24.
//

#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> v){
    // lambda expression to print a vector of ints
    for_each(v.begin(), v.end(), [](int i){
        cout << i << " ";
    });
    cout<<endl;
}

int main(){
    vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};
    printVector(v);

    // below snippet find first number greater than 4
    // find_if searches for an element for which
    // function(third argument) returns true
    vector<int>::iterator p = find_if(v.begin(), v.end(), [](int i){
        return i > 4;
    });
    cout << "First number greater than 4 is " << *p << endl;

    sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool {
        return a > b;
    });

    printVector(v);

    // function for removing duplicate element (after sorting all
    // duplicate comes together)
    p = unique(v.begin(), v.end(), [](int a, int b){
        return a == b;
    });

    printVector(v);

    v.resize(distance(v.begin(), p));
    printVector(v);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // accumulate function to calculate the factorial value
    int f = accumulate(arr, arr+10,1,[](int i, int j){
        return i*j;
    });

    cout << "The factorial value is : " << f << endl;

    // lambda function to calculate the square of int
    auto square = [](int i){
        return i * i;
    };
    cout << "Square value of 5 is " << square(5) << endl;

    return 0;
}