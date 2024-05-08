//
// Created by houssem on 30/04/24.
//

#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    for_each(v.begin(), v.end(), [](int i){
       cout << i << " ";
    });
    cout << endl;
}

int main(){
    vector<int> v1 = {3, 1, 7, 9};
    vector<int> v2 = {10,2,7,16,9};

    printVector(v1);
    printVector(v2);

    //access v1 et v2 by reference
    auto pushInto = [&](int m){
        v1.push_back(m);
        v2.push_back(m);
    };
    // it pushed 20 into both v1 and v2
    pushInto(20);

    printVector(v1);
    printVector(v2);

    // access v1 by copy
    [v1]()
    {
        for (auto p = v1.begin(); p != v1.end(); p++)
        {
            cout << *p << " ";
        }
    };

    int N = 5;

    // below snippet find first number greater than N
    // [N]  denotes,   can access only N by value
    vector<int>::iterator p = find_if(v1.begin(), v1.end(), [N](int i) -> bool {
       return i > N;
    });

    cout << "First numbers greater than 5 is : " << *p << endl;

    // function to count numbers greater than or equal to N
    // [=] denotes,   can access all variable

    int count_N = count_if(v1.begin(), v1.end(), [=](const int i) -> bool{
        return (i >= N);
    });
    cout << "The count of element greater than or equal to N is : " << count_N << endl;

    return 0;
}