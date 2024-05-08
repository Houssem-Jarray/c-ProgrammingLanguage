//
// Created by houssem on 30/04/24.
//

#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    for_each(v.begin(), v.end(),[](int i){
        cout << i << " ";
    });
    cout << endl;
}
int main(){
    vector<int> v {7,2,1,1,5,3,6,4,6,9,8};
    printVector(v);

    // lambda function to find the first element grater than 4
    vector<int>::iterator it = find_if(v.begin(), v.end(), [](int i) -> bool {
        return i > 4;
    });
    cout << "The first grater element thant 4 is : " << *it << endl;

    // sort a vector using lambda function
    sort(v.begin(), v.end(), [](const int& a, const int& b){
       return a > b;
    });
    cout << "the sorted vector : " << endl;
    printVector(v);

    // count the number of element greater or equal to 5
    int c = count_if(v.begin(), v.end(), [](int i){
        return i >= 5;
    });
    cout << "the number of element greater or equal to 5 is " << c << endl;


    // function for removing duplicate element (after sorting all
    // duplicate comes together)
    auto p = unique(v.begin(), v.end(), [](int a, int b) -> bool
    {
        return a == b;
    });

    printVector(v);

    // resizing a v
    v.resize(distance(v.begin(), p));
    cout << "After resize : " << endl;
    printVector(v);

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int f = accumulate(arr, arr + 10, 1, [](int a, int b) -> int{
        return a * b;
    });
    cout << "The factorial of 10 is " << f << endl;

    auto square = [](int i){
        return i * i;
    };

    cout << "The square of 5 = " << square(5) << endl;
    return 0;
}