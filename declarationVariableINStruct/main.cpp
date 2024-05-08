//
// Created by houssem on 04/05/24.
//

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
} p1;

int main(){
    // Array of points
    Point arr[10];
    cout << "Enter the number of points : ";
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        printf("point p%d.x : ", i);
        cin>>arr[i].x;
        printf("point p%d.y : ", i);
        cin>>arr[i].y;
    }

    for(int i=0;i<n;i++){
        printf("point p%d.x = %d\n", i, arr[i].x);
        printf("point p%d.y = %d\n", i, arr[i].y);
        cout << endl;
    }

    return 0;
}
