#include <stdio.h>

int findMinimum(int arr[], int size) {
    int min = arr[0];  // Assume the first element as the minimum
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];  // Update minimum if a smaller value is found
        }
    }
    
    return min;
}

int main() {
    int arr[] = {5, 2, 8, 3, 1, 9};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    
    int minimum = findMinimum(arr, size);  // Call the UDF to find the minimum value
    
    printf("The minimum value in the array is: %d\n", minimum);
    
    return 0;
}
