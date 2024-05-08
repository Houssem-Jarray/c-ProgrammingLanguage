//
// Created by houssem on 04/05/24.
//

#include<stdio.h>

struct Node{
    int data1;
    char data2;
    struct Node* link;
};

int main(){
    Node ob1, ob2;
    ob1.data1 = 10;
    ob1.data2 = 'A';
    ob1.link = NULL;

    ob2.data1 = 20;
    ob2.data2 = 'B';
    ob2.link = NULL;

    // Linking ob1 to ob2 using self-reference struct

    ob1.link = &ob2;

    // accessing to ob2 data using ob link
    printf("ob2.data1 : %d\n", ob1.link->data1);
    printf("ob2.data2 : %c\n", ob1.link->data2);
    printf("ob2.link : %p\n", ob1.link->link);

    return 0;
}