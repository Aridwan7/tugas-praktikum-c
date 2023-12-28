#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12] = {0};  // Initialize array B with zeros
    int C[12] = {0};  // Initialize array C with zeros

    // Calculate the average of array A
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    float average = (float)sum / 12;

    // Move values to arrays B and C based on the average
    int bIndex = 0, cIndex = 0;
    for (int i = 0; i < 12; i++) {
        if (A[i] > average) {
            B[bIndex++] = A[i];
        } else {
            C[cIndex++] = A[i];
        }
    }

    // Display contents of arrays A, B, and C
    printf("Array A: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }

    printf("\nArray B: ");
    for (int i = 0; i < bIndex; i++) {
        printf("%d ", B[i]);
    }

    printf("\nArray C: ");
    for (int i = 0; i < cIndex; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
