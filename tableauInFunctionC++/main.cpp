#include <iostream>
#include <climits>

int printMin(const int arr[], int size) {
    int min = INT_MAX; // Use INT_MAX instead of INT8_MAX for integers
    for (int i = 0; i < size; ++i) {
        if (min > arr[i]) {
            min = arr[i]; // Update min if a smaller element is found
        }
    }
    return min;
}

int main() {
    int arr[5] = { 100, 20, 35, 14, 105 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int m = printMin(arr, size);
    std::cout << "min: " << m << std::endl;
    return 0;
}
