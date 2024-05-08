//
// Created by houssem on 02/05/24.
//

#include <iostream>
using namespace std;

void printSizeOfArray(int arr[]){
    cout << sizeof(arr) << endl;
}

// passe tableau dimensionné
void printarray(int a[10]){
    for (int i = 0; i < 5; i++)
        a[i] = a[i] + 5;
}

// passe tableau non dimensionné
void printarrayNonDim(int a[], int size){
    for (int i = 0; i < size; i++)
        a[i] = a[i] + 5;
}

// passe tableau by poniter
void printarrayByPointer(int* a, int size){
    for (int i = 0; i < size; i++)
        *(a+i) = *(a + i) + 5;
}

// pass tableau by reference
void printarrayByReference(int a[], int size){
    for (int i = 0; i < size; i++)
        a[i] = a[i] + 5;
}

void modifyArray(int (&arr)[5])
{
    // deducing size
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2;
    }
}
int main(){
    int arr[10];
    cout << sizeof(arr) << endl;
    printSizeOfArray(arr);

    int a[5] = { 1, 2, 3, 4, 5 };
    printarray(a); // Passing array to function

    // printing array elements
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    int n = sizeof(arr)  / sizeof(int);
    printarrayNonDim(arr, n);
    cout << endl;
    // printing array elements
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    printarrayByPointer(reinterpret_cast<int*>(arr), n);
    cout << endl;
    // printing array elements
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    int& ref = *arr;
    cout << endl;
    int ar[] = { 1, 2, 3, 4, 5 };
    modifyArray(ar);

    for(int i=0; i<n;i++)
        cout << ar[i] << " ";

    return 0;
}