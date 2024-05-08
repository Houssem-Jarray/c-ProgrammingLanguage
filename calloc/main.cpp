//
// Created by houssem on 05/05/24.
//

#include <stdio.h>
#include <stdlib.h>

float randomData(){
    float res = (float )rand() / (float )RAND_MAX;
    return res;
}

void freeMatrix(float** matrix, int size){
    for(int i=0;i<size;i++){
        free(matrix[i]);
    }
    free(matrix);
    printf("matrix successfully freed :)");
}

int main(){
    float** matrix;
    int n;
    do{
        printf("enter the number of elements : ");
        scanf("%d", &n);
        printf("entered number %d \n", n);
        if(n<=1){
            printf("n should > 1\n");
        }
    } while (n<=1);


    matrix = (float**) calloc(n, sizeof(float*));
    if(matrix == NULL){
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    for(int i=0;i<n;i++){
        matrix[i] = (float *) calloc(n, sizeof(float ));
        if (matrix[i] == NULL){
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
        for(int j=0; j<n;j++){
            matrix[i][j] = randomData();
        }
    }

    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            printf("%f\t", matrix[i][j]);
        }
        printf("\n");
    }

    freeMatrix(matrix, n);

    return 0;
}