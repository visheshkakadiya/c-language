#include <stdio.h>

// User-Defined Function to calculate the cube of a number
int cube(int num) {
    return num * num * num;
}

int main() {
    int number, result;

    // Input
    printf("Enter any number: ");
    scanf("%d", &number);

    // Calculate the cube using the UDF
    result = cube(number);

    // Output
    printf("Cube is: %d\n", result);

    return 0;
}

