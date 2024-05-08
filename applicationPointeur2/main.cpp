//
// Created by houssem on 01/05/24.
//

#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, int n){
    int i = 0;
    while (n--){
        printf("%d ", *(arr + i));
        i++;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    printArray(arr, 5);
    return 0;
}