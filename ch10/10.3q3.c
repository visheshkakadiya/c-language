#include <stdio.h>

void arraySum(int arr[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
        printf("%d", sum);
        if (i != n - 1) {
            printf(", ");
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Running sum: ");
    arraySum(arr, n);

    return 0;
}

