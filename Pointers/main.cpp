//
// Created by houssem on 01/05/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr = (int*) malloc(sizeof(int));

    // desallocate pointer
    free(ptr);
    printf("Memory freed");
    // remove dangling pointer
    ptr = NULL;

    return 0;
}