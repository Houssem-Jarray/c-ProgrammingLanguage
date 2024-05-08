//
// Created by houssem on 05/05/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr;
    int i,n;

    printf("enter the number of elements : ");
    scanf("%d", &n);
    printf("entered number %d ", n);
    ptr = (int*)malloc(n * sizeof(int));

    for(i=0;i<n;++i)
        ptr[i] = i;
    printf("\n");
    for(i=0;i<n;++i){
        printf("p[%d] = %d\n", i, ptr[i]);
    }

    return 0;
}