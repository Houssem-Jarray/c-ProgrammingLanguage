//
// Created by houssem on 01/05/24.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void fun(int n, int* sq, double* sq_root){
    *sq = n * n;
    *sq_root = sqrt(n);
}

int main(){
    int n = 10;
    int sq;
    double sq_root;
    fun(n, &sq, &sq_root);

    printf("%d\n", sq);
    printf("%f\n", sq_root);

    return 0;
}