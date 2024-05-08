//
// Created by houssem on 26/04/24.
//

#include <bits/stdc++.h>

using namespace std;

int main(){
   int arr[3][3];

   for(int i=0 ;i < size(arr[0]);i++) {
       for(int j=0; j < size(arr[i]);j++) {
           cout << arr[i][j]<< "\t";
       }
       cout << endl;
   }

   return 0;
}